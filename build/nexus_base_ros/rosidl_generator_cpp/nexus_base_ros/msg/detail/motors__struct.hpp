// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nexus_base_ros:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__STRUCT_HPP_
#define NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__STRUCT_HPP_

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
# define DEPRECATED__nexus_base_ros__msg__Motors __attribute__((deprecated))
#else
# define DEPRECATED__nexus_base_ros__msg__Motors __declspec(deprecated)
#endif

namespace nexus_base_ros
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motors_
{
  using Type = Motors_<ContainerAllocator>;

  explicit Motors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor0 = 0;
      this->motor1 = 0;
      this->motor2 = 0;
      this->motor3 = 0;
    }
  }

  explicit Motors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor0 = 0;
      this->motor1 = 0;
      this->motor2 = 0;
      this->motor3 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motor0_type =
    int16_t;
  _motor0_type motor0;
  using _motor1_type =
    int16_t;
  _motor1_type motor1;
  using _motor2_type =
    int16_t;
  _motor2_type motor2;
  using _motor3_type =
    int16_t;
  _motor3_type motor3;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motor0(
    const int16_t & _arg)
  {
    this->motor0 = _arg;
    return *this;
  }
  Type & set__motor1(
    const int16_t & _arg)
  {
    this->motor1 = _arg;
    return *this;
  }
  Type & set__motor2(
    const int16_t & _arg)
  {
    this->motor2 = _arg;
    return *this;
  }
  Type & set__motor3(
    const int16_t & _arg)
  {
    this->motor3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nexus_base_ros::msg::Motors_<ContainerAllocator> *;
  using ConstRawPtr =
    const nexus_base_ros::msg::Motors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nexus_base_ros::msg::Motors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nexus_base_ros::msg::Motors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nexus_base_ros::msg::Motors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nexus_base_ros::msg::Motors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nexus_base_ros::msg::Motors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nexus_base_ros::msg::Motors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nexus_base_ros::msg::Motors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nexus_base_ros::msg::Motors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nexus_base_ros__msg__Motors
    std::shared_ptr<nexus_base_ros::msg::Motors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nexus_base_ros__msg__Motors
    std::shared_ptr<nexus_base_ros::msg::Motors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motor0 != other.motor0) {
      return false;
    }
    if (this->motor1 != other.motor1) {
      return false;
    }
    if (this->motor2 != other.motor2) {
      return false;
    }
    if (this->motor3 != other.motor3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motors_

// alias to use template instance with default allocator
using Motors =
  nexus_base_ros::msg::Motors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nexus_base_ros

#endif  // NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__STRUCT_HPP_
