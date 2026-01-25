// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nexus_base_ros:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__STRUCT_HPP_
#define NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nexus_base_ros__msg__Encoders __attribute__((deprecated))
#else
# define DEPRECATED__nexus_base_ros__msg__Encoders __declspec(deprecated)
#endif

namespace nexus_base_ros
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Encoders_
{
  using Type = Encoders_<ContainerAllocator>;

  explicit Encoders_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enc0 = 0;
      this->enc1 = 0;
      this->enc2 = 0;
      this->enc3 = 0;
    }
  }

  explicit Encoders_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enc0 = 0;
      this->enc1 = 0;
      this->enc2 = 0;
      this->enc3 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _enc0_type =
    int16_t;
  _enc0_type enc0;
  using _enc1_type =
    int16_t;
  _enc1_type enc1;
  using _enc2_type =
    int16_t;
  _enc2_type enc2;
  using _enc3_type =
    int16_t;
  _enc3_type enc3;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__enc0(
    const int16_t & _arg)
  {
    this->enc0 = _arg;
    return *this;
  }
  Type & set__enc1(
    const int16_t & _arg)
  {
    this->enc1 = _arg;
    return *this;
  }
  Type & set__enc2(
    const int16_t & _arg)
  {
    this->enc2 = _arg;
    return *this;
  }
  Type & set__enc3(
    const int16_t & _arg)
  {
    this->enc3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nexus_base_ros::msg::Encoders_<ContainerAllocator> *;
  using ConstRawPtr =
    const nexus_base_ros::msg::Encoders_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nexus_base_ros::msg::Encoders_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nexus_base_ros::msg::Encoders_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nexus_base_ros::msg::Encoders_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nexus_base_ros::msg::Encoders_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nexus_base_ros::msg::Encoders_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nexus_base_ros::msg::Encoders_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nexus_base_ros::msg::Encoders_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nexus_base_ros::msg::Encoders_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nexus_base_ros__msg__Encoders
    std::shared_ptr<nexus_base_ros::msg::Encoders_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nexus_base_ros__msg__Encoders
    std::shared_ptr<nexus_base_ros::msg::Encoders_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Encoders_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->enc0 != other.enc0) {
      return false;
    }
    if (this->enc1 != other.enc1) {
      return false;
    }
    if (this->enc2 != other.enc2) {
      return false;
    }
    if (this->enc3 != other.enc3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Encoders_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Encoders_

// alias to use template instance with default allocator
using Encoders =
  nexus_base_ros::msg::Encoders_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nexus_base_ros

#endif  // NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__STRUCT_HPP_
