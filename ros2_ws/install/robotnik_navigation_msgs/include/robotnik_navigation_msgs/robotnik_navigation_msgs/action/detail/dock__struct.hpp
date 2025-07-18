// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotnik_navigation_msgs:action/Dock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_navigation_msgs/action/dock.hpp"


#ifndef ROBOTNIK_NAVIGATION_MSGS__ACTION__DETAIL__DOCK__STRUCT_HPP_
#define ROBOTNIK_NAVIGATION_MSGS__ACTION__DETAIL__DOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dock_offset'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"
// Member 'maximum_velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_Goal __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_Goal __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_Goal_
{
  using Type = Dock_Goal_<ContainerAllocator>;

  explicit Dock_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dock_offset(_init),
    maximum_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_frame = "";
      this->robot_dock_frame = "";
    }
  }

  explicit Dock_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dock_frame(_alloc),
    robot_dock_frame(_alloc),
    dock_offset(_alloc, _init),
    maximum_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_frame = "";
      this->robot_dock_frame = "";
    }
  }

  // field types and members
  using _dock_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dock_frame_type dock_frame;
  using _robot_dock_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_dock_frame_type robot_dock_frame;
  using _dock_offset_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _dock_offset_type dock_offset;
  using _maximum_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _maximum_velocity_type maximum_velocity;

  // setters for named parameter idiom
  Type & set__dock_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dock_frame = _arg;
    return *this;
  }
  Type & set__robot_dock_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_dock_frame = _arg;
    return *this;
  }
  Type & set__dock_offset(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->dock_offset = _arg;
    return *this;
  }
  Type & set__maximum_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->maximum_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_Goal
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_Goal
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_Goal_ & other) const
  {
    if (this->dock_frame != other.dock_frame) {
      return false;
    }
    if (this->robot_dock_frame != other.robot_dock_frame) {
      return false;
    }
    if (this->dock_offset != other.dock_offset) {
      return false;
    }
    if (this->maximum_velocity != other.maximum_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_Goal_

// alias to use template instance with default allocator
using Dock_Goal =
  robotnik_navigation_msgs::action::Dock_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'response'
#include "robotnik_common_msgs/msg/detail/response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_Result __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_Result __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_Result_
{
  using Type = Dock_Result_<ContainerAllocator>;

  explicit Dock_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit Dock_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    robotnik_common_msgs::msg::Response_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const robotnik_common_msgs::msg::Response_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_Result
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_Result
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_Result_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_Result_

// alias to use template instance with default allocator
using Dock_Result =
  robotnik_navigation_msgs::action::Dock_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'remaining'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__struct.hpp"
// Member 'current_velocity'
// already included above
// #include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_Feedback __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_Feedback_
{
  using Type = Dock_Feedback_<ContainerAllocator>;

  explicit Dock_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remaining(_init),
    current_velocity(_init)
  {
    (void)_init;
  }

  explicit Dock_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remaining(_alloc, _init),
    current_velocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _remaining_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _remaining_type remaining;
  using _current_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _current_velocity_type current_velocity;

  // setters for named parameter idiom
  Type & set__remaining(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->remaining = _arg;
    return *this;
  }
  Type & set__current_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->current_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_Feedback
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_Feedback
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_Feedback_ & other) const
  {
    if (this->remaining != other.remaining) {
      return false;
    }
    if (this->current_velocity != other.current_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_Feedback_

// alias to use template instance with default allocator
using Dock_Feedback =
  robotnik_navigation_msgs::action::Dock_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "robotnik_navigation_msgs/action/detail/dock__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Request __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_SendGoal_Request_
{
  using Type = Dock_SendGoal_Request_<ContainerAllocator>;

  explicit Dock_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Dock_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const robotnik_navigation_msgs::action::Dock_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Request
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Request
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_SendGoal_Request_

// alias to use template instance with default allocator
using Dock_SendGoal_Request =
  robotnik_navigation_msgs::action::Dock_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Response __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_SendGoal_Response_
{
  using Type = Dock_SendGoal_Response_<ContainerAllocator>;

  explicit Dock_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Dock_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Response
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Response
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_SendGoal_Response_

// alias to use template instance with default allocator
using Dock_SendGoal_Response =
  robotnik_navigation_msgs::action::Dock_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Event __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_SendGoal_Event_
{
  using Type = Dock_SendGoal_Event_<ContainerAllocator>;

  explicit Dock_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Dock_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotnik_navigation_msgs::action::Dock_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotnik_navigation_msgs::action::Dock_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Event
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_SendGoal_Event
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_SendGoal_Event_

// alias to use template instance with default allocator
using Dock_SendGoal_Event =
  robotnik_navigation_msgs::action::Dock_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs

namespace robotnik_navigation_msgs
{

namespace action
{

struct Dock_SendGoal
{
  using Request = robotnik_navigation_msgs::action::Dock_SendGoal_Request;
  using Response = robotnik_navigation_msgs::action::Dock_SendGoal_Response;
  using Event = robotnik_navigation_msgs::action::Dock_SendGoal_Event;
};

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Request __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_GetResult_Request_
{
  using Type = Dock_GetResult_Request_<ContainerAllocator>;

  explicit Dock_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Dock_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Request
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Request
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_GetResult_Request_

// alias to use template instance with default allocator
using Dock_GetResult_Request =
  robotnik_navigation_msgs::action::Dock_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Response __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_GetResult_Response_
{
  using Type = Dock_GetResult_Response_<ContainerAllocator>;

  explicit Dock_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Dock_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const robotnik_navigation_msgs::action::Dock_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Response
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Response
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_GetResult_Response_

// alias to use template instance with default allocator
using Dock_GetResult_Response =
  robotnik_navigation_msgs::action::Dock_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Event __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_GetResult_Event_
{
  using Type = Dock_GetResult_Event_<ContainerAllocator>;

  explicit Dock_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Dock_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotnik_navigation_msgs::action::Dock_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotnik_navigation_msgs::action::Dock_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Event
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_GetResult_Event
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_GetResult_Event_

// alias to use template instance with default allocator
using Dock_GetResult_Event =
  robotnik_navigation_msgs::action::Dock_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs

namespace robotnik_navigation_msgs
{

namespace action
{

struct Dock_GetResult
{
  using Request = robotnik_navigation_msgs::action::Dock_GetResult_Request;
  using Response = robotnik_navigation_msgs::action::Dock_GetResult_Response;
  using Event = robotnik_navigation_msgs::action::Dock_GetResult_Event;
};

}  // namespace action

}  // namespace robotnik_navigation_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_navigation_msgs__action__Dock_FeedbackMessage __declspec(deprecated)
#endif

namespace robotnik_navigation_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Dock_FeedbackMessage_
{
  using Type = Dock_FeedbackMessage_<ContainerAllocator>;

  explicit Dock_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Dock_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const robotnik_navigation_msgs::action::Dock_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_FeedbackMessage
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_navigation_msgs__action__Dock_FeedbackMessage
    std::shared_ptr<robotnik_navigation_msgs::action::Dock_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_FeedbackMessage_

// alias to use template instance with default allocator
using Dock_FeedbackMessage =
  robotnik_navigation_msgs::action::Dock_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotnik_navigation_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace robotnik_navigation_msgs
{

namespace action
{

struct Dock
{
  /// The goal message defined in the action definition.
  using Goal = robotnik_navigation_msgs::action::Dock_Goal;
  /// The result message defined in the action definition.
  using Result = robotnik_navigation_msgs::action::Dock_Result;
  /// The feedback message defined in the action definition.
  using Feedback = robotnik_navigation_msgs::action::Dock_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = robotnik_navigation_msgs::action::Dock_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = robotnik_navigation_msgs::action::Dock_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = robotnik_navigation_msgs::action::Dock_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Dock Dock;

}  // namespace action

}  // namespace robotnik_navigation_msgs

#endif  // ROBOTNIK_NAVIGATION_MSGS__ACTION__DETAIL__DOCK__STRUCT_HPP_
