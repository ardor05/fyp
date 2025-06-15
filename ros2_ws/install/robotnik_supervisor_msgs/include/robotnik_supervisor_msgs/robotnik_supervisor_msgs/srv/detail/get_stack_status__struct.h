// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotnik_supervisor_msgs:srv/GetStackStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_supervisor_msgs/srv/get_stack_status.h"


#ifndef ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_STATUS__STRUCT_H_
#define ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetStackStatus in the package robotnik_supervisor_msgs.
typedef struct robotnik_supervisor_msgs__srv__GetStackStatus_Request
{
  rosidl_runtime_c__String name;
} robotnik_supervisor_msgs__srv__GetStackStatus_Request;

// Struct for a sequence of robotnik_supervisor_msgs__srv__GetStackStatus_Request.
typedef struct robotnik_supervisor_msgs__srv__GetStackStatus_Request__Sequence
{
  robotnik_supervisor_msgs__srv__GetStackStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_supervisor_msgs__srv__GetStackStatus_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "robotnik_common_msgs/msg/detail/response__struct.h"
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetStackStatus in the package robotnik_supervisor_msgs.
typedef struct robotnik_supervisor_msgs__srv__GetStackStatus_Response
{
  robotnik_common_msgs__msg__Response response;
  rosidl_runtime_c__String status;
} robotnik_supervisor_msgs__srv__GetStackStatus_Response;

// Struct for a sequence of robotnik_supervisor_msgs__srv__GetStackStatus_Response.
typedef struct robotnik_supervisor_msgs__srv__GetStackStatus_Response__Sequence
{
  robotnik_supervisor_msgs__srv__GetStackStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_supervisor_msgs__srv__GetStackStatus_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robotnik_supervisor_msgs__srv__GetStackStatus_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robotnik_supervisor_msgs__srv__GetStackStatus_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetStackStatus in the package robotnik_supervisor_msgs.
typedef struct robotnik_supervisor_msgs__srv__GetStackStatus_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robotnik_supervisor_msgs__srv__GetStackStatus_Request__Sequence request;
  robotnik_supervisor_msgs__srv__GetStackStatus_Response__Sequence response;
} robotnik_supervisor_msgs__srv__GetStackStatus_Event;

// Struct for a sequence of robotnik_supervisor_msgs__srv__GetStackStatus_Event.
typedef struct robotnik_supervisor_msgs__srv__GetStackStatus_Event__Sequence
{
  robotnik_supervisor_msgs__srv__GetStackStatus_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_supervisor_msgs__srv__GetStackStatus_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_STATUS__STRUCT_H_
