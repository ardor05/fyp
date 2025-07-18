// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotnik_supervisor_msgs:srv/GetStackList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_supervisor_msgs/srv/get_stack_list.hpp"


#ifndef ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_LIST__BUILDER_HPP_
#define ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotnik_supervisor_msgs/srv/detail/get_stack_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotnik_supervisor_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_supervisor_msgs::srv::GetStackList_Request>()
{
  return ::robotnik_supervisor_msgs::srv::GetStackList_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robotnik_supervisor_msgs


namespace robotnik_supervisor_msgs
{

namespace srv
{

namespace builder
{

class Init_GetStackList_Response_stacks
{
public:
  explicit Init_GetStackList_Response_stacks(::robotnik_supervisor_msgs::srv::GetStackList_Response & msg)
  : msg_(msg)
  {}
  ::robotnik_supervisor_msgs::srv::GetStackList_Response stacks(::robotnik_supervisor_msgs::srv::GetStackList_Response::_stacks_type arg)
  {
    msg_.stacks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::GetStackList_Response msg_;
};

class Init_GetStackList_Response_response
{
public:
  Init_GetStackList_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStackList_Response_stacks response(::robotnik_supervisor_msgs::srv::GetStackList_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetStackList_Response_stacks(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::GetStackList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_supervisor_msgs::srv::GetStackList_Response>()
{
  return robotnik_supervisor_msgs::srv::builder::Init_GetStackList_Response_response();
}

}  // namespace robotnik_supervisor_msgs


namespace robotnik_supervisor_msgs
{

namespace srv
{

namespace builder
{

class Init_GetStackList_Event_response
{
public:
  explicit Init_GetStackList_Event_response(::robotnik_supervisor_msgs::srv::GetStackList_Event & msg)
  : msg_(msg)
  {}
  ::robotnik_supervisor_msgs::srv::GetStackList_Event response(::robotnik_supervisor_msgs::srv::GetStackList_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::GetStackList_Event msg_;
};

class Init_GetStackList_Event_request
{
public:
  explicit Init_GetStackList_Event_request(::robotnik_supervisor_msgs::srv::GetStackList_Event & msg)
  : msg_(msg)
  {}
  Init_GetStackList_Event_response request(::robotnik_supervisor_msgs::srv::GetStackList_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetStackList_Event_response(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::GetStackList_Event msg_;
};

class Init_GetStackList_Event_info
{
public:
  Init_GetStackList_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStackList_Event_request info(::robotnik_supervisor_msgs::srv::GetStackList_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetStackList_Event_request(msg_);
  }

private:
  ::robotnik_supervisor_msgs::srv::GetStackList_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_supervisor_msgs::srv::GetStackList_Event>()
{
  return robotnik_supervisor_msgs::srv::builder::Init_GetStackList_Event_info();
}

}  // namespace robotnik_supervisor_msgs

#endif  // ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_LIST__BUILDER_HPP_
