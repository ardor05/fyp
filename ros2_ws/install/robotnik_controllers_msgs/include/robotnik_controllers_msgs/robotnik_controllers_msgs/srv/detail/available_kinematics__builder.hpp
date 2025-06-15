// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotnik_controllers_msgs:srv/AvailableKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_controllers_msgs/srv/available_kinematics.hpp"


#ifndef ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__AVAILABLE_KINEMATICS__BUILDER_HPP_
#define ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__AVAILABLE_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotnik_controllers_msgs/srv/detail/available_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotnik_controllers_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_controllers_msgs::srv::AvailableKinematics_Request>()
{
  return ::robotnik_controllers_msgs::srv::AvailableKinematics_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robotnik_controllers_msgs


namespace robotnik_controllers_msgs
{

namespace srv
{

namespace builder
{

class Init_AvailableKinematics_Response_kinematics
{
public:
  explicit Init_AvailableKinematics_Response_kinematics(::robotnik_controllers_msgs::srv::AvailableKinematics_Response & msg)
  : msg_(msg)
  {}
  ::robotnik_controllers_msgs::srv::AvailableKinematics_Response kinematics(::robotnik_controllers_msgs::srv::AvailableKinematics_Response::_kinematics_type arg)
  {
    msg_.kinematics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::AvailableKinematics_Response msg_;
};

class Init_AvailableKinematics_Response_response
{
public:
  Init_AvailableKinematics_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvailableKinematics_Response_kinematics response(::robotnik_controllers_msgs::srv::AvailableKinematics_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_AvailableKinematics_Response_kinematics(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::AvailableKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_controllers_msgs::srv::AvailableKinematics_Response>()
{
  return robotnik_controllers_msgs::srv::builder::Init_AvailableKinematics_Response_response();
}

}  // namespace robotnik_controllers_msgs


namespace robotnik_controllers_msgs
{

namespace srv
{

namespace builder
{

class Init_AvailableKinematics_Event_response
{
public:
  explicit Init_AvailableKinematics_Event_response(::robotnik_controllers_msgs::srv::AvailableKinematics_Event & msg)
  : msg_(msg)
  {}
  ::robotnik_controllers_msgs::srv::AvailableKinematics_Event response(::robotnik_controllers_msgs::srv::AvailableKinematics_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::AvailableKinematics_Event msg_;
};

class Init_AvailableKinematics_Event_request
{
public:
  explicit Init_AvailableKinematics_Event_request(::robotnik_controllers_msgs::srv::AvailableKinematics_Event & msg)
  : msg_(msg)
  {}
  Init_AvailableKinematics_Event_response request(::robotnik_controllers_msgs::srv::AvailableKinematics_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AvailableKinematics_Event_response(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::AvailableKinematics_Event msg_;
};

class Init_AvailableKinematics_Event_info
{
public:
  Init_AvailableKinematics_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvailableKinematics_Event_request info(::robotnik_controllers_msgs::srv::AvailableKinematics_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AvailableKinematics_Event_request(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::AvailableKinematics_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_controllers_msgs::srv::AvailableKinematics_Event>()
{
  return robotnik_controllers_msgs::srv::builder::Init_AvailableKinematics_Event_info();
}

}  // namespace robotnik_controllers_msgs

#endif  // ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__AVAILABLE_KINEMATICS__BUILDER_HPP_
