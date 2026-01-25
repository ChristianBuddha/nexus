// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nexus_base_ros:srv/ArmingEnable.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__BUILDER_HPP_
#define NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nexus_base_ros/srv/detail/arming_enable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nexus_base_ros
{

namespace srv
{

namespace builder
{

class Init_ArmingEnable_Request_enable
{
public:
  Init_ArmingEnable_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nexus_base_ros::srv::ArmingEnable_Request enable(::nexus_base_ros::srv::ArmingEnable_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nexus_base_ros::srv::ArmingEnable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nexus_base_ros::srv::ArmingEnable_Request>()
{
  return nexus_base_ros::srv::builder::Init_ArmingEnable_Request_enable();
}

}  // namespace nexus_base_ros


namespace nexus_base_ros
{

namespace srv
{

namespace builder
{

class Init_ArmingEnable_Response_success
{
public:
  Init_ArmingEnable_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nexus_base_ros::srv::ArmingEnable_Response success(::nexus_base_ros::srv::ArmingEnable_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nexus_base_ros::srv::ArmingEnable_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nexus_base_ros::srv::ArmingEnable_Response>()
{
  return nexus_base_ros::srv::builder::Init_ArmingEnable_Response_success();
}

}  // namespace nexus_base_ros

#endif  // NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__BUILDER_HPP_
