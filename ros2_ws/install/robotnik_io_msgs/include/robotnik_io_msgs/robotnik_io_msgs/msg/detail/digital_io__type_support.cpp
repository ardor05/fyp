// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotnik_io_msgs:msg/DigitalIO.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotnik_io_msgs/msg/detail/digital_io__functions.h"
#include "robotnik_io_msgs/msg/detail/digital_io__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotnik_io_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DigitalIO_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotnik_io_msgs::msg::DigitalIO(_init);
}

void DigitalIO_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotnik_io_msgs::msg::DigitalIO *>(message_memory);
  typed_message->~DigitalIO();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DigitalIO_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_io_msgs::msg::DigitalIO, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_io_msgs::msg::DigitalIO, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_io_msgs::msg::DigitalIO, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DigitalIO_message_members = {
  "robotnik_io_msgs::msg",  // message namespace
  "DigitalIO",  // message name
  3,  // number of fields
  sizeof(robotnik_io_msgs::msg::DigitalIO),
  false,  // has_any_key_member_
  DigitalIO_message_member_array,  // message members
  DigitalIO_init_function,  // function to initialize message memory (memory has to be allocated)
  DigitalIO_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DigitalIO_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DigitalIO_message_members,
  get_message_typesupport_handle_function,
  &robotnik_io_msgs__msg__DigitalIO__get_type_hash,
  &robotnik_io_msgs__msg__DigitalIO__get_type_description,
  &robotnik_io_msgs__msg__DigitalIO__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robotnik_io_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotnik_io_msgs::msg::DigitalIO>()
{
  return &::robotnik_io_msgs::msg::rosidl_typesupport_introspection_cpp::DigitalIO_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotnik_io_msgs, msg, DigitalIO)() {
  return &::robotnik_io_msgs::msg::rosidl_typesupport_introspection_cpp::DigitalIO_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
