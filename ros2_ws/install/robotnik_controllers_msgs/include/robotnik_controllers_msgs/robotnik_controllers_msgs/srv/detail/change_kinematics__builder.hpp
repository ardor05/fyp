// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotnik_controllers_msgs:srv/ChangeKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_controllers_msgs/srv/change_kinematics.hpp"


#ifndef ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__CHANGE_KINEMATICS__BUILDER_HPP_
#define ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__CHANGE_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotnik_controllers_msgs/srv/detail/change_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotnik_controllers_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeKinematics_Request_name
{
public:
  Init_ChangeKinematics_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_controllers_msgs::srv::ChangeKinematics_Request name(::robotnik_controllers_msgs::srv::ChangeKinematics_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::ChangeKinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_controllers_msgs::srv::ChangeKinematics_Request>()
{
  return robotnik_controllers_msgs::srv::builder::Init_ChangeKinematics_Request_name();
}

}  // namespace robotnik_controllers_msgs


namespace robotnik_controllers_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeKinematics_Response_response
{
public:
  Init_ChangeKinematics_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotnik_controllers_msgs::srv::ChangeKinematics_Response response(::robotnik_controllers_msgs::srv::ChangeKinematics_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::ChangeKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_controllers_msgs::srv::ChangeKinematics_Response>()
{
  return robotnik_controllers_msgs::srv::builder::Init_ChangeKinematics_Response_response();
}

}  // namespace robotnik_controllers_msgs


namespace robotnik_controllers_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeKinematics_Event_response
{
public:
  explicit Init_ChangeKinematics_Event_response(::robotnik_controllers_msgs::srv::ChangeKinematics_Event & msg)
  : msg_(msg)
  {}
  ::robotnik_controllers_msgs::srv::ChangeKinematics_Event response(::robotnik_controllers_msgs::srv::ChangeKinematics_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::ChangeKinematics_Event msg_;
};

class Init_ChangeKinematics_Event_request
{
public:
  explicit Init_ChangeKinematics_Event_request(::robotnik_controllers_msgs::srv::ChangeKinematics_Event & msg)
  : msg_(msg)
  {}
  Init_ChangeKinematics_Event_response request(::robotnik_controllers_msgs::srv::ChangeKinematics_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChangeKinematics_Event_response(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::ChangeKinematics_Event msg_;
};

class Init_ChangeKinematics_Event_info
{
public:
  Init_ChangeKinematics_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeKinematics_Event_request info(::robotnik_controllers_msgs::srv::ChangeKinematics_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChangeKinematics_Event_request(msg_);
  }

private:
  ::robotnik_controllers_msgs::srv::ChangeKinematics_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotnik_controllers_msgs::srv::ChangeKinematics_Event>()
{
  return robotnik_controllers_msgs::srv::builder::Init_ChangeKinematics_Event_info();
}

}  // namespace robotnik_controllers_msgs

#endif  // ROBOTNIK_CONTROLLERS_MSGS__SRV__DETAIL__CHANGE_KINEMATICS__BUILDER_HPP_
