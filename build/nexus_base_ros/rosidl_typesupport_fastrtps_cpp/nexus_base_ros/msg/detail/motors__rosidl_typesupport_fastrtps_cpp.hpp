// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from nexus_base_ros:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "nexus_base_ros/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "nexus_base_ros/msg/detail/motors__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace nexus_base_ros
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nexus_base_ros
cdr_serialize(
  const nexus_base_ros::msg::Motors & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nexus_base_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nexus_base_ros::msg::Motors & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nexus_base_ros
get_serialized_size(
  const nexus_base_ros::msg::Motors & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nexus_base_ros
max_serialized_size_Motors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nexus_base_ros

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nexus_base_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nexus_base_ros, msg, Motors)();

#ifdef __cplusplus
}
#endif

#endif  // NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
