// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_io_msgs:srv/SetRegisters.idl
// generated code does not contain a copyright notice

#include "robotnik_io_msgs/srv/detail/set_registers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_type_hash_t *
robotnik_io_msgs__srv__SetRegisters__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x35, 0x1e, 0x5d, 0xb0, 0xbb, 0x8a, 0x72,
      0xd5, 0x9e, 0x0a, 0x1f, 0x94, 0x2a, 0xed, 0xfc,
      0xff, 0xb9, 0x28, 0x26, 0x37, 0x80, 0x8b, 0x7d,
      0xea, 0x4b, 0x9b, 0x10, 0xbc, 0x5c, 0x02, 0x7d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_type_hash_t *
robotnik_io_msgs__srv__SetRegisters_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0x28, 0x31, 0x5f, 0xc1, 0x80, 0x65, 0xe0,
      0xc4, 0xad, 0xc8, 0x28, 0xca, 0x79, 0x44, 0xa2,
      0xd7, 0x2f, 0x83, 0x5e, 0xdd, 0x7c, 0x38, 0x76,
      0x4f, 0x7a, 0x7b, 0x88, 0xf7, 0x61, 0x83, 0x98,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_type_hash_t *
robotnik_io_msgs__srv__SetRegisters_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x3b, 0x7b, 0x79, 0x4b, 0xee, 0x4b, 0x18,
      0x1e, 0x9f, 0x97, 0xd7, 0x8f, 0x3c, 0xb2, 0x59,
      0x6f, 0x3e, 0x24, 0xdb, 0xa0, 0xf7, 0xd7, 0xbb,
      0x32, 0xb9, 0x1a, 0x3f, 0xa0, 0x31, 0x00, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_type_hash_t *
robotnik_io_msgs__srv__SetRegisters_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x63, 0x62, 0x3b, 0xf3, 0x6f, 0x21, 0xc6,
      0x8c, 0x66, 0x3b, 0x09, 0xdc, 0xbb, 0x18, 0xb6,
      0xa6, 0x4e, 0x79, 0x82, 0x72, 0xac, 0xf5, 0xe8,
      0xda, 0x5c, 0x2b, 0xab, 0xd1, 0x37, 0xee, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "robotnik_common_msgs/msg/detail/response__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "robotnik_io_msgs/msg/detail/register__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t robotnik_common_msgs__msg__Response__EXPECTED_HASH = {1, {
    0x01, 0x84, 0xe7, 0xbe, 0x9e, 0x26, 0xab, 0x33,
    0x0f, 0xac, 0x00, 0x29, 0x44, 0x55, 0x03, 0x34,
    0x29, 0x91, 0x2e, 0x85, 0x80, 0x56, 0x3c, 0x03,
    0xb3, 0xd1, 0x1f, 0x71, 0x06, 0x71, 0x85, 0x29,
  }};
static const rosidl_type_hash_t robotnik_io_msgs__msg__Register__EXPECTED_HASH = {1, {
    0xed, 0x69, 0xa9, 0x5a, 0xac, 0x0c, 0x32, 0xf1,
    0xdf, 0x12, 0xfb, 0xc4, 0x8d, 0xa4, 0x44, 0x08,
    0xc9, 0xd0, 0x50, 0xdb, 0x96, 0xcc, 0x82, 0x2b,
    0x63, 0x89, 0x9f, 0x86, 0xb0, 0x8b, 0xf8, 0x7f,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char robotnik_io_msgs__srv__SetRegisters__TYPE_NAME[] = "robotnik_io_msgs/srv/SetRegisters";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robotnik_common_msgs__msg__Response__TYPE_NAME[] = "robotnik_common_msgs/msg/Response";
static char robotnik_io_msgs__msg__Register__TYPE_NAME[] = "robotnik_io_msgs/msg/Register";
static char robotnik_io_msgs__srv__SetRegisters_Event__TYPE_NAME[] = "robotnik_io_msgs/srv/SetRegisters_Event";
static char robotnik_io_msgs__srv__SetRegisters_Request__TYPE_NAME[] = "robotnik_io_msgs/srv/SetRegisters_Request";
static char robotnik_io_msgs__srv__SetRegisters_Response__TYPE_NAME[] = "robotnik_io_msgs/srv/SetRegisters_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char robotnik_io_msgs__srv__SetRegisters__FIELD_NAME__request_message[] = "request_message";
static char robotnik_io_msgs__srv__SetRegisters__FIELD_NAME__response_message[] = "response_message";
static char robotnik_io_msgs__srv__SetRegisters__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field robotnik_io_msgs__srv__SetRegisters__FIELDS[] = {
  {
    {robotnik_io_msgs__srv__SetRegisters__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_io_msgs__srv__SetRegisters_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_io_msgs__srv__SetRegisters_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_io_msgs__srv__SetRegisters_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_io_msgs__srv__SetRegisters__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__Register__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_io_msgs__srv__SetRegisters__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_io_msgs__srv__SetRegisters__TYPE_NAME, 33, 33},
      {robotnik_io_msgs__srv__SetRegisters__FIELDS, 3, 3},
    },
    {robotnik_io_msgs__srv__SetRegisters__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_io_msgs__msg__Register__EXPECTED_HASH, robotnik_io_msgs__msg__Register__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = robotnik_io_msgs__msg__Register__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robotnik_io_msgs__srv__SetRegisters_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = robotnik_io_msgs__srv__SetRegisters_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = robotnik_io_msgs__srv__SetRegisters_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_io_msgs__srv__SetRegisters_Request__FIELD_NAME__registers[] = "registers";

static rosidl_runtime_c__type_description__Field robotnik_io_msgs__srv__SetRegisters_Request__FIELDS[] = {
  {
    {robotnik_io_msgs__srv__SetRegisters_Request__FIELD_NAME__registers, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robotnik_io_msgs__msg__Register__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_io_msgs__srv__SetRegisters_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robotnik_io_msgs__msg__Register__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_io_msgs__srv__SetRegisters_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_io_msgs__srv__SetRegisters_Request__TYPE_NAME, 41, 41},
      {robotnik_io_msgs__srv__SetRegisters_Request__FIELDS, 1, 1},
    },
    {robotnik_io_msgs__srv__SetRegisters_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&robotnik_io_msgs__msg__Register__EXPECTED_HASH, robotnik_io_msgs__msg__Register__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robotnik_io_msgs__msg__Register__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_io_msgs__srv__SetRegisters_Response__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robotnik_io_msgs__srv__SetRegisters_Response__FIELDS[] = {
  {
    {robotnik_io_msgs__srv__SetRegisters_Response__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_io_msgs__srv__SetRegisters_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_io_msgs__srv__SetRegisters_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_io_msgs__srv__SetRegisters_Response__TYPE_NAME, 42, 42},
      {robotnik_io_msgs__srv__SetRegisters_Response__FIELDS, 1, 1},
    },
    {robotnik_io_msgs__srv__SetRegisters_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_io_msgs__srv__SetRegisters_Event__FIELD_NAME__info[] = "info";
static char robotnik_io_msgs__srv__SetRegisters_Event__FIELD_NAME__request[] = "request";
static char robotnik_io_msgs__srv__SetRegisters_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robotnik_io_msgs__srv__SetRegisters_Event__FIELDS[] = {
  {
    {robotnik_io_msgs__srv__SetRegisters_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotnik_io_msgs__srv__SetRegisters_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotnik_io_msgs__srv__SetRegisters_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_io_msgs__srv__SetRegisters_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__msg__Register__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {robotnik_io_msgs__srv__SetRegisters_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_io_msgs__srv__SetRegisters_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_io_msgs__srv__SetRegisters_Event__TYPE_NAME, 39, 39},
      {robotnik_io_msgs__srv__SetRegisters_Event__FIELDS, 3, 3},
    },
    {robotnik_io_msgs__srv__SetRegisters_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_io_msgs__msg__Register__EXPECTED_HASH, robotnik_io_msgs__msg__Register__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = robotnik_io_msgs__msg__Register__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robotnik_io_msgs__srv__SetRegisters_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = robotnik_io_msgs__srv__SetRegisters_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Register[] registers\n"
  "---\n"
  "robotnik_common_msgs/Response response";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_io_msgs__srv__SetRegisters__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_io_msgs__srv__SetRegisters__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 64, 64},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_io_msgs__srv__SetRegisters_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_io_msgs__srv__SetRegisters_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_io_msgs__srv__SetRegisters_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_io_msgs__srv__SetRegisters_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_io_msgs__srv__SetRegisters_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_io_msgs__srv__SetRegisters_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_io_msgs__srv__SetRegisters__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_io_msgs__srv__SetRegisters__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    sources[3] = *robotnik_io_msgs__msg__Register__get_individual_type_description_source(NULL);
    sources[4] = *robotnik_io_msgs__srv__SetRegisters_Event__get_individual_type_description_source(NULL);
    sources[5] = *robotnik_io_msgs__srv__SetRegisters_Request__get_individual_type_description_source(NULL);
    sources[6] = *robotnik_io_msgs__srv__SetRegisters_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_io_msgs__srv__SetRegisters_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_io_msgs__srv__SetRegisters_Request__get_individual_type_description_source(NULL),
    sources[1] = *robotnik_io_msgs__msg__Register__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_io_msgs__srv__SetRegisters_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_io_msgs__srv__SetRegisters_Response__get_individual_type_description_source(NULL),
    sources[1] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_io_msgs__srv__SetRegisters_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_io_msgs__srv__SetRegisters_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    sources[3] = *robotnik_io_msgs__msg__Register__get_individual_type_description_source(NULL);
    sources[4] = *robotnik_io_msgs__srv__SetRegisters_Request__get_individual_type_description_source(NULL);
    sources[5] = *robotnik_io_msgs__srv__SetRegisters_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
