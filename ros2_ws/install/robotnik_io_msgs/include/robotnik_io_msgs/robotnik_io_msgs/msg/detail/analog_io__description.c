// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_io_msgs:msg/AnalogIO.idl
// generated code does not contain a copyright notice

#include "robotnik_io_msgs/msg/detail/analog_io__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_type_hash_t *
robotnik_io_msgs__msg__AnalogIO__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x4c, 0x53, 0xe5, 0x52, 0x0d, 0x30, 0xec,
      0x45, 0x85, 0xb4, 0xb3, 0x21, 0x98, 0x89, 0x2b,
      0x56, 0x83, 0x61, 0xb3, 0xd7, 0xd7, 0x8a, 0xcc,
      0x56, 0xa0, 0x60, 0x2c, 0xb4, 0x3e, 0xb8, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotnik_io_msgs__msg__AnalogIO__TYPE_NAME[] = "robotnik_io_msgs/msg/AnalogIO";

// Define type names, field names, and default values
static char robotnik_io_msgs__msg__AnalogIO__FIELD_NAME__id[] = "id";
static char robotnik_io_msgs__msg__AnalogIO__FIELD_NAME__name[] = "name";
static char robotnik_io_msgs__msg__AnalogIO__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field robotnik_io_msgs__msg__AnalogIO__FIELDS[] = {
  {
    {robotnik_io_msgs__msg__AnalogIO__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__AnalogIO__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__AnalogIO__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_io_msgs__msg__AnalogIO__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_io_msgs__msg__AnalogIO__TYPE_NAME, 29, 29},
      {robotnik_io_msgs__msg__AnalogIO__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 id\n"
  "string name\n"
  "float64 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_io_msgs__msg__AnalogIO__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_io_msgs__msg__AnalogIO__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_io_msgs__msg__AnalogIO__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_io_msgs__msg__AnalogIO__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
