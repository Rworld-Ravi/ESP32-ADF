/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: google/cloud/dialogflow/v2beta1/knowledge_base.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "knowledge_base.pb-c.h"
void   google__cloud__dialogflow__v2beta1__knowledge_base__init
                     (Google__Cloud__Dialogflow__V2beta1__KnowledgeBase         *message)
{
  static const Google__Cloud__Dialogflow__V2beta1__KnowledgeBase init_value = GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__KNOWLEDGE_BASE__INIT;
  *message = init_value;
}
size_t google__cloud__dialogflow__v2beta1__knowledge_base__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__KnowledgeBase *message)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__knowledge_base__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__cloud__dialogflow__v2beta1__knowledge_base__pack
                     (const Google__Cloud__Dialogflow__V2beta1__KnowledgeBase *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__knowledge_base__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__cloud__dialogflow__v2beta1__knowledge_base__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__KnowledgeBase *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__knowledge_base__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Cloud__Dialogflow__V2beta1__KnowledgeBase *
       google__cloud__dialogflow__v2beta1__knowledge_base__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Cloud__Dialogflow__V2beta1__KnowledgeBase *)
     protobuf_c_message_unpack (&google__cloud__dialogflow__v2beta1__knowledge_base__descriptor,
                                allocator, len, data);
}
void   google__cloud__dialogflow__v2beta1__knowledge_base__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__KnowledgeBase *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__knowledge_base__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__init
                     (Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest         *message)
{
  static const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest init_value = GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__LIST_KNOWLEDGE_BASES_REQUEST__INIT;
  *message = init_value;
}
size_t google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest *message)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest *
       google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest *)
     protobuf_c_message_unpack (&google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__descriptor,
                                allocator, len, data);
}
void   google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__init
                     (Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse         *message)
{
  static const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse init_value = GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__LIST_KNOWLEDGE_BASES_RESPONSE__INIT;
  *message = init_value;
}
size_t google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse *message)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__pack
                     (const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse *
       google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse *)
     protobuf_c_message_unpack (&google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__descriptor,
                                allocator, len, data);
}
void   google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   google__cloud__dialogflow__v2beta1__get_knowledge_base_request__init
                     (Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest         *message)
{
  static const Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest init_value = GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__GET_KNOWLEDGE_BASE_REQUEST__INIT;
  *message = init_value;
}
size_t google__cloud__dialogflow__v2beta1__get_knowledge_base_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest *message)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__get_knowledge_base_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__cloud__dialogflow__v2beta1__get_knowledge_base_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__get_knowledge_base_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__cloud__dialogflow__v2beta1__get_knowledge_base_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__get_knowledge_base_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest *
       google__cloud__dialogflow__v2beta1__get_knowledge_base_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest *)
     protobuf_c_message_unpack (&google__cloud__dialogflow__v2beta1__get_knowledge_base_request__descriptor,
                                allocator, len, data);
}
void   google__cloud__dialogflow__v2beta1__get_knowledge_base_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__get_knowledge_base_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   google__cloud__dialogflow__v2beta1__create_knowledge_base_request__init
                     (Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest         *message)
{
  static const Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest init_value = GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__CREATE_KNOWLEDGE_BASE_REQUEST__INIT;
  *message = init_value;
}
size_t google__cloud__dialogflow__v2beta1__create_knowledge_base_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest *message)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__create_knowledge_base_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__cloud__dialogflow__v2beta1__create_knowledge_base_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__create_knowledge_base_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__cloud__dialogflow__v2beta1__create_knowledge_base_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__create_knowledge_base_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest *
       google__cloud__dialogflow__v2beta1__create_knowledge_base_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest *)
     protobuf_c_message_unpack (&google__cloud__dialogflow__v2beta1__create_knowledge_base_request__descriptor,
                                allocator, len, data);
}
void   google__cloud__dialogflow__v2beta1__create_knowledge_base_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__create_knowledge_base_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__init
                     (Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest         *message)
{
  static const Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest init_value = GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__DELETE_KNOWLEDGE_BASE_REQUEST__INIT;
  *message = init_value;
}
size_t google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest *message)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest *
       google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest *)
     protobuf_c_message_unpack (&google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__descriptor,
                                allocator, len, data);
}
void   google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor google__cloud__dialogflow__v2beta1__knowledge_base__field_descriptors[2] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__KnowledgeBase, name),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "display_name",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__KnowledgeBase, display_name),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__cloud__dialogflow__v2beta1__knowledge_base__field_indices_by_name[] = {
  1,   /* field[1] = display_name */
  0,   /* field[0] = name */
};
static const ProtobufCIntRange google__cloud__dialogflow__v2beta1__knowledge_base__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__knowledge_base__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.cloud.dialogflow.v2beta1.KnowledgeBase",
  "KnowledgeBase",
  "Google__Cloud__Dialogflow__V2beta1__KnowledgeBase",
  "google.cloud.dialogflow.v2beta1",
  sizeof(Google__Cloud__Dialogflow__V2beta1__KnowledgeBase),
  2,
  google__cloud__dialogflow__v2beta1__knowledge_base__field_descriptors,
  google__cloud__dialogflow__v2beta1__knowledge_base__field_indices_by_name,
  1,  google__cloud__dialogflow__v2beta1__knowledge_base__number_ranges,
  (ProtobufCMessageInit) google__cloud__dialogflow__v2beta1__knowledge_base__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__field_descriptors[3] =
{
  {
    "parent",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest, parent),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "page_size",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest, page_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "page_token",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest, page_token),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__field_indices_by_name[] = {
  1,   /* field[1] = page_size */
  2,   /* field[2] = page_token */
  0,   /* field[0] = parent */
};
static const ProtobufCIntRange google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.cloud.dialogflow.v2beta1.ListKnowledgeBasesRequest",
  "ListKnowledgeBasesRequest",
  "Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest",
  "google.cloud.dialogflow.v2beta1",
  sizeof(Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest),
  3,
  google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__field_descriptors,
  google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__field_indices_by_name,
  1,  google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__number_ranges,
  (ProtobufCMessageInit) google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__field_descriptors[2] =
{
  {
    "knowledge_bases",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse, n_knowledge_bases),
    offsetof(Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse, knowledge_bases),
    &google__cloud__dialogflow__v2beta1__knowledge_base__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "next_page_token",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse, next_page_token),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__field_indices_by_name[] = {
  0,   /* field[0] = knowledge_bases */
  1,   /* field[1] = next_page_token */
};
static const ProtobufCIntRange google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.cloud.dialogflow.v2beta1.ListKnowledgeBasesResponse",
  "ListKnowledgeBasesResponse",
  "Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse",
  "google.cloud.dialogflow.v2beta1",
  sizeof(Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse),
  2,
  google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__field_descriptors,
  google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__field_indices_by_name,
  1,  google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__number_ranges,
  (ProtobufCMessageInit) google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor google__cloud__dialogflow__v2beta1__get_knowledge_base_request__field_descriptors[1] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest, name),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__cloud__dialogflow__v2beta1__get_knowledge_base_request__field_indices_by_name[] = {
  0,   /* field[0] = name */
};
static const ProtobufCIntRange google__cloud__dialogflow__v2beta1__get_knowledge_base_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__get_knowledge_base_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.cloud.dialogflow.v2beta1.GetKnowledgeBaseRequest",
  "GetKnowledgeBaseRequest",
  "Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest",
  "google.cloud.dialogflow.v2beta1",
  sizeof(Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest),
  1,
  google__cloud__dialogflow__v2beta1__get_knowledge_base_request__field_descriptors,
  google__cloud__dialogflow__v2beta1__get_knowledge_base_request__field_indices_by_name,
  1,  google__cloud__dialogflow__v2beta1__get_knowledge_base_request__number_ranges,
  (ProtobufCMessageInit) google__cloud__dialogflow__v2beta1__get_knowledge_base_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor google__cloud__dialogflow__v2beta1__create_knowledge_base_request__field_descriptors[2] =
{
  {
    "parent",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest, parent),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "knowledge_base",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest, knowledge_base),
    &google__cloud__dialogflow__v2beta1__knowledge_base__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__cloud__dialogflow__v2beta1__create_knowledge_base_request__field_indices_by_name[] = {
  1,   /* field[1] = knowledge_base */
  0,   /* field[0] = parent */
};
static const ProtobufCIntRange google__cloud__dialogflow__v2beta1__create_knowledge_base_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__create_knowledge_base_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.cloud.dialogflow.v2beta1.CreateKnowledgeBaseRequest",
  "CreateKnowledgeBaseRequest",
  "Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest",
  "google.cloud.dialogflow.v2beta1",
  sizeof(Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest),
  2,
  google__cloud__dialogflow__v2beta1__create_knowledge_base_request__field_descriptors,
  google__cloud__dialogflow__v2beta1__create_knowledge_base_request__field_indices_by_name,
  1,  google__cloud__dialogflow__v2beta1__create_knowledge_base_request__number_ranges,
  (ProtobufCMessageInit) google__cloud__dialogflow__v2beta1__create_knowledge_base_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__field_descriptors[2] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest, name),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "force",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest, force),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__field_indices_by_name[] = {
  1,   /* field[1] = force */
  0,   /* field[0] = name */
};
static const ProtobufCIntRange google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.cloud.dialogflow.v2beta1.DeleteKnowledgeBaseRequest",
  "DeleteKnowledgeBaseRequest",
  "Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest",
  "google.cloud.dialogflow.v2beta1",
  sizeof(Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest),
  2,
  google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__field_descriptors,
  google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__field_indices_by_name,
  1,  google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__number_ranges,
  (ProtobufCMessageInit) google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCMethodDescriptor google__cloud__dialogflow__v2beta1__knowledge_bases__method_descriptors[4] =
{
  { "ListKnowledgeBases", &google__cloud__dialogflow__v2beta1__list_knowledge_bases_request__descriptor, &google__cloud__dialogflow__v2beta1__list_knowledge_bases_response__descriptor },
  { "GetKnowledgeBase", &google__cloud__dialogflow__v2beta1__get_knowledge_base_request__descriptor, &google__cloud__dialogflow__v2beta1__knowledge_base__descriptor },
  { "CreateKnowledgeBase", &google__cloud__dialogflow__v2beta1__create_knowledge_base_request__descriptor, &google__cloud__dialogflow__v2beta1__knowledge_base__descriptor },
  { "DeleteKnowledgeBase", &google__cloud__dialogflow__v2beta1__delete_knowledge_base_request__descriptor, &google__protobuf__empty__descriptor },
};
const unsigned google__cloud__dialogflow__v2beta1__knowledge_bases__method_indices_by_name[] = {
  2,        /* CreateKnowledgeBase */
  3,        /* DeleteKnowledgeBase */
  1,        /* GetKnowledgeBase */
  0         /* ListKnowledgeBases */
};
const ProtobufCServiceDescriptor google__cloud__dialogflow__v2beta1__knowledge_bases__descriptor =
{
  PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC,
  "google.cloud.dialogflow.v2beta1.KnowledgeBases",
  "KnowledgeBases",
  "Google__Cloud__Dialogflow__V2beta1__KnowledgeBases",
  "google.cloud.dialogflow.v2beta1",
  4,
  google__cloud__dialogflow__v2beta1__knowledge_bases__method_descriptors,
  google__cloud__dialogflow__v2beta1__knowledge_bases__method_indices_by_name
};
void google__cloud__dialogflow__v2beta1__knowledge_bases__list_knowledge_bases(ProtobufCService *service,
                                                                               const Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesRequest *input,
                                                                               Google__Cloud__Dialogflow__V2beta1__ListKnowledgeBasesResponse_Closure closure,
                                                                               void *closure_data)
{
  assert(service->descriptor == &google__cloud__dialogflow__v2beta1__knowledge_bases__descriptor);
  service->invoke(service, 0, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void google__cloud__dialogflow__v2beta1__knowledge_bases__get_knowledge_base(ProtobufCService *service,
                                                                             const Google__Cloud__Dialogflow__V2beta1__GetKnowledgeBaseRequest *input,
                                                                             Google__Cloud__Dialogflow__V2beta1__KnowledgeBase_Closure closure,
                                                                             void *closure_data)
{
  assert(service->descriptor == &google__cloud__dialogflow__v2beta1__knowledge_bases__descriptor);
  service->invoke(service, 1, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void google__cloud__dialogflow__v2beta1__knowledge_bases__create_knowledge_base(ProtobufCService *service,
                                                                                const Google__Cloud__Dialogflow__V2beta1__CreateKnowledgeBaseRequest *input,
                                                                                Google__Cloud__Dialogflow__V2beta1__KnowledgeBase_Closure closure,
                                                                                void *closure_data)
{
  assert(service->descriptor == &google__cloud__dialogflow__v2beta1__knowledge_bases__descriptor);
  service->invoke(service, 2, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void google__cloud__dialogflow__v2beta1__knowledge_bases__delete_knowledge_base(ProtobufCService *service,
                                                                                const Google__Cloud__Dialogflow__V2beta1__DeleteKnowledgeBaseRequest *input,
                                                                                Google__Protobuf__Empty_Closure closure,
                                                                                void *closure_data)
{
  assert(service->descriptor == &google__cloud__dialogflow__v2beta1__knowledge_bases__descriptor);
  service->invoke(service, 3, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void google__cloud__dialogflow__v2beta1__knowledge_bases__init (Google__Cloud__Dialogflow__V2beta1__KnowledgeBases_Service *service,
                                                                Google__Cloud__Dialogflow__V2beta1__KnowledgeBases_ServiceDestroy destroy)
{
  protobuf_c_service_generated_init (&service->base,
                                     &google__cloud__dialogflow__v2beta1__knowledge_bases__descriptor,
                                     (ProtobufCServiceDestroy) destroy);
}
