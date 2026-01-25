// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nexus_base_ros:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__TRAITS_HPP_
#define NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nexus_base_ros/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nexus_base_ros
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: motor0
  {
    out << "motor0: ";
    rosidl_generator_traits::value_to_yaml(msg.motor0, out);
    out << ", ";
  }

  // member: motor1
  {
    out << "motor1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1, out);
    out << ", ";
  }

  // member: motor2
  {
    out << "motor2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2, out);
    out << ", ";
  }

  // member: motor3
  {
    out << "motor3: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: motor0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor0: ";
    rosidl_generator_traits::value_to_yaml(msg.motor0, out);
    out << "\n";
  }

  // member: motor1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1, out);
    out << "\n";
  }

  // member: motor2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2, out);
    out << "\n";
  }

  // member: motor3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor3: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motors & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace nexus_base_ros

namespace rosidl_generator_traits
{

[[deprecated("use nexus_base_ros::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nexus_base_ros::msg::Motors & msg,
  std::ostream & out, size_t indentation = 0)
{
  nexus_base_ros::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nexus_base_ros::msg::to_yaml() instead")]]
inline std::string to_yaml(const nexus_base_ros::msg::Motors & msg)
{
  return nexus_base_ros::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nexus_base_ros::msg::Motors>()
{
  return "nexus_base_ros::msg::Motors";
}

template<>
inline const char * name<nexus_base_ros::msg::Motors>()
{
  return "nexus_base_ros/msg/Motors";
}

template<>
struct has_fixed_size<nexus_base_ros::msg::Motors>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<nexus_base_ros::msg::Motors>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<nexus_base_ros::msg::Motors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__TRAITS_HPP_
