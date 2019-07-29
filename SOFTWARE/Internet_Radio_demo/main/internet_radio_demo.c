/* 
 * 
 * 
 * 
 * Internet Radio Demo Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_log.h"
#include "esp_wifi.h"
#include "nvs_flash.h"
#include "sdkconfig.h"
#include "audio_element.h"
#include "audio_pipeline.h"
#include "audio_event_iface.h"
#include "audio_common.h"
#include "http_stream.h"
#include "i2s_stream.h"
#include "aac_decoder.h"
#include "mp3_decoder.h"

#include "esp_peripherals.h"
#include "periph_touch.h"
#include "periph_button.h"
#include "input_key_service.h"
#include "periph_adc_button.h"
#include "periph_wifi.h"
#include "board.h"
#include "periph_button.h"

#define CURRENT 0
#define NEXT    1
#define PRESSET_RADIO 3
#define VOLUME_MUTED 10
#define AUDIO_HAL_VOL_DEFAULT 40


static const char *TAG = "INTERNET_RADIO_EXAMPLE";

static const char *radio[] = {
	//   URL,   Display Name,
	"http://stream.slam.nl/slamaac","SLAM! Live",
    "http://playerservices.streamtheworld.com/api/livestream-redirect/TLPSTR10AAC.aac","538 Dance Radio",	
	"http://playerservices.streamtheworld.com/api/livestream-redirect/RADIO538AAC.aac","538",
	"http://playerservices.streamtheworld.com/api/livestream-redirect/TLPSTR05AAC.aac","538 Global Dance Chart",
	"http://playerservices.streamtheworld.com/api/livestream-redirect/TLPSTR11AAC.aac","538 Hitzone",
	"http://playerservices.streamtheworld.com/api/livestream-redirect/TLPSTR19AAC.aac","538 Ibiza Radio",
    "http://playerservices.streamtheworld.com/api/livestream-redirect/TLPSTR09AAC.aac","538 Non-Stop",
    "http://playerservices.streamtheworld.com/api/livestream-redirect/TLPSTR16AAC.aac","538 Party",	
    "http://playerservices.streamtheworld.com/api/livestream-redirect/VERONICAAAC.aac","Radio Veronica",
    "http://playerservices.streamtheworld.com/api/livestream-redirect/SRGSTR12AAC.aac","Veronica 80's Hits",
    "http://playerservices.streamtheworld.com/api/livestream-redirect/SRGSTR13AAC.aac","Veronica 90's Hits",
    "http://playerservices.streamtheworld.com/api/livestream-redirect/SRGSTR14AAC.aac","Veronica 00's Top 500",
    "http://stream.radiocorp.nl/web10_aac","Slam! Non-Stop",
    "http://icecast.omroep.nl/radio1-bb-aac","Radio 1",
    "http://stream.radioreklama.bg:80/city.aac","City",
};
#define RADIO_COUNT (sizeof(radio)/sizeof(char*))/2
int radio_index=0;
    audio_pipeline_handle_t pipeline;
    audio_element_handle_t http_stream_reader, i2s_stream_writer, aac_decoder, mp3_decoder;
    audio_board_handle_t board_handle;
    audio_event_iface_handle_t evt;
	int player_volume = AUDIO_HAL_VOL_DEFAULT;

int _http_stream_event_handle(http_stream_event_msg_t *msg)
{

    if (msg->event_id == HTTP_STREAM_RESOLVE_ALL_TRACKS) {
        return ESP_OK;
    }

    if (msg->event_id == HTTP_STREAM_FINISH_TRACK) {
        return http_stream_next_track(msg->el);
    }
    if (msg->event_id == HTTP_STREAM_FINISH_PLAYLIST) {
        return http_stream_restart(msg->el);
    }
    return ESP_OK;

}

void tune_radio(int radio_index){
			ESP_LOGW(TAG, "[ * ] Tune stream");
            audio_pipeline_stop(pipeline);
            audio_pipeline_wait_for_stop(pipeline);
            audio_element_reset_state(aac_decoder);
            audio_element_reset_state(i2s_stream_writer);
            audio_pipeline_reset_ringbuffer(pipeline);
            audio_pipeline_reset_items_state(pipeline);
            audio_element_set_uri(http_stream_reader, radio[radio_index<<1]);
            audio_pipeline_run(pipeline);
            ESP_LOGW(TAG, "[ %s ] %s",radio[((radio_index<<1)|1)],radio[radio_index<<1]);
            audio_element_info_t music_info = {0};
			audio_element_getinfo(aac_decoder, &music_info);
			ESP_LOGI(TAG, "[ * ] Receive music info from mp3 decoder, sample_rates=%d, bits=%d, ch=%d",
                     music_info.sample_rates, music_info.bits, music_info.channels);
			audio_element_setinfo(i2s_stream_writer, &music_info);
			i2s_stream_set_clk(i2s_stream_writer, music_info.sample_rates, music_info.bits, music_info.channels);
}

void app_main(void)
{
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }
 
    tcpip_adapter_init();
    
    ESP_LOGI(TAG, "[1.0] Initialize peripherals management");

    esp_log_level_set("*", ESP_LOG_INFO);
    esp_log_level_set(TAG, ESP_LOG_DEBUG);
    
  
	ESP_LOGI(TAG, "[ 1.1 ] Start audio codec chip");
    board_handle = audio_board_init();
    audio_hal_ctrl_codec(board_handle->audio_hal, AUDIO_HAL_CODEC_MODE_DECODE, AUDIO_HAL_CTRL_START);
    audio_hal_set_volume(board_handle->audio_hal, AUDIO_HAL_VOL_DEFAULT);    

    ESP_LOGI(TAG, "[2.0] Create audio pipeline for playback");
    audio_pipeline_cfg_t pipeline_cfg = DEFAULT_AUDIO_PIPELINE_CONFIG();
    pipeline = audio_pipeline_init(&pipeline_cfg);

    ESP_LOGI(TAG, "[2.1] Create http stream to read data");
    http_stream_cfg_t http_cfg = HTTP_STREAM_CFG_DEFAULT();
    http_cfg.event_handle = _http_stream_event_handle;
    http_cfg.type = AUDIO_STREAM_READER;
    http_cfg.enable_playlist_parser = true;
    http_stream_reader = http_stream_init(&http_cfg);

    ESP_LOGI(TAG, "[2.2] Create i2s stream to write data to codec chip");
    i2s_stream_cfg_t i2s_cfg = I2S_STREAM_CFG_DEFAULT();
    i2s_cfg.type = AUDIO_STREAM_WRITER;
    i2s_stream_writer = i2s_stream_init(&i2s_cfg);

    ESP_LOGI(TAG, "[2.3] Create aac decoder to decode aac file");
    aac_decoder_cfg_t aac_cfg = DEFAULT_AAC_DECODER_CONFIG();
    aac_decoder = aac_decoder_init(&aac_cfg);

    ESP_LOGI(TAG, "[2.4] Register all elements to audio pipeline");
    audio_pipeline_register(pipeline, http_stream_reader, "http");
    audio_pipeline_register(pipeline, aac_decoder,        "aac");
    audio_pipeline_register(pipeline, i2s_stream_writer,  "i2s");

    ESP_LOGI(TAG, "[2.5] Link it together http_stream-->aac_decoder-->i2s_stream-->[codec_chip]");
    audio_pipeline_link(pipeline, (const char *[]) {"http",  "aac", "i2s"}, 3);

    ESP_LOGI(TAG, "[2.6] Set up  uri (http as http_stream, aac as aac decoder, and default output is i2s)");
    audio_element_set_uri(http_stream_reader, radio[radio_index]);

    
    ESP_LOGI(TAG, "[ 3 ] Initialize peripherals");
    esp_periph_config_t periph_cfg = DEFAULT_ESP_PERIPH_SET_CONFIG();
    esp_periph_set_handle_t set = esp_periph_set_init(&periph_cfg);

    
    periph_wifi_cfg_t wifi_cfg = {
        .ssid = CONFIG_WIFI_SSID,
        .password = CONFIG_WIFI_PASSWORD,
    };
    esp_periph_handle_t wifi_handle = periph_wifi_init(&wifi_cfg);
    esp_periph_start(set, wifi_handle);
    periph_wifi_wait_for_connected(wifi_handle, portMAX_DELAY);
    
  
    ESP_LOGI(TAG, "[3.1] Initialize Touch peripheral");
    periph_touch_cfg_t touch_cfg = {
        .touch_mask = BIT(get_input_set_id()) | BIT(get_input_play_id()) | BIT(get_input_volup_id()) | BIT(get_input_voldown_id())  ,
        .tap_threshold_percent = 70,
    };
    esp_periph_handle_t touch_periph = periph_touch_init(&touch_cfg);
    periph_button_cfg_t btn_cfg = {
        .gpio_mask = (1ULL << get_input_rec_id()) | (1ULL << get_input_mode_id()), //REC BTN & MODE BTN
    };
    esp_periph_handle_t button_handle = periph_button_init(&btn_cfg);

    ESP_LOGI(TAG, "[3.2] Start all peripherals");
    esp_periph_start(set, touch_periph);
    esp_periph_start(set, button_handle);
    
    

    ESP_LOGI(TAG, "[ 4 ] Set up  event listener");
    audio_event_iface_cfg_t evt_cfg = AUDIO_EVENT_IFACE_DEFAULT_CFG();
    evt = audio_event_iface_init(&evt_cfg);

    ESP_LOGI(TAG, "[4.1] Listening event from all elements of pipeline");
    audio_pipeline_set_listener(pipeline, evt);

    ESP_LOGI(TAG, "[4.2] Listening event from peripherals");
    audio_event_iface_set_listener(esp_periph_set_get_event_iface(set), evt);

    ESP_LOGI(TAG, "[ 5 ] Start audio_pipeline");
    audio_pipeline_run(pipeline);
    
     gpio_set_direction(get_green_led_gpio(), GPIO_MODE_OUTPUT);
     
     
   
     
     ESP_LOGW(TAG, "[ * ]     Touch buttons:");
     ESP_LOGW(TAG, "[ * ] *          Volume: Vol- Vol+");
     ESP_LOGW(TAG, "[ * ] *    Next station: <Play>");
     ESP_LOGW(TAG, "[ * ] * Presset station: <Set>");
     
     

     

 

    while (1) {
        audio_event_iface_msg_t msg;
        
        esp_err_t ret = audio_event_iface_listen(evt, &msg, portMAX_DELAY);

        if (ret != ESP_OK) {
            ESP_LOGE(TAG, "[ * ] Event interface error : %d", ret);
            gpio_set_level(get_green_led_gpio(), 0);
            continue;
        } else gpio_set_level(get_green_led_gpio(), 1);

        if (msg.source_type == AUDIO_ELEMENT_TYPE_ELEMENT
            && msg.source == (void *) aac_decoder
            && msg.cmd == AEL_MSG_CMD_REPORT_MUSIC_INFO) {
            audio_element_info_t music_info = {0};
            audio_element_getinfo(aac_decoder, &music_info);

            ESP_LOGI(TAG, "[ * ] Receive music info from aac decoder, sample_rates=%d, bits=%d, ch=%d",
                     music_info.sample_rates, music_info.bits, music_info.channels);

            audio_element_setinfo(i2s_stream_writer, &music_info);
            i2s_stream_set_clk(i2s_stream_writer, music_info.sample_rates, music_info.bits, music_info.channels);
            continue;
        }

        /* restart stream when the first pipeline element (http_stream_reader in this case) receives stop event (caused by reading errors) */
        if (msg.source_type == AUDIO_ELEMENT_TYPE_ELEMENT && msg.source == (void *) http_stream_reader
            && msg.cmd == AEL_MSG_CMD_REPORT_STATUS && (int) msg.data == AEL_STATUS_ERROR_OPEN) {
            ESP_LOGW(TAG, "[ * ] Restart stream");
            gpio_set_level(get_green_led_gpio(), 0);
            audio_pipeline_stop(pipeline);
            audio_pipeline_wait_for_stop(pipeline);
            audio_element_reset_state(aac_decoder);
            audio_element_reset_state(i2s_stream_writer);
            audio_pipeline_reset_ringbuffer(pipeline);
            audio_pipeline_reset_items_state(pipeline);
            audio_pipeline_run(pipeline);
            continue;
        }
        
		if ((int)msg.data == get_input_mode_id()) {

			
            if (msg.cmd == PERIPH_BUTTON_LONG_PRESSED){
					ESP_LOGI(TAG, "PERIPH_BUTTON_MODE_LONG_PRESSED");
            
		}
			if (msg.cmd == PERIPH_BUTTON_PRESSED){ 
				ESP_LOGI(TAG, "PERIPH_BUTTON_MODE_PRESSED");

		continue;		
	             
		}
			if ((msg.cmd == PERIPH_BUTTON_RELEASE) || (msg.cmd == PERIPH_BUTTON_LONG_RELEASE)){ 
				ESP_LOGI(TAG, "PERIPH_BUTTON_MODE_RELEASED");
		             
		}
            continue;
        }
        
   		if ((int)msg.data == get_input_rec_id()) {

            if (msg.cmd == PERIPH_BUTTON_LONG_PRESSED){
					ESP_LOGI(TAG, "PERIPH_BUTTON_REC_LONG_PRESSED");
            
		}
              if (msg.cmd == PERIPH_BUTTON_PRESSED){ 
				ESP_LOGI(TAG, "PERIPH_BUTTON_REC_PRESSED");
				
	
		}
		 	if  ((msg.cmd == PERIPH_BUTTON_RELEASE) || (msg.cmd == PERIPH_BUTTON_LONG_RELEASE)){ 
				ESP_LOGI(TAG, "PERIPH_BUTTON_REC_RELEASED");
		             
		}
            continue;
        }
             
            if (msg.source_type == PERIPH_ID_TOUCH
            && msg.cmd == PERIPH_TOUCH_TAP
            && msg.source == (void *)touch_periph) {
				
			
				
				if ((int) msg.data == get_input_play_id()) {
                ESP_LOGI(TAG, "[ * ] [Play] touch tap event");
                gpio_set_level(get_green_led_gpio(), 0);
                if (++radio_index > RADIO_COUNT - 1) {
            radio_index = 0;
        }
					
			tune_radio(radio_index);
            continue;
			
			
                break;
            } else 	if ((int) msg.data == get_input_set_id()) {
                ESP_LOGI(TAG, "[ * ] [Set] touch tap event");
                gpio_set_level(get_green_led_gpio(), 0);
                					
			tune_radio(PRESSET_RADIO);
            continue;
			
			
                break;
            } 
            
            else if ((int) msg.data == get_input_volup_id()) {
                ESP_LOGI(TAG, "[ * ] [Vol+] touch tap event");
                player_volume += 10;
                if (player_volume > 100) {
                    player_volume = 100;
                }
                audio_hal_set_volume(board_handle->audio_hal, player_volume);
                
                ESP_LOGI(TAG, "[ * ] Volume set to %d %%", player_volume);
            } else if ((int) msg.data == get_input_voldown_id()) {
                ESP_LOGI(TAG, "[ * ] [Vol-] touch tap event");
                player_volume -= 10;
                if (player_volume < 0) {
                    player_volume = 0;
                }
                audio_hal_set_volume(board_handle->audio_hal, player_volume);
               
                ESP_LOGI(TAG, "[ * ] Volume set to %d %%", player_volume);
            }
				
			}
        
        
        
    }

    ESP_LOGI(TAG, "[ 6 ] Stop audio_pipeline");
    audio_pipeline_terminate(pipeline);

    audio_pipeline_unregister(pipeline, http_stream_reader);
    audio_pipeline_unregister(pipeline, i2s_stream_writer);
    audio_pipeline_unregister(pipeline, aac_decoder);

    /* Terminate the pipeline before removing the listener */
    audio_pipeline_remove_listener(pipeline);

    /* Stop all peripherals before removing the listener */
    esp_periph_set_stop_all(set);
    audio_event_iface_remove_listener(esp_periph_set_get_event_iface(set), evt);

    /* Make sure audio_pipeline_remove_listener & audio_event_iface_remove_listener are called before destroying event_iface */
    audio_event_iface_destroy(evt);

    /* Release all resources */
    audio_pipeline_deinit(pipeline);
    audio_element_deinit(http_stream_reader);
    audio_element_deinit(i2s_stream_writer);
    audio_element_deinit(aac_decoder);
    esp_periph_set_destroy(set);
}
