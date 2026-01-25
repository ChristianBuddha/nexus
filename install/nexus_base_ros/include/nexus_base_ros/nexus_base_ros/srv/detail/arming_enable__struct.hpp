// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nexus_base_ros:srv/ArmingEnable.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__STRUCT_HPP_
#define NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nexus_base_ros__srv__ArmingEnable_Request __attribute__((deprecated))
#else
# define DEPRECATED__nexus_base_ros__srv__ArmingEnable_Request __declspec(deprecated)
#endif

namespace nexus_base_ros
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmingEnable_Request_
{
  using Type = ArmingEnable_Request_<ContainerAllocator>;

  explicit ArmingEnable_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  explicit ArmingEnable_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nexus_base_ros__srv__ArmingEnable_Request
    std::shared_ptr<nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nexus_base_ros__srv__ArmingEnable_Request
    std::shared_ptr<nexus_base_ros::srv::ArmingEnable_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmingEnable_Request_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmingEnable_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmingEnable_Request_

// alias to use template instance with default allocator
using ArmingEnable_Request =
  nexus_base_ros::srv::ArmingEnable_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nexus_base_ros


#ifndef _WIN32
# define DEPRECATED__nexus_base_ros__srv__ArmingEnable_Response __attribute__((deprecated))
#else
# define DEPRECATED__nexus_base_ros__srv__ArmingEnable_Response __declspec(deprecated)
#endif

namespace nexus_base_ros
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmingEnable_Response_
{
  using Type = ArmingEnable_Response_<ContainerAllocator>;

  explicit ArmingEnable_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ArmingEnable_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nexus_base_ros__srv__ArmingEnable_Response
    std::shared_ptr<nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nexus_base_ros__srv__ArmingEnable_Response
    std::shared_ptr<nexus_base_ros::srv::ArmingEnable_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmingEnable_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmingEnable_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmingEnable_Response_

// alias to use template instance with default allocator
using ArmingEnable_Response =
  nexus_base_ros::srv::ArmingEnable_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nexus_base_ros

namespace nexus_base_ros
{

namespace srv
{

struct ArmingEnable
{
  using Request = nexus_base_ros::srv::ArmingEnable_Request;
  using Response = nexus_base_ros::srv::ArmingEnable_Response;
};

}  // namespace srv

}  // namespace nexus_base_ros

#endif  // NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__STRUCT_HPP_
