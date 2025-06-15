// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotnik_controllers_msgs:srv/AvailableKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_controllers_msgs/srv/available_kinematics.h"


#ifndef ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__AVAILABLE_KINEMATICS__STRUCT_H_
#define ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__AVAILABLE_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AvailableKinematics in the package robotnik_controllers_msgs.
typedef struct robotnik_controllers_msgs__srv__AvailableKinematics_Request
{
  uint8_t structure_needs_at_least_one_member;
} robotnik_controllers_msgs__srv__AvailableKinematics_Request;

// Struct for a sequence of robotnik_controllers_msgs__srv__AvailableKinematics_Request.
typedef struct robotnik_controllers_msgs__srv__AvailableKinematics_Request__Sequence
{
  robotnik_controllers_msgs__srv__AvailableKinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_controllers_msgs__srv__AvailableKinematics_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "robotnik_common_msgs/msg/detail/response__struct.h"
// Member 'kinematics'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AvailableKinematics in the package robotnik_controllers_msgs.
typedef struct robotnik_controllers_msgs__srv__AvailableKinematics_Response
{
  robotnik_common_msgs__msg__Response response;
  rosidl_runtime_c__String__Sequence kinematics;
} robotnik_controllers_msgs__srv__AvailableKinematics_Response;

// Struct for a sequence of robotnik_controllers_msgs__srv__AvailableKinematics_Response.
typedef struct robotnik_controllers_msgs__srv__AvailableKinematics_Response__Sequence
{
  robotnik_controllers_msgs__srv__AvailableKinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_controllers_msgs__srv__AvailableKinematics_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robotnik_controllers_msgs__srv__AvailableKinematics_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robotnik_controllers_msgs__srv__AvailableKinematics_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AvailableKinematics in the package robotnik_controllers_msgs.
typedef struct robotnik_controllers_msgs__srv__AvailableKinematics_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robotnik_controllers_msgs__srv__AvailableKinematics_Request__Sequence request;
  robotnik_controllers_msgs__srv__AvailableKinematics_Response__Sequence response;
} robotnik_controllers_msgs__srv__AvailableKinematics_Event;

// Struct for a sequence of robotnik_controllers_msgs__srv__AvailableKinematics_Event.
typedef struct robotnik_controllers_msgs__srv__AvailableKinematics_Event__Sequence
{
  robotnik_controllers_msgs__srv__AvailableKinematics_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotnik_controllers_msgs__srv__AvailableKinematics_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__AVAILABLE_KINEMATICS__STRUCT_H_
