// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotnik_supervisor_msgs:srv/GetStackLogs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotnik_supervisor_msgs/srv/get_stack_logs.hpp"


#ifndef ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_LOGS__TRAITS_HPP_
#define ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_LOGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotnik_supervisor_msgs/srv/detail/get_stack_logs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotnik_supervisor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStackLogs_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetStackLogs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStackLogs_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robotnik_supervisor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotnik_supervisor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotnik_supervisor_msgs::srv::GetStackLogs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotnik_supervisor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotnik_supervisor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotnik_supervisor_msgs::srv::GetStackLogs_Request & msg)
{
  return robotnik_supervisor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotnik_supervisor_msgs::srv::GetStackLogs_Request>()
{
  return "robotnik_supervisor_msgs::srv::GetStackLogs_Request";
}

template<>
inline const char * name<robotnik_supervisor_msgs::srv::GetStackLogs_Request>()
{
  return "robotnik_supervisor_msgs/srv/GetStackLogs_Request";
}

template<>
struct has_fixed_size<robotnik_supervisor_msgs::srv::GetStackLogs_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotnik_supervisor_msgs::srv::GetStackLogs_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotnik_supervisor_msgs::srv::GetStackLogs_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "robotnik_common_msgs/msg/detail/response__traits.hpp"

namespace robotnik_supervisor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStackLogs_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: logs
  {
    out << "logs: ";
    rosidl_generator_traits::value_to_yaml(msg.logs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetStackLogs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }

  // member: logs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "logs: ";
    rosidl_generator_traits::value_to_yaml(msg.logs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStackLogs_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robotnik_supervisor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotnik_supervisor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotnik_supervisor_msgs::srv::GetStackLogs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotnik_supervisor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotnik_supervisor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotnik_supervisor_msgs::srv::GetStackLogs_Response & msg)
{
  return robotnik_supervisor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotnik_supervisor_msgs::srv::GetStackLogs_Response>()
{
  return "robotnik_supervisor_msgs::srv::GetStackLogs_Response";
}

template<>
inline const char * name<robotnik_supervisor_msgs::srv::GetStackLogs_Response>()
{
  return "robotnik_supervisor_msgs/srv/GetStackLogs_Response";
}

template<>
struct has_fixed_size<robotnik_supervisor_msgs::srv::GetStackLogs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotnik_supervisor_msgs::srv::GetStackLogs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotnik_supervisor_msgs::srv::GetStackLogs_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robotnik_supervisor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStackLogs_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetStackLogs_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStackLogs_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robotnik_supervisor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotnik_supervisor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotnik_supervisor_msgs::srv::GetStackLogs_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotnik_supervisor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotnik_supervisor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotnik_supervisor_msgs::srv::GetStackLogs_Event & msg)
{
  return robotnik_supervisor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotnik_supervisor_msgs::srv::GetStackLogs_Event>()
{
  return "robotnik_supervisor_msgs::srv::GetStackLogs_Event";
}

template<>
inline const char * name<robotnik_supervisor_msgs::srv::GetStackLogs_Event>()
{
  return "robotnik_supervisor_msgs/srv/GetStackLogs_Event";
}

template<>
struct has_fixed_size<robotnik_supervisor_msgs::srv::GetStackLogs_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotnik_supervisor_msgs::srv::GetStackLogs_Event>
  : std::integral_constant<bool, has_bounded_size<robotnik_supervisor_msgs::srv::GetStackLogs_Request>::value && has_bounded_size<robotnik_supervisor_msgs::srv::GetStackLogs_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robotnik_supervisor_msgs::srv::GetStackLogs_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotnik_supervisor_msgs::srv::GetStackLogs>()
{
  return "robotnik_supervisor_msgs::srv::GetStackLogs";
}

template<>
inline const char * name<robotnik_supervisor_msgs::srv::GetStackLogs>()
{
  return "robotnik_supervisor_msgs/srv/GetStackLogs";
}

template<>
struct has_fixed_size<robotnik_supervisor_msgs::srv::GetStackLogs>
  : std::integral_constant<
    bool,
    has_fixed_size<robotnik_supervisor_msgs::srv::GetStackLogs_Request>::value &&
    has_fixed_size<robotnik_supervisor_msgs::srv::GetStackLogs_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotnik_supervisor_msgs::srv::GetStackLogs>
  : std::integral_constant<
    bool,
    has_bounded_size<robotnik_supervisor_msgs::srv::GetStackLogs_Request>::value &&
    has_bounded_size<robotnik_supervisor_msgs::srv::GetStackLogs_Response>::value
  >
{
};

template<>
struct is_service<robotnik_supervisor_msgs::srv::GetStackLogs>
  : std::true_type
{
};

template<>
struct is_service_request<robotnik_supervisor_msgs::srv::GetStackLogs_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotnik_supervisor_msgs::srv::GetStackLogs_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOTNIK_SUPERVISOR_MSGS__SRV__DETAIL__GET_STACK_LOGS__TRAITS_HPP_
