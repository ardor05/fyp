// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from robotnik_io_msgs:srv/SetAnalogOutput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_io_msgs/srv/set_analog_output.h"


#ifndef ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT__TYPE_SUPPORT_H_
#define ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "robotnik_io_msgs/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  robotnik_io_msgs,
  srv,
  SetAnalogOutput_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  robotnik_io_msgs,
  srv,
  SetAnalogOutput_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  robotnik_io_msgs,
  srv,
  SetAnalogOutput_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  robotnik_io_msgs,
  srv,
  SetAnalogOutput
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  robotnik_io_msgs,
  srv,
  SetAnalogOutput
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  robotnik_io_msgs,
  srv,
  SetAnalogOutput
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT__TYPE_SUPPORT_H_
