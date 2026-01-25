// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nexus_base_ros:srv/ArmingEnable.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__STRUCT_H_
#define NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ArmingEnable in the package nexus_base_ros.
typedef struct nexus_base_ros__srv__ArmingEnable_Request
{
  bool enable;
} nexus_base_ros__srv__ArmingEnable_Request;

// Struct for a sequence of nexus_base_ros__srv__ArmingEnable_Request.
typedef struct nexus_base_ros__srv__ArmingEnable_Request__Sequence
{
  nexus_base_ros__srv__ArmingEnable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nexus_base_ros__srv__ArmingEnable_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ArmingEnable in the package nexus_base_ros.
typedef struct nexus_base_ros__srv__ArmingEnable_Response
{
  bool success;
} nexus_base_ros__srv__ArmingEnable_Response;

// Struct for a sequence of nexus_base_ros__srv__ArmingEnable_Response.
typedef struct nexus_base_ros__srv__ArmingEnable_Response__Sequence
{
  nexus_base_ros__srv__ArmingEnable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nexus_base_ros__srv__ArmingEnable_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEXUS_BASE_ROS__SRV__DETAIL__ARMING_ENABLE__STRUCT_H_
