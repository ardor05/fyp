// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robotnik_common_msgs:msg/Response.idl
// generated code does not contain a copyright notice
#ifndef ROBOTNIK_COMMON_MSGS__MSG__DETAIL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOTNIK_COMMON_MSGS__MSG__DETAIL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robotnik_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotnik_common_msgs/msg/detail/response__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_common_msgs
bool cdr_serialize_robotnik_common_msgs__msg__Response(
  const robotnik_common_msgs__msg__Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_common_msgs
bool cdr_deserialize_robotnik_common_msgs__msg__Response(
  eprosima::fastcdr::Cdr &,
  robotnik_common_msgs__msg__Response * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_common_msgs
size_t get_serialized_size_robotnik_common_msgs__msg__Response(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_common_msgs
size_t max_serialized_size_robotnik_common_msgs__msg__Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_common_msgs
bool cdr_serialize_key_robotnik_common_msgs__msg__Response(
  const robotnik_common_msgs__msg__Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_common_msgs
size_t get_serialized_size_key_robotnik_common_msgs__msg__Response(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_common_msgs
size_t max_serialized_size_key_robotnik_common_msgs__msg__Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotnik_common_msgs, msg, Response)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOTNIK_COMMON_MSGS__MSG__DETAIL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
