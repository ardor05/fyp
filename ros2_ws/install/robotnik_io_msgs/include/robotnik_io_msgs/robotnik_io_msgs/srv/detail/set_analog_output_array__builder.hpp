// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotnik_io_msgs:srv/SetAnalogOutputArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_io_msgs/srv/set_analog_output_array.hpp"


#ifndef ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT_ARRAY__BUILDER_HPP_
#define ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotnik_io_msgs/srv/detail/set_analog_output_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAnalogOutputArray_Request_output
{
public:
  Init_SetAnalogOutputArray_Request_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_io_msgs::srv::SetAnalogOutputArray_Request output(::robotnik_io_msgs::srv::SetAnalogOutputArray_Request::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetAnalogOutputArray_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetAnalogOutputArray_Request>()
{
  return robotnik_io_msgs::srv::builder::Init_SetAnalogOutputArray_Request_output();
}

}  // namespace robotnik_io_msgs


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAnalogOutputArray_Response_response
{
public:
  Init_SetAnalogOutputArray_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_io_msgs::srv::SetAnalogOutputArray_Response response(::robotnik_io_msgs::srv::SetAnalogOutputArray_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetAnalogOutputArray_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetAnalogOutputArray_Response>()
{
  return robotnik_io_msgs::srv::builder::Init_SetAnalogOutputArray_Response_response();
}

}  // namespace robotnik_io_msgs


namespace robotnik_io_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAnalogOutputArray_Event_response
{
public:
  explicit Init_SetAnalogOutputArray_Event_response(::robotnik_io_msgs::srv::SetAnalogOutputArray_Event & msg)
  : msg_(msg)
  {}
  ::robotnik_io_msgs::srv::SetAnalogOutputArray_Event response(::robotnik_io_msgs::srv::SetAnalogOutputArray_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetAnalogOutputArray_Event msg_;
};

class Init_SetAnalogOutputArray_Event_request
{
public:
  explicit Init_SetAnalogOutputArray_Event_request(::robotnik_io_msgs::srv::SetAnalogOutputArray_Event & msg)
  : msg_(msg)
  {}
  Init_SetAnalogOutputArray_Event_response request(::robotnik_io_msgs::srv::SetAnalogOutputArray_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetAnalogOutputArray_Event_response(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetAnalogOutputArray_Event msg_;
};

class Init_SetAnalogOutputArray_Event_info
{
public:
  Init_SetAnalogOutputArray_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAnalogOutputArray_Event_request info(::robotnik_io_msgs::srv::SetAnalogOutputArray_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetAnalogOutputArray_Event_request(msg_);
  }

private:
  ::robotnik_io_msgs::srv::SetAnalogOutputArray_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_io_msgs::srv::SetAnalogOutputArray_Event>()
{
  return robotnik_io_msgs::srv::builder::Init_SetAnalogOutputArray_Event_info();
}

}  // namespace robotnik_io_msgs

#endif  // ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT_ARRAY__BUILDER_HPP_
