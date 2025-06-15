// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_battery_msgs:msg/InverterStatusStamped.idl
// generated code does not contain a copyright notice

#include "robotnik_battery_msgs/msg/detail/inverter_status_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_battery_msgs
const rosidl_type_hash_t *
robotnik_battery_msgs__msg__InverterStatusStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0xd0, 0x77, 0x70, 0x53, 0x71, 0x4e, 0xe4,
      0xd3, 0x53, 0x56, 0x3c, 0xaf, 0x51, 0x71, 0x98,
      0xa4, 0xb9, 0xbd, 0x18, 0xf6, 0x0d, 0xe0, 0x5e,
      0xc6, 0xe4, 0xb4, 0xc7, 0x47, 0x63, 0x00, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "robotnik_battery_msgs/msg/detail/inverter_status__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t robotnik_battery_msgs__msg__InverterStatus__EXPECTED_HASH = {1, {
    0x83, 0x96, 0xb5, 0xe9, 0xca, 0x44, 0x01, 0x0c,
    0xa4, 0x7f, 0xfe, 0x93, 0xd6, 0xc5, 0xd6, 0x11,
    0xd5, 0x24, 0x6f, 0x12, 0xa4, 0x54, 0x92, 0xfb,
    0x88, 0x40, 0x3e, 0x91, 0x69, 0x7a, 0x25, 0x72,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char robotnik_battery_msgs__msg__InverterStatusStamped__TYPE_NAME[] = "robotnik_battery_msgs/msg/InverterStatusStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robotnik_battery_msgs__msg__InverterStatus__TYPE_NAME[] = "robotnik_battery_msgs/msg/InverterStatus";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char robotnik_battery_msgs__msg__InverterStatusStamped__FIELD_NAME__header[] = "header";
static char robotnik_battery_msgs__msg__InverterStatusStamped__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field robotnik_battery_msgs__msg__InverterStatusStamped__FIELDS[] = {
  {
    {robotnik_battery_msgs__msg__InverterStatusStamped__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__InverterStatusStamped__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_battery_msgs__msg__InverterStatus__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_battery_msgs__msg__InverterStatusStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_battery_msgs__msg__InverterStatus__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_battery_msgs__msg__InverterStatusStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_battery_msgs__msg__InverterStatusStamped__TYPE_NAME, 47, 47},
      {robotnik_battery_msgs__msg__InverterStatusStamped__FIELDS, 2, 2},
    },
    {robotnik_battery_msgs__msg__InverterStatusStamped__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_battery_msgs__msg__InverterStatus__EXPECTED_HASH, robotnik_battery_msgs__msg__InverterStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_battery_msgs__msg__InverterStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "InverterStatus  status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_battery_msgs__msg__InverterStatusStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_battery_msgs__msg__InverterStatusStamped__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_battery_msgs__msg__InverterStatusStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_battery_msgs__msg__InverterStatusStamped__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_battery_msgs__msg__InverterStatus__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
