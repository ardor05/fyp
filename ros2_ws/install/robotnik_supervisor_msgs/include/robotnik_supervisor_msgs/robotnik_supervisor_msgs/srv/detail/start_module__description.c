// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotnik_supervisor_msgs:srv/StartModule.idl
// generated code does not contain a copyright notice

#include "robotnik_supervisor_msgs/srv/detail/start_module__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotnik_supervisor_msgs
const rosidl_type_hash_t *
robotnik_supervisor_msgs__srv__StartModule__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xdb, 0x4a, 0x56, 0x55, 0xac, 0x09, 0x75,
      0x6a, 0x00, 0x72, 0x99, 0x86, 0xfc, 0xd0, 0xad,
      0xe6, 0x73, 0x69, 0x48, 0x87, 0xba, 0x77, 0xab,
      0xf8, 0x54, 0xa2, 0x0e, 0x1c, 0xe8, 0xc7, 0x92,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_supervisor_msgs
const rosidl_type_hash_t *
robotnik_supervisor_msgs__srv__StartModule_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0xe8, 0xb6, 0xf5, 0x0f, 0xdd, 0x36, 0xdc,
      0x0a, 0x83, 0x96, 0x5e, 0x3c, 0x5a, 0xc7, 0x1d,
      0x19, 0x35, 0x84, 0x3f, 0x82, 0x2d, 0xc7, 0x9a,
      0x2d, 0xcf, 0x5b, 0xcf, 0xf7, 0x64, 0x1f, 0x07,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_supervisor_msgs
const rosidl_type_hash_t *
robotnik_supervisor_msgs__srv__StartModule_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd8, 0x2d, 0xb4, 0xfc, 0x83, 0x18, 0xdf, 0x32,
      0x6e, 0x91, 0xa8, 0x98, 0x67, 0xd9, 0x33, 0x83,
      0xf1, 0x27, 0x55, 0x28, 0x31, 0x01, 0xf8, 0x91,
      0xe0, 0xa4, 0xac, 0xaf, 0xfe, 0xbe, 0xd2, 0xe0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotnik_supervisor_msgs
const rosidl_type_hash_t *
robotnik_supervisor_msgs__srv__StartModule_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xd9, 0x65, 0x68, 0x62, 0x69, 0xba, 0xf2,
      0xa6, 0x27, 0x3f, 0x98, 0xab, 0x64, 0xb3, 0x50,
      0xd1, 0xc7, 0xa0, 0xd8, 0xa7, 0xc3, 0xa7, 0xec,
      0xc7, 0x16, 0xee, 0x79, 0x6c, 0xa3, 0xc3, 0x6a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "robotnik_common_msgs/msg/detail/response__functions.h"

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

static char robotnik_supervisor_msgs__srv__StartModule__TYPE_NAME[] = "robotnik_supervisor_msgs/srv/StartModule";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robotnik_common_msgs__msg__Response__TYPE_NAME[] = "robotnik_common_msgs/msg/Response";
static char robotnik_supervisor_msgs__srv__StartModule_Event__TYPE_NAME[] = "robotnik_supervisor_msgs/srv/StartModule_Event";
static char robotnik_supervisor_msgs__srv__StartModule_Request__TYPE_NAME[] = "robotnik_supervisor_msgs/srv/StartModule_Request";
static char robotnik_supervisor_msgs__srv__StartModule_Response__TYPE_NAME[] = "robotnik_supervisor_msgs/srv/StartModule_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char robotnik_supervisor_msgs__srv__StartModule__FIELD_NAME__request_message[] = "request_message";
static char robotnik_supervisor_msgs__srv__StartModule__FIELD_NAME__response_message[] = "response_message";
static char robotnik_supervisor_msgs__srv__StartModule__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field robotnik_supervisor_msgs__srv__StartModule__FIELDS[] = {
  {
    {robotnik_supervisor_msgs__srv__StartModule__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_supervisor_msgs__srv__StartModule_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_supervisor_msgs__srv__StartModule_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_supervisor_msgs__srv__StartModule_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_supervisor_msgs__srv__StartModule__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_supervisor_msgs__srv__StartModule__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_supervisor_msgs__srv__StartModule__TYPE_NAME, 40, 40},
      {robotnik_supervisor_msgs__srv__StartModule__FIELDS, 3, 3},
    },
    {robotnik_supervisor_msgs__srv__StartModule__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robotnik_supervisor_msgs__srv__StartModule_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robotnik_supervisor_msgs__srv__StartModule_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = robotnik_supervisor_msgs__srv__StartModule_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_supervisor_msgs__srv__StartModule_Request__FIELD_NAME__stack[] = "stack";
static char robotnik_supervisor_msgs__srv__StartModule_Request__FIELD_NAME__module[] = "module";

static rosidl_runtime_c__type_description__Field robotnik_supervisor_msgs__srv__StartModule_Request__FIELDS[] = {
  {
    {robotnik_supervisor_msgs__srv__StartModule_Request__FIELD_NAME__stack, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule_Request__FIELD_NAME__module, 6, 6},
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
robotnik_supervisor_msgs__srv__StartModule_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_supervisor_msgs__srv__StartModule_Request__TYPE_NAME, 48, 48},
      {robotnik_supervisor_msgs__srv__StartModule_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_supervisor_msgs__srv__StartModule_Response__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robotnik_supervisor_msgs__srv__StartModule_Response__FIELDS[] = {
  {
    {robotnik_supervisor_msgs__srv__StartModule_Response__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_supervisor_msgs__srv__StartModule_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_supervisor_msgs__srv__StartModule_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_supervisor_msgs__srv__StartModule_Response__TYPE_NAME, 49, 49},
      {robotnik_supervisor_msgs__srv__StartModule_Response__FIELDS, 1, 1},
    },
    {robotnik_supervisor_msgs__srv__StartModule_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotnik_supervisor_msgs__srv__StartModule_Event__FIELD_NAME__info[] = "info";
static char robotnik_supervisor_msgs__srv__StartModule_Event__FIELD_NAME__request[] = "request";
static char robotnik_supervisor_msgs__srv__StartModule_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robotnik_supervisor_msgs__srv__StartModule_Event__FIELDS[] = {
  {
    {robotnik_supervisor_msgs__srv__StartModule_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotnik_supervisor_msgs__srv__StartModule_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotnik_supervisor_msgs__srv__StartModule_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotnik_supervisor_msgs__srv__StartModule_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotnik_common_msgs__msg__Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {robotnik_supervisor_msgs__srv__StartModule_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotnik_supervisor_msgs__srv__StartModule_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotnik_supervisor_msgs__srv__StartModule_Event__TYPE_NAME, 46, 46},
      {robotnik_supervisor_msgs__srv__StartModule_Event__FIELDS, 3, 3},
    },
    {robotnik_supervisor_msgs__srv__StartModule_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotnik_common_msgs__msg__Response__EXPECTED_HASH, robotnik_common_msgs__msg__Response__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotnik_common_msgs__msg__Response__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robotnik_supervisor_msgs__srv__StartModule_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robotnik_supervisor_msgs__srv__StartModule_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string stack\n"
  "string module\n"
  "---\n"
  "robotnik_common_msgs/Response response";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotnik_supervisor_msgs__srv__StartModule__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_supervisor_msgs__srv__StartModule__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_supervisor_msgs__srv__StartModule_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_supervisor_msgs__srv__StartModule_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_supervisor_msgs__srv__StartModule_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_supervisor_msgs__srv__StartModule_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotnik_supervisor_msgs__srv__StartModule_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotnik_supervisor_msgs__srv__StartModule_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_supervisor_msgs__srv__StartModule__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_supervisor_msgs__srv__StartModule__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    sources[3] = *robotnik_supervisor_msgs__srv__StartModule_Event__get_individual_type_description_source(NULL);
    sources[4] = *robotnik_supervisor_msgs__srv__StartModule_Request__get_individual_type_description_source(NULL);
    sources[5] = *robotnik_supervisor_msgs__srv__StartModule_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_supervisor_msgs__srv__StartModule_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_supervisor_msgs__srv__StartModule_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_supervisor_msgs__srv__StartModule_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_supervisor_msgs__srv__StartModule_Response__get_individual_type_description_source(NULL),
    sources[1] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotnik_supervisor_msgs__srv__StartModule_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotnik_supervisor_msgs__srv__StartModule_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotnik_common_msgs__msg__Response__get_individual_type_description_source(NULL);
    sources[3] = *robotnik_supervisor_msgs__srv__StartModule_Request__get_individual_type_description_source(NULL);
    sources[4] = *robotnik_supervisor_msgs__srv__StartModule_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
