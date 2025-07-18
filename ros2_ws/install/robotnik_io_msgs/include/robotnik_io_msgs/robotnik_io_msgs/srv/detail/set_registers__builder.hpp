// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotnik_io_msgs:srv/SetRegisters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_io_msgs/srv/set_registers.hpp"


#ifndef ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_REGISTERS__BUILDER_HPP_
#define ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_REGISTERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotnik_io_msgs/srv/detail/set_registers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRegisters_Request_registers
{
public:
  Init_SetRegisters_Request_registers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_io_msgs::srv::SetRegisters_Request registers(::robotnik_io_msgs::srv::SetRegisters_Request::_registers_type arg)
  {
    msg_.registers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetRegisters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetRegisters_Request>()
{
  return robotnik_io_msgs::srv::builder::Init_SetRegisters_Request_registers();
}

}  // namespace robotnik_io_msgs


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRegisters_Response_response
{
public:
  Init_SetRegisters_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_io_msgs::srv::SetRegisters_Response response(::robotnik_io_msgs::srv::SetRegisters_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetRegisters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetRegisters_Response>()
{
  return robotnik_io_msgs::srv::builder::Init_SetRegisters_Response_response();
}

}  // namespace robotnik_io_msgs


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRegisters_Event_response
{
public:
  explicit Init_SetRegisters_Event_response(::robotnik_io_msgs::srv::SetRegisters_Event & msg)
  : msg_(msg)
  {}
  ::robotnik_io_msgs::srv::SetRegisters_Event response(::robotnik_io_msgs::srv::SetRegisters_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetRegisters_Event msg_;
};

class Init_SetRegisters_Event_request
{
public:
  explicit Init_SetRegisters_Event_request(::robotnik_io_msgs::srv::SetRegisters_Event & msg)
  : msg_(msg)
  {}
  Init_SetRegisters_Event_response request(::robotnik_io_msgs::srv::SetRegisters_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetRegisters_Event_response(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetRegisters_Event msg_;
};

class Init_SetRegisters_Event_info
{
public:
  Init_SetRegisters_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRegisters_Event_request info(::robotnik_io_msgs::srv::SetRegisters_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetRegisters_Event_request(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetRegisters_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetRegisters_Event>()
{
  return robotnik_io_msgs::srv::builder::Init_SetRegisters_Event_info();
}

}  // namespace robotnik_io_msgs

#endif  // ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_REGISTERS__BUILDER_HPP_
