// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_io_msgs:msg/RegisterArray.idl
// generated code does not contain a copyright notice

#include "robotnik_io_msgs/msg/detail/register_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_type_hash_t *
robotnik_io_msgs__msg__RegisterArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0x1f, 0x80, 0x99, 0x0e, 0x64, 0x15, 0x3d,
      0x6a, 0x99, 0xf6, 0xca, 0x06, 0x3e, 0x53, 0xad,
      0x64, 0xcf, 0x2c, 0xab, 0xb4, 0x5c, 0x67, 0x53,
      0xeb, 0x50, 0x8e, 0xe5, 0xc6, 0x45, 0x4b, 0xbf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "robotnik_io_msgs/msg/detail/register__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t robotnik_io_msgs__msg__Register__EXPECTED_HASH = {1, {
    0xed, 0x69, 0xa9, 0x5a, 0xac, 0x0c, 0x32, 0xf1,
    0xdf, 0x12, 0xfb, 0xc4, 0x8d, 0xa4, 0x44, 0x08,
    0xc9, 0xd0, 0x50, 0xdb, 0x96, 0xcc, 0x82, 0x2b,
    0x63, 0x89, 0x9f, 0x86, 0xb0, 0x8b, 0xf8, 0x7f,
  }};
#endif

static char robotnik_io_msgs__msg__RegisterArray__TYPE_NAME[] = "robotnik_io_msgs/msg/RegisterArray";
static char robotnik_io_msgs__msg__Register__TYPE_NAME[] = "robotnik_io_msgs/msg/Register";

// Define type names, field names, and default values
static char robotnik_io_msgs__msg__RegisterArray__FIELD_NAME__registers[] = "registers";

static rosidl_runtime_c__type_description__Field robotnik_io_msgs__msg__RegisterArray__FIELDS[] = {
  {
    {robotnik_io_msgs__msg__RegisterArray__FIELD_NAME__registers, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robotnik_io_msgs__msg__Register__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_io_msgs__msg__RegisterArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robotnik_io_msgs__msg__Register__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_io_msgs__msg__RegisterArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_io_msgs__msg__RegisterArray__TYPE_NAME, 34, 34},
      {robotnik_io_msgs__msg__RegisterArray__FIELDS, 1, 1},
    },
    {robotnik_io_msgs__msg__RegisterArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&robotnik_io_msgs__msg__Register__EXPECTED_HASH, robotnik_io_msgs__msg__Register__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robotnik_io_msgs__msg__Register__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "robotnik_io_msgs/Register[] registers";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_io_msgs__msg__RegisterArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_io_msgs__msg__RegisterArray__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_io_msgs__msg__RegisterArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_io_msgs__msg__RegisterArray__get_individual_type_description_source(NULL),
    sources[1] = *robotnik_io_msgs__msg__Register__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
