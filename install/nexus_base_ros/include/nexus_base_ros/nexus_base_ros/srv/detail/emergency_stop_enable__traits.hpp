// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nexus_base_ros:srv/EmergencyStopEnable.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__SRV__DETAIL__EMERGENCY_STOP_ENABLE__TRAITS_HPP_
#define NEXUS_BASE_ROS__SRV__DETAIL__EMERGENCY_STOP_ENABLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nexus_base_ros/srv/detail/emergency_stop_enable__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nexus_base_ros
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmergencyStopEnable_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStopEnable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStopEnable_Request & msg, bool use_flow_style = false)
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

}  // namespace nexus_base_ros

namespace rosidl_generator_traits
{

[[deprecated("use nexus_base_ros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nexus_base_ros::srv::EmergencyStopEnable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nexus_base_ros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nexus_base_ros::srv::to_yaml() instead")]]
inline std::string to_yaml(const nexus_base_ros::srv::EmergencyStopEnable_Request & msg)
{
  return nexus_base_ros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nexus_base_ros::srv::EmergencyStopEnable_Request>()
{
  return "nexus_base_ros::srv::EmergencyStopEnable_Request";
}

template<>
inline const char * name<nexus_base_ros::srv::EmergencyStopEnable_Request>()
{
  return "nexus_base_ros/srv/EmergencyStopEnable_Request";
}

template<>
struct has_fixed_size<nexus_base_ros::srv::EmergencyStopEnable_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nexus_base_ros::srv::EmergencyStopEnable_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nexus_base_ros::srv::EmergencyStopEnable_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nexus_base_ros
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmergencyStopEnable_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStopEnable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStopEnable_Response & msg, bool use_flow_style = false)
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

}  // namespace nexus_base_ros

namespace rosidl_generator_traits
{

[[deprecated("use nexus_base_ros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nexus_base_ros::srv::EmergencyStopEnable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nexus_base_ros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nexus_base_ros::srv::to_yaml() instead")]]
inline std::string to_yaml(const nexus_base_ros::srv::EmergencyStopEnable_Response & msg)
{
  return nexus_base_ros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nexus_base_ros::srv::EmergencyStopEnable_Response>()
{
  return "nexus_base_ros::srv::EmergencyStopEnable_Response";
}

template<>
inline const char * name<nexus_base_ros::srv::EmergencyStopEnable_Response>()
{
  return "nexus_base_ros/srv/EmergencyStopEnable_Response";
}

template<>
struct has_fixed_size<nexus_base_ros::srv::EmergencyStopEnable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nexus_base_ros::srv::EmergencyStopEnable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nexus_base_ros::srv::EmergencyStopEnable_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nexus_base_ros::srv::EmergencyStopEnable>()
{
  return "nexus_base_ros::srv::EmergencyStopEnable";
}

template<>
inline const char * name<nexus_base_ros::srv::EmergencyStopEnable>()
{
  return "nexus_base_ros/srv/EmergencyStopEnable";
}

template<>
struct has_fixed_size<nexus_base_ros::srv::EmergencyStopEnable>
  : std::integral_constant<
    bool,
    has_fixed_size<nexus_base_ros::srv::EmergencyStopEnable_Request>::value &&
    has_fixed_size<nexus_base_ros::srv::EmergencyStopEnable_Response>::value
  >
{
};

template<>
struct has_bounded_size<nexus_base_ros::srv::EmergencyStopEnable>
  : std::integral_constant<
    bool,
    has_bounded_size<nexus_base_ros::srv::EmergencyStopEnable_Request>::value &&
    has_bounded_size<nexus_base_ros::srv::EmergencyStopEnable_Response>::value
  >
{
};

template<>
struct is_service<nexus_base_ros::srv::EmergencyStopEnable>
  : std::true_type
{
};

template<>
struct is_service_request<nexus_base_ros::srv::EmergencyStopEnable_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nexus_base_ros::srv::EmergencyStopEnable_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NEXUS_BASE_ROS__SRV__DETAIL__EMERGENCY_STOP_ENABLE__TRAITS_HPP_
