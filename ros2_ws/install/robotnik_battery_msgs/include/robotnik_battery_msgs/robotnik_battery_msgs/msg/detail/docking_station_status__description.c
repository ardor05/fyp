// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_battery_msgs:msg/DockingStationStatus.idl
// generated code does not contain a copyright notice

#include "robotnik_battery_msgs/msg/detail/docking_station_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_battery_msgs
const rosidl_type_hash_t *
robotnik_battery_msgs__msg__DockingStationStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x37, 0xfc, 0xe7, 0x83, 0xa8, 0xb7, 0xcb,
      0x36, 0x6b, 0xa5, 0xf8, 0xae, 0x10, 0x52, 0xdc,
      0xe6, 0xab, 0x5d, 0xfd, 0x3a, 0xba, 0x54, 0xef,
      0x4b, 0xc0, 0x12, 0xea, 0xf9, 0x4c, 0xc5, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotnik_battery_msgs__msg__DockingStationStatus__TYPE_NAME[] = "robotnik_battery_msgs/msg/DockingStationStatus";

// Define type names, field names, and default values
static char robotnik_battery_msgs__msg__DockingStationStatus__FIELD_NAME__operation_mode[] = "operation_mode";
static char robotnik_battery_msgs__msg__DockingStationStatus__FIELD_NAME__contact_relay_status[] = "contact_relay_status";
static char robotnik_battery_msgs__msg__DockingStationStatus__FIELD_NAME__charger_relay_status[] = "charger_relay_status";

static rosidl_runtime_c__type_description__Field robotnik_battery_msgs__msg__DockingStationStatus__FIELDS[] = {
  {
    {robotnik_battery_msgs__msg__DockingStationStatus__FIELD_NAME__operation_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__DockingStationStatus__FIELD_NAME__contact_relay_status, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__DockingStationStatus__FIELD_NAME__charger_relay_status, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_battery_msgs__msg__DockingStationStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_battery_msgs__msg__DockingStationStatus__TYPE_NAME, 46, 46},
      {robotnik_battery_msgs__msg__DockingStationStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Modes of operation:\n"
  "# no docking station contacts\n"
  "string MODE_DISABLED=disabled\n"
  "# Unattended relay detection & activation with no inputs/outputs feedback. Done by the hw\n"
  "string MODE_AUTO_HW=automatic_hw\n"
  "# Unattended relay detection & activation with inputs/outputs feedback. Done by the sw\n"
  "string MODE_AUTO_SW=automatic_sw\n"
  "# Unattended relay detection & and manual activation of the charging relay\n"
  "string MODE_MANUAL_SW=manual_sw\n"
  "\n"
  "string operation_mode\n"
  "\n"
  "bool contact_relay_status\\t# shows if there's contact with the charger\n"
  "bool charger_relay_status   # shows if the relay for the charge is active or not";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_battery_msgs__msg__DockingStationStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_battery_msgs__msg__DockingStationStatus__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 607, 607},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_battery_msgs__msg__DockingStationStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_battery_msgs__msg__DockingStationStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
