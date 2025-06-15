// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotnik_supervisor_msgs:srv/StartStack.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_supervisor_msgs/srv/start_stack.hpp"


#ifndef ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__START_STACK__BUILDER_HPP_
#define ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__START_STACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotnik_supervisor_msgs/srv/detail/start_stack__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotnik_supervisor_msgs
{

namespace srv
{

namespace builder
{

class Init_StartStack_Request_name
{
public:
  Init_StartStack_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_supervisor_msgs::srv::StartStack_Request name(::robotnik_supervisor_msgs::srv::StartStack_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::StartStack_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_supervisor_msgs::srv::StartStack_Request>()
{
  return robotnik_supervisor_msgs::srv::builder::Init_StartStack_Request_name();
}

}  // namespace robotnik_supervisor_msgs


namespace robotnik_supervisor_msgs
{

namespace srv
{

namespace builder
{

class Init_StartStack_Response_response
{
public:
  Init_StartStack_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_supervisor_msgs::srv::StartStack_Response response(::robotnik_supervisor_msgs::srv::StartStack_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::StartStack_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_supervisor_msgs::srv::StartStack_Response>()
{
  return robotnik_supervisor_msgs::srv::builder::Init_StartStack_Response_response();
}

}  // namespace robotnik_supervisor_msgs


namespace robotnik_supervisor_msgs
{

namespace srv
{

namespace builder
{

class Init_StartStack_Event_response
{
public:
  explicit Init_StartStack_Event_response(::robotnik_supervisor_msgs::srv::StartStack_Event & msg)
  : msg_(msg)
  {}
  ::robotnik_supervisor_msgs::srv::StartStack_Event response(::robotnik_supervisor_msgs::srv::StartStack_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::StartStack_Event msg_;
};

class Init_StartStack_Event_request
{
public:
  explicit Init_StartStack_Event_request(::robotnik_supervisor_msgs::srv::StartStack_Event & msg)
  : msg_(msg)
  {}
  Init_StartStack_Event_response request(::robotnik_supervisor_msgs::srv::StartStack_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StartStack_Event_response(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::StartStack_Event msg_;
};

class Init_StartStack_Event_info
{
public:
  Init_StartStack_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartStack_Event_request info(::robotnik_supervisor_msgs::srv::StartStack_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StartStack_Event_request(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::StartStack_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_supervisor_msgs::srv::StartStack_Event>()
{
  return robotnik_supervisor_msgs::srv::builder::Init_StartStack_Event_info();
}

}  // namespace robotnik_supervisor_msgs

#endif  // ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__START_STACK__BUILDER_HPP_
