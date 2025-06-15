// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotnik_common_msgs:srv/SetFloat32.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_common_msgs/srv/set_float32.h"


#ifndef ROBOTNIK_COMMON_MSGS__SRV__DETAIL__SET_FLOAT32__STRUCT_H_
#define ROBOTNIK_COMMON_MSGS__SRV__DETAIL__SET_FLOAT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetFloat32 in the package robotnik_common_msgs.
typedef struct robotnik_common_msgs__srv__SetFloat32_Request
{
  float data;
} robotnik_common_msgs__srv__SetFloat32_Request;

// Struct for a sequence of robotnik_common_msgs__srv__SetFloat32_Request.
typedef struct robotnik_common_msgs__srv__SetFloat32_Request__Sequence
{
  robotnik_common_msgs__srv__SetFloat32_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_common_msgs__srv__SetFloat32_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "robotnik_common_msgs/msg/detail/response__struct.h"

/// Struct defined in srv/SetFloat32 in the package robotnik_common_msgs.
typedef struct robotnik_common_msgs__srv__SetFloat32_Response
{
  robotnik_common_msgs__msg__Response response;
} robotnik_common_msgs__srv__SetFloat32_Response;

// Struct for a sequence of robotnik_common_msgs__srv__SetFloat32_Response.
typedef struct robotnik_common_msgs__srv__SetFloat32_Response__Sequence
{
  robotnik_common_msgs__srv__SetFloat32_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_common_msgs__srv__SetFloat32_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robotnik_common_msgs__srv__SetFloat32_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robotnik_common_msgs__srv__SetFloat32_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetFloat32 in the package robotnik_common_msgs.
typedef struct robotnik_common_msgs__srv__SetFloat32_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robotnik_common_msgs__srv__SetFloat32_Request__Sequence request;
  robotnik_common_msgs__srv__SetFloat32_Response__Sequence response;
} robotnik_common_msgs__srv__SetFloat32_Event;

// Struct for a sequence of robotnik_common_msgs__srv__SetFloat32_Event.
typedef struct robotnik_common_msgs__srv__SetFloat32_Event__Sequence
{
  robotnik_common_msgs__srv__SetFloat32_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_common_msgs__srv__SetFloat32_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTNIK_COMMON_MSGS__SRV__DETAIL__SET_FLOAT32__STRUCT_H_
