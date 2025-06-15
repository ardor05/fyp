// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_battery_msgs:msg/InverterStatus.idl
// generated code does not contain a copyright notice

#include "robotnik_battery_msgs/msg/detail/inverter_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_battery_msgs
const rosidl_type_hash_t *
robotnik_battery_msgs__msg__InverterStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x96, 0xb5, 0xe9, 0xca, 0x44, 0x01, 0x0c,
      0xa4, 0x7f, 0xfe, 0x93, 0xd6, 0xc5, 0xd6, 0x11,
      0xd5, 0x24, 0x6f, 0x12, 0xa4, 0x54, 0x92, 0xfb,
      0x88, 0x40, 0x3e, 0x91, 0x69, 0x7a, 0x25, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotnik_battery_msgs__msg__InverterStatus__TYPE_NAME[] = "robotnik_battery_msgs/msg/InverterStatus";

// Define type names, field names, and default values
static char robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__ac_voltage[] = "ac_voltage";
static char robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__dc_voltage[] = "dc_voltage";
static char robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__load[] = "load";
static char robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__percentage[] = "percentage";
static char robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__temperature[] = "temperature";
static char robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__on[] = "on";
static char robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__serial_number[] = "serial_number";

static rosidl_runtime_c__type_description__Field robotnik_battery_msgs__msg__InverterStatus__FIELDS[] = {
  {
    {robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__ac_voltage, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__dc_voltage, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__load, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__percentage, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__on, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__InverterStatus__FIELD_NAME__serial_number, 13, 13},
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
robotnik_battery_msgs__msg__InverterStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_battery_msgs__msg__InverterStatus__TYPE_NAME, 40, 40},
      {robotnik_battery_msgs__msg__InverterStatus__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 ac_voltage       # Output Voltage in Volts (Mandatory)\n"
  "float32 dc_voltage       # Input Voltage in Volts (If unmeasured NaN)\n"
  "float32 load             # Current percentage load on 0 to 1 range (If unmeasured NaN)\n"
  "float32 percentage       # Charge percentage on 0 to 1 range (If unmeasured NaN)\n"
  "float32 temperature      # Current temperature in centigrads (If unmeasured NaN)\n"
  "bool    on               # True if the inverter is on\n"
  "\n"
  "string serial_number     # The best approximation of the battery serial number";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_battery_msgs__msg__InverterStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_battery_msgs__msg__InverterStatus__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 516, 516},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_battery_msgs__msg__InverterStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_battery_msgs__msg__InverterStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
