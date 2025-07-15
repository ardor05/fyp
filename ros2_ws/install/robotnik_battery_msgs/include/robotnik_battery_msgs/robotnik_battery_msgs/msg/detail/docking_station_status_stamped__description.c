// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_battery_msgs:msg/DockingStationStatusStamped.idl
// generated code does not contain a copyright notice

#include "robotnik_battery_msgs/msg/detail/docking_station_status_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_battery_msgs
const rosidl_type_hash_t *
robotnik_battery_msgs__msg__DockingStationStatusStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x97, 0x24, 0xb8, 0x4e, 0x1c, 0xbf, 0x1f, 0x0e,
      0xa1, 0x95, 0x84, 0xf1, 0x43, 0xb9, 0x95, 0x3b,
      0xc3, 0x00, 0xdb, 0xbc, 0xd9, 0x62, 0x95, 0xd3,
      0xf0, 0x3b, 0xfe, 0xae, 0x98, 0xc3, 0x75, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "robotnik_battery_msgs/msg/detail/docking_station_status__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t robotnik_battery_msgs__msg__DockingStationStatus__EXPECTED_HASH = {1, {
    0xed, 0x37, 0xfc, 0xe7, 0x83, 0xa8, 0xb7, 0xcb,
    0x36, 0x6b, 0xa5, 0xf8, 0xae, 0x10, 0x52, 0xdc,
    0xe6, 0xab, 0x5d, 0xfd, 0x3a, 0xba, 0x54, 0xef,
    0x4b, 0xc0, 0x12, 0xea, 0xf9, 0x4c, 0xc5, 0xfa,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char robotnik_battery_msgs__msg__DockingStationStatusStamped__TYPE_NAME[] = "robotnik_battery_msgs/msg/DockingStationStatusStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robotnik_battery_msgs__msg__DockingStationStatus__TYPE_NAME[] = "robotnik_battery_msgs/msg/DockingStationStatus";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char robotnik_battery_msgs__msg__DockingStationStatusStamped__FIELD_NAME__header[] = "header";
static char robotnik_battery_msgs__msg__DockingStationStatusStamped__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field robotnik_battery_msgs__msg__DockingStationStatusStamped__FIELDS[] = {
  {
    {robotnik_battery_msgs__msg__DockingStationStatusStamped__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__DockingStationStatusStamped__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_battery_msgs__msg__DockingStationStatus__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_battery_msgs__msg__DockingStationStatusStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__DockingStationStatus__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_battery_msgs__msg__DockingStationStatusStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_battery_msgs__msg__DockingStationStatusStamped__TYPE_NAME, 53, 53},
      {robotnik_battery_msgs__msg__DockingStationStatusStamped__FIELDS, 2, 2},
    },
    {robotnik_battery_msgs__msg__DockingStationStatusStamped__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_battery_msgs__msg__DockingStationStatus__EXPECTED_HASH, robotnik_battery_msgs__msg__DockingStationStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_battery_msgs__msg__DockingStationStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "DockingStationStatus status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_battery_msgs__msg__DockingStationStatusStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_battery_msgs__msg__DockingStationStatusStamped__TYPE_NAME, 53, 53},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_battery_msgs__msg__DockingStationStatusStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_battery_msgs__msg__DockingStationStatusStamped__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_battery_msgs__msg__DockingStationStatus__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
