// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nexus_base_ros:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__BUILDER_HPP_
#define NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nexus_base_ros/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nexus_base_ros
{

namespace msg
{

namespace builder
{

class Init_Motors_motor3
{
public:
  explicit Init_Motors_motor3(::nexus_base_ros::msg::Motors & msg)
  : msg_(msg)
  {}
  ::nexus_base_ros::msg::Motors motor3(::nexus_base_ros::msg::Motors::_motor3_type arg)
  {
    msg_.motor3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nexus_base_ros::msg::Motors msg_;
};

class Init_Motors_motor2
{
public:
  explicit Init_Motors_motor2(::nexus_base_ros::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_motor3 motor2(::nexus_base_ros::msg::Motors::_motor2_type arg)
  {
    msg_.motor2 = std::move(arg);
    return Init_Motors_motor3(msg_);
  }

private:
  ::nexus_base_ros::msg::Motors msg_;
};

class Init_Motors_motor1
{
public:
  explicit Init_Motors_motor1(::nexus_base_ros::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_motor2 motor1(::nexus_base_ros::msg::Motors::_motor1_type arg)
  {
    msg_.motor1 = std::move(arg);
    return Init_Motors_motor2(msg_);
  }

private:
  ::nexus_base_ros::msg::Motors msg_;
};

class Init_Motors_motor0
{
public:
  explicit Init_Motors_motor0(::nexus_base_ros::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_motor1 motor0(::nexus_base_ros::msg::Motors::_motor0_type arg)
  {
    msg_.motor0 = std::move(arg);
    return Init_Motors_motor1(msg_);
  }

private:
  ::nexus_base_ros::msg::Motors msg_;
};

class Init_Motors_header
{
public:
  Init_Motors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motors_motor0 header(::nexus_base_ros::msg::Motors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Motors_motor0(msg_);
  }

private:
  ::nexus_base_ros::msg::Motors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nexus_base_ros::msg::Motors>()
{
  return nexus_base_ros::msg::builder::Init_Motors_header();
}

}  // namespace nexus_base_ros

#endif  // NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__BUILDER_HPP_
