// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_battery_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#include "robotnik_battery_msgs/msg/detail/battery_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_battery_msgs
const rosidl_type_hash_t *
robotnik_battery_msgs__msg__BatteryStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0xfd, 0x57, 0x48, 0x39, 0x74, 0x37, 0xb4,
      0xde, 0x6a, 0x7f, 0x88, 0xfa, 0xef, 0x0a, 0x94,
      0xe1, 0xbd, 0x15, 0x73, 0x4b, 0x81, 0xb9, 0x0e,
      0xbc, 0x0c, 0xa7, 0x25, 0xa0, 0x92, 0xec, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotnik_battery_msgs__msg__BatteryStatus__TYPE_NAME[] = "robotnik_battery_msgs/msg/BatteryStatus";

// Define type names, field names, and default values
static char robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__voltage[] = "voltage";
static char robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__current[] = "current";
static char robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__level[] = "level";
static char robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__time_remaining[] = "time_remaining";
static char robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__time_charging[] = "time_charging";
static char robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__is_charging[] = "is_charging";
static char robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__cell_voltages[] = "cell_voltages";

static rosidl_runtime_c__type_description__Field robotnik_battery_msgs__msg__BatteryStatus__FIELDS[] = {
  {
    {robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__level, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__time_remaining, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__time_charging, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__is_charging, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__BatteryStatus__FIELD_NAME__cell_voltages, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_battery_msgs__msg__BatteryStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_battery_msgs__msg__BatteryStatus__TYPE_NAME, 39, 39},
      {robotnik_battery_msgs__msg__BatteryStatus__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 voltage\\t\\t\\t        # in volts\n"
  "float32 current\\t\\t\\t        # in amperes\n"
  "float32 level\\t\\t\\t        # in %\n"
  "uint32 time_remaining\\t\\t    # in minutes\n"
  "uint32 time_charging            # in minutes\n"
  "bool is_charging                # true when connected\n"
  "float32[] cell_voltages";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_battery_msgs__msg__BatteryStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_battery_msgs__msg__BatteryStatus__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 270, 270},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_battery_msgs__msg__BatteryStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_battery_msgs__msg__BatteryStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
