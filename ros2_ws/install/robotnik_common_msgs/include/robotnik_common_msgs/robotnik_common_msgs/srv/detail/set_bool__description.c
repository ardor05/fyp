// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_common_msgs:srv/SetBool.idl
// generated code does not contain a copyright notice

#include "robotnik_common_msgs/srv/detail/set_bool__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
const rosidl_type_hash_t *
robotnik_common_msgs__srv__SetBool__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0xef, 0xfc, 0x0a, 0x78, 0x93, 0x9a, 0x63,
      0x48, 0x07, 0x81, 0x88, 0x72, 0xb2, 0xff, 0x60,
      0x9a, 0xf3, 0x5f, 0x20, 0xa5, 0x56, 0xa4, 0xde,
      0x52, 0xca, 0x2a, 0xe4, 0x65, 0xdd, 0xcd, 0xda,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
const rosidl_type_hash_t *
robotnik_common_msgs__srv__SetBool_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x25, 0xd1, 0x0a, 0xe1, 0xda, 0x86, 0xdd,
      0xda, 0x92, 0xdd, 0x62, 0x03, 0x3f, 0xf5, 0x99,
      0x67, 0xcc, 0xb4, 0x1a, 0x1f, 0xef, 0x6e, 0x0e,
      0x6a, 0x75, 0x05, 0xf1, 0xfd, 0x86, 0xc1, 0x1b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
const rosidl_type_hash_t *
robotnik_common_msgs__srv__SetBool_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0x28, 0x1e, 0xa5, 0xdd, 0x7c, 0xb1, 0xad,
      0xc5, 0xaf, 0x12, 0x42, 0x1a, 0xa2, 0xf3, 0x96,
      0x31, 0x14, 0x01, 0xf5, 0xeb, 0xf9, 0x50, 0x85,
      0x0c, 0x77, 0x6d, 0xc7, 0x2b, 0x46, 0xd2, 0xea,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
const rosidl_type_hash_t *
robotnik_common_msgs__srv__SetBool_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x67, 0xae, 0x47, 0x5f, 0x85, 0x98, 0xbd,
      0x94, 0xa3, 0xe6, 0x56, 0xb2, 0xed, 0xda, 0xa8,
      0x4e, 0x89, 0x4d, 0x2f, 0xeb, 0x3a, 0x11, 0x06,
      0x46, 0xc3, 0xdc, 0x23, 0x92, 0xec, 0xf3, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "robotnik_common_msgs/msg/detail/response__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char robotnik_common_msgs__srv__SetBool__TYPE_NAME[] = "robotnik_common_msgs/srv/SetBool";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robotnik_common_msgs__msg__Response__TYPE_NAME[] = "robotnik_common_msgs/msg/Response";
static char robotnik_common_msgs__srv__SetBool_Event__TYPE_NAME[] = "robotnik_common_msgs/srv/SetBool_Event";
static char robotnik_common_msgs__srv__SetBool_Request__TYPE_NAME[] = "robotnik_common_msgs/srv/SetBool_Request";
static char robotnik_common_msgs__srv__SetBool_Response__TYPE_NAME[] = "robotnik_common_msgs/srv/SetBool_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char robotnik_common_msgs__srv__SetBool__FIELD_NAME__request_message[] = "request_message";
static char robotnik_common_msgs__srv__SetBool__FIELD_NAME__response_message[] = "response_message";
static char robotnik_common_msgs__srv__SetBool__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field robotnik_common_msgs__srv__SetBool__FIELDS[] = {
  {
    {robotnik_common_msgs__srv__SetBool__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_common_msgs__srv__SetBool_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_common_msgs__srv__SetBool_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_common_msgs__srv__SetBool_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_common_msgs__srv__SetBool__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_common_msgs__srv__SetBool__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_common_msgs__srv__SetBool__TYPE_NAME, 32, 32},
      {robotnik_common_msgs__srv__SetBool__FIELDS, 3, 3},
    },
    {robotnik_common_msgs__srv__SetBool__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robotnik_common_msgs__srv__SetBool_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robotnik_common_msgs__srv__SetBool_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = robotnik_common_msgs__srv__SetBool_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_common_msgs__srv__SetBool_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field robotnik_common_msgs__srv__SetBool_Request__FIELDS[] = {
  {
    {robotnik_common_msgs__srv__SetBool_Request__FIELD_NAME__data, 4, 4},
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
robotnik_common_msgs__srv__SetBool_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_common_msgs__srv__SetBool_Request__TYPE_NAME, 40, 40},
      {robotnik_common_msgs__srv__SetBool_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_common_msgs__srv__SetBool_Response__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robotnik_common_msgs__srv__SetBool_Response__FIELDS[] = {
  {
    {robotnik_common_msgs__srv__SetBool_Response__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_common_msgs__srv__SetBool_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_common_msgs__srv__SetBool_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_common_msgs__srv__SetBool_Response__TYPE_NAME, 41, 41},
      {robotnik_common_msgs__srv__SetBool_Response__FIELDS, 1, 1},
    },
    {robotnik_common_msgs__srv__SetBool_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_common_msgs__srv__SetBool_Event__FIELD_NAME__info[] = "info";
static char robotnik_common_msgs__srv__SetBool_Event__FIELD_NAME__request[] = "request";
static char robotnik_common_msgs__srv__SetBool_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robotnik_common_msgs__srv__SetBool_Event__FIELDS[] = {
  {
    {robotnik_common_msgs__srv__SetBool_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotnik_common_msgs__srv__SetBool_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotnik_common_msgs__srv__SetBool_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_common_msgs__srv__SetBool_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__srv__SetBool_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_common_msgs__srv__SetBool_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_common_msgs__srv__SetBool_Event__TYPE_NAME, 38, 38},
      {robotnik_common_msgs__srv__SetBool_Event__FIELDS, 3, 3},
    },
    {robotnik_common_msgs__srv__SetBool_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robotnik_common_msgs__srv__SetBool_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robotnik_common_msgs__srv__SetBool_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool data\n"
  "---\n"
  "Response response";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_common_msgs__srv__SetBool__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_common_msgs__srv__SetBool__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_common_msgs__srv__SetBool_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_common_msgs__srv__SetBool_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_common_msgs__srv__SetBool_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_common_msgs__srv__SetBool_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_common_msgs__srv__SetBool_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_common_msgs__srv__SetBool_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_common_msgs__srv__SetBool__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_common_msgs__srv__SetBool__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    sources[3] = *robotnik_common_msgs__srv__SetBool_Event__get_individual_type_description_source(NULL);
    sources[4] = *robotnik_common_msgs__srv__SetBool_Request__get_individual_type_description_source(NULL);
    sources[5] = *robotnik_common_msgs__srv__SetBool_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_common_msgs__srv__SetBool_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_common_msgs__srv__SetBool_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_common_msgs__srv__SetBool_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_common_msgs__srv__SetBool_Response__get_individual_type_description_source(NULL),
    sources[1] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_common_msgs__srv__SetBool_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_common_msgs__srv__SetBool_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    sources[3] = *robotnik_common_msgs__srv__SetBool_Request__get_individual_type_description_source(NULL);
    sources[4] = *robotnik_common_msgs__srv__SetBool_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
