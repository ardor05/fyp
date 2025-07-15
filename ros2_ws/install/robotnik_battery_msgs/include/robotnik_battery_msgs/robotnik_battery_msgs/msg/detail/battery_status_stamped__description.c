// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_battery_msgs:msg/BatteryStatusStamped.idl
// generated code does not contain a copyright notice

#include "robotnik_battery_msgs/msg/detail/battery_status_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_battery_msgs
const rosidl_type_hash_t *
robotnik_battery_msgs__msg__BatteryStatusStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0xb0, 0x2d, 0xfd, 0x58, 0x9b, 0xa6, 0x90,
      0xfe, 0xa1, 0x23, 0x14, 0xb0, 0x0c, 0xf0, 0xf0,
      0x41, 0x2e, 0x42, 0x92, 0x11, 0xa3, 0xcd, 0xde,
      0xa7, 0x72, 0x46, 0xb2, 0x55, 0x85, 0xa7, 0x82,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "robotnik_battery_msgs/msg/detail/battery_status__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t robotnik_battery_msgs__msg__BatteryStatus__EXPECTED_HASH = {1, {
    0x39, 0xfd, 0x57, 0x48, 0x39, 0x74, 0x37, 0xb4,
    0xde, 0x6a, 0x7f, 0x88, 0xfa, 0xef, 0x0a, 0x94,
    0xe1, 0xbd, 0x15, 0x73, 0x4b, 0x81, 0xb9, 0x0e,
    0xbc, 0x0c, 0xa7, 0x25, 0xa0, 0x92, 0xec, 0xa0,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char robotnik_battery_msgs__msg__BatteryStatusStamped__TYPE_NAME[] = "robotnik_battery_msgs/msg/BatteryStatusStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robotnik_battery_msgs__msg__BatteryStatus__TYPE_NAME[] = "robotnik_battery_msgs/msg/BatteryStatus";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char robotnik_battery_msgs__msg__BatteryStatusStamped__FIELD_NAME__header[] = "header";
static char robotnik_battery_msgs__msg__BatteryStatusStamped__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field robotnik_battery_msgs__msg__BatteryStatusStamped__FIELDS[] = {
  {
    {robotnik_battery_msgs__msg__BatteryStatusStamped__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__BatteryStatusStamped__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_battery_msgs__msg__BatteryStatus__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_battery_msgs__msg__BatteryStatusStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__BatteryStatus__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_battery_msgs__msg__BatteryStatusStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_battery_msgs__msg__BatteryStatusStamped__TYPE_NAME, 46, 46},
      {robotnik_battery_msgs__msg__BatteryStatusStamped__FIELDS, 2, 2},
    },
    {robotnik_battery_msgs__msg__BatteryStatusStamped__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_battery_msgs__msg__BatteryStatus__EXPECTED_HASH, robotnik_battery_msgs__msg__BatteryStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_battery_msgs__msg__BatteryStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "BatteryStatus   status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_battery_msgs__msg__BatteryStatusStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_battery_msgs__msg__BatteryStatusStamped__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_battery_msgs__msg__BatteryStatusStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_battery_msgs__msg__BatteryStatusStamped__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_battery_msgs__msg__BatteryStatus__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
