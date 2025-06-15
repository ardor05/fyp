// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotnik_io_msgs:srv/SetDigitalOutput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_io_msgs/srv/set_digital_output.hpp"


#ifndef ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__BUILDER_HPP_
#define ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotnik_io_msgs/srv/detail/set_digital_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDigitalOutput_Request_output
{
public:
  Init_SetDigitalOutput_Request_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_io_msgs::srv::SetDigitalOutput_Request output(::robotnik_io_msgs::srv::SetDigitalOutput_Request::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetDigitalOutput_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetDigitalOutput_Request>()
{
  return robotnik_io_msgs::srv::builder::Init_SetDigitalOutput_Request_output();
}

}  // namespace robotnik_io_msgs


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDigitalOutput_Response_response
{
public:
  Init_SetDigitalOutput_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_io_msgs::srv::SetDigitalOutput_Response response(::robotnik_io_msgs::srv::SetDigitalOutput_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetDigitalOutput_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetDigitalOutput_Response>()
{
  return robotnik_io_msgs::srv::builder::Init_SetDigitalOutput_Response_response();
}

}  // namespace robotnik_io_msgs


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDigitalOutput_Event_response
{
public:
  explicit Init_SetDigitalOutput_Event_response(::robotnik_io_msgs::srv::SetDigitalOutput_Event & msg)
  : msg_(msg)
  {}
  ::robotnik_io_msgs::srv::SetDigitalOutput_Event response(::robotnik_io_msgs::srv::SetDigitalOutput_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetDigitalOutput_Event msg_;
};

class Init_SetDigitalOutput_Event_request
{
public:
  explicit Init_SetDigitalOutput_Event_request(::robotnik_io_msgs::srv::SetDigitalOutput_Event & msg)
  : msg_(msg)
  {}
  Init_SetDigitalOutput_Event_response request(::robotnik_io_msgs::srv::SetDigitalOutput_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetDigitalOutput_Event_response(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetDigitalOutput_Event msg_;
};

class Init_SetDigitalOutput_Event_info
{
public:
  Init_SetDigitalOutput_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDigitalOutput_Event_request info(::robotnik_io_msgs::srv::SetDigitalOutput_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetDigitalOutput_Event_request(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetDigitalOutput_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetDigitalOutput_Event>()
{
  return robotnik_io_msgs::srv::builder::Init_SetDigitalOutput_Event_info();
}

}  // namespace robotnik_io_msgs

#endif  // ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__BUILDER_HPP_
