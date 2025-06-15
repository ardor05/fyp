// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_io_msgs:msg/InputsOutputs.idl
// generated code does not contain a copyright notice

#include "robotnik_io_msgs/msg/detail/inputs_outputs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_type_hash_t *
robotnik_io_msgs__msg__InputsOutputs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x94, 0xa6, 0x15, 0x52, 0xb2, 0x92, 0xb7,
      0x6b, 0x7a, 0x90, 0xdf, 0x02, 0x37, 0x65, 0xee,
      0xc9, 0x79, 0xc9, 0x55, 0x21, 0xc4, 0x95, 0x7d,
      0x17, 0x38, 0x6f, 0x2d, 0xc9, 0xa9, 0x9a, 0x6a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "robotnik_io_msgs/msg/detail/analog_io__functions.h"
#include "robotnik_io_msgs/msg/detail/digital_io__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t robotnik_io_msgs__msg__AnalogIO__EXPECTED_HASH = {1, {
    0x75, 0x4c, 0x53, 0xe5, 0x52, 0x0d, 0x30, 0xec,
    0x45, 0x85, 0xb4, 0xb3, 0x21, 0x98, 0x89, 0x2b,
    0x56, 0x83, 0x61, 0xb3, 0xd7, 0xd7, 0x8a, 0xcc,
    0x56, 0xa0, 0x60, 0x2c, 0xb4, 0x3e, 0xb8, 0xa1,
  }};
static const rosidl_type_hash_t robotnik_io_msgs__msg__DigitalIO__EXPECTED_HASH = {1, {
    0x84, 0x53, 0x6c, 0xd8, 0x27, 0x82, 0x43, 0xff,
    0x32, 0x37, 0x07, 0x1e, 0x8a, 0x7a, 0xf0, 0xab,
    0xbf, 0x67, 0x11, 0x49, 0xd5, 0x73, 0x14, 0x9d,
    0x12, 0xf6, 0x57, 0x55, 0xb4, 0xb5, 0x8e, 0x58,
  }};
#endif

static char robotnik_io_msgs__msg__InputsOutputs__TYPE_NAME[] = "robotnik_io_msgs/msg/InputsOutputs";
static char robotnik_io_msgs__msg__AnalogIO__TYPE_NAME[] = "robotnik_io_msgs/msg/AnalogIO";
static char robotnik_io_msgs__msg__DigitalIO__TYPE_NAME[] = "robotnik_io_msgs/msg/DigitalIO";

// Define type names, field names, and default values
static char robotnik_io_msgs__msg__InputsOutputs__FIELD_NAME__digital_inputs[] = "digital_inputs";
static char robotnik_io_msgs__msg__InputsOutputs__FIELD_NAME__digital_outputs[] = "digital_outputs";
static char robotnik_io_msgs__msg__InputsOutputs__FIELD_NAME__analog_inputs[] = "analog_inputs";
static char robotnik_io_msgs__msg__InputsOutputs__FIELD_NAME__analog_outputs[] = "analog_outputs";

static rosidl_runtime_c__type_description__Field robotnik_io_msgs__msg__InputsOutputs__FIELDS[] = {
  {
    {robotnik_io_msgs__msg__InputsOutputs__FIELD_NAME__digital_inputs, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robotnik_io_msgs__msg__DigitalIO__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__InputsOutputs__FIELD_NAME__digital_outputs, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robotnik_io_msgs__msg__DigitalIO__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__InputsOutputs__FIELD_NAME__analog_inputs, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robotnik_io_msgs__msg__AnalogIO__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__InputsOutputs__FIELD_NAME__analog_outputs, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robotnik_io_msgs__msg__AnalogIO__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_io_msgs__msg__InputsOutputs__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robotnik_io_msgs__msg__AnalogIO__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__DigitalIO__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_io_msgs__msg__InputsOutputs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_io_msgs__msg__InputsOutputs__TYPE_NAME, 34, 34},
      {robotnik_io_msgs__msg__InputsOutputs__FIELDS, 4, 4},
    },
    {robotnik_io_msgs__msg__InputsOutputs__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&robotnik_io_msgs__msg__AnalogIO__EXPECTED_HASH, robotnik_io_msgs__msg__AnalogIO__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robotnik_io_msgs__msg__AnalogIO__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_io_msgs__msg__DigitalIO__EXPECTED_HASH, robotnik_io_msgs__msg__DigitalIO__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_io_msgs__msg__DigitalIO__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "DigitalIO[] digital_inputs\n"
  "DigitalIO[] digital_outputs\n"
  "AnalogIO[] analog_inputs\n"
  "AnalogIO[] analog_outputs";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_io_msgs__msg__InputsOutputs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_io_msgs__msg__InputsOutputs__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 106, 106},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_io_msgs__msg__InputsOutputs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_io_msgs__msg__InputsOutputs__get_individual_type_description_source(NULL),
    sources[1] = *robotnik_io_msgs__msg__AnalogIO__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_io_msgs__msg__DigitalIO__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
