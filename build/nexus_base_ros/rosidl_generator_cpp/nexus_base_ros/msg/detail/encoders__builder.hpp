// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nexus_base_ros:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__BUILDER_HPP_
#define NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nexus_base_ros/msg/detail/encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nexus_base_ros
{

namespace msg
{

namespace builder
{

class Init_Encoders_enc3
{
public:
  explicit Init_Encoders_enc3(::nexus_base_ros::msg::Encoders & msg)
  : msg_(msg)
  {}
  ::nexus_base_ros::msg::Encoders enc3(::nexus_base_ros::msg::Encoders::_enc3_type arg)
  {
    msg_.enc3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nexus_base_ros::msg::Encoders msg_;
};

class Init_Encoders_enc2
{
public:
  explicit Init_Encoders_enc2(::nexus_base_ros::msg::Encoders & msg)
  : msg_(msg)
  {}
  Init_Encoders_enc3 enc2(::nexus_base_ros::msg::Encoders::_enc2_type arg)
  {
    msg_.enc2 = std::move(arg);
    return Init_Encoders_enc3(msg_);
  }

private:
  ::nexus_base_ros::msg::Encoders msg_;
};

class Init_Encoders_enc1
{
public:
  explicit Init_Encoders_enc1(::nexus_base_ros::msg::Encoders & msg)
  : msg_(msg)
  {}
  Init_Encoders_enc2 enc1(::nexus_base_ros::msg::Encoders::_enc1_type arg)
  {
    msg_.enc1 = std::move(arg);
    return Init_Encoders_enc2(msg_);
  }

private:
  ::nexus_base_ros::msg::Encoders msg_;
};

class Init_Encoders_enc0
{
public:
  explicit Init_Encoders_enc0(::nexus_base_ros::msg::Encoders & msg)
  : msg_(msg)
  {}
  Init_Encoders_enc1 enc0(::nexus_base_ros::msg::Encoders::_enc0_type arg)
  {
    msg_.enc0 = std::move(arg);
    return Init_Encoders_enc1(msg_);
  }

private:
  ::nexus_base_ros::msg::Encoders msg_;
};

class Init_Encoders_header
{
public:
  Init_Encoders_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Encoders_enc0 header(::nexus_base_ros::msg::Encoders::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Encoders_enc0(msg_);
  }

private:
  ::nexus_base_ros::msg::Encoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nexus_base_ros::msg::Encoders>()
{
  return nexus_base_ros::msg::builder::Init_Encoders_header();
}

}  // namespace nexus_base_ros

#endif  // NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__BUILDER_HPP_
