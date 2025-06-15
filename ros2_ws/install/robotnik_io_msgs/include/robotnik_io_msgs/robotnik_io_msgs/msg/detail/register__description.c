// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_io_msgs:msg/Register.idl
// generated code does not contain a copyright notice

#include "robotnik_io_msgs/msg/detail/register__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_type_hash_t *
robotnik_io_msgs__msg__Register__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x69, 0xa9, 0x5a, 0xac, 0x0c, 0x32, 0xf1,
      0xdf, 0x12, 0xfb, 0xc4, 0x8d, 0xa4, 0x44, 0x08,
      0xc9, 0xd0, 0x50, 0xdb, 0x96, 0xcc, 0x82, 0x2b,
      0x63, 0x89, 0x9f, 0x86, 0xb0, 0x8b, 0xf8, 0x7f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotnik_io_msgs__msg__Register__TYPE_NAME[] = "robotnik_io_msgs/msg/Register";

// Define type names, field names, and default values
static char robotnik_io_msgs__msg__Register__FIELD_NAME__address[] = "address";
static char robotnik_io_msgs__msg__Register__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field robotnik_io_msgs__msg__Register__FIELDS[] = {
  {
    {robotnik_io_msgs__msg__Register__FIELD_NAME__address, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__Register__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_io_msgs__msg__Register__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_io_msgs__msg__Register__TYPE_NAME, 29, 29},
      {robotnik_io_msgs__msg__Register__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 address\n"
  "int32 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_io_msgs__msg__Register__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_io_msgs__msg__Register__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_io_msgs__msg__Register__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_io_msgs__msg__Register__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
