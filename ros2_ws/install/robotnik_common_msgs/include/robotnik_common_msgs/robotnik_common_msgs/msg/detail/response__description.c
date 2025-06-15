// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_common_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#include "robotnik_common_msgs/msg/detail/response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
const rosidl_type_hash_t *
robotnik_common_msgs__msg__Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x84, 0xe7, 0xbe, 0x9e, 0x26, 0xab, 0x33,
      0x0f, 0xac, 0x00, 0x29, 0x44, 0x55, 0x03, 0x34,
      0x29, 0x91, 0x2e, 0x85, 0x80, 0x56, 0x3c, 0x03,
      0xb3, 0xd1, 0x1f, 0x71, 0x06, 0x71, 0x85, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotnik_common_msgs__msg__Response__TYPE_NAME[] = "robotnik_common_msgs/msg/Response";

// Define type names, field names, and default values
static char robotnik_common_msgs__msg__Response__FIELD_NAME__success[] = "success";
static char robotnik_common_msgs__msg__Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field robotnik_common_msgs__msg__Response__FIELDS[] = {
  {
    {robotnik_common_msgs__msg__Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__msg__Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_common_msgs__msg__Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
      {robotnik_common_msgs__msg__Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool success\n"
  "string message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_common_msgs__msg__Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_common_msgs__msg__Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
