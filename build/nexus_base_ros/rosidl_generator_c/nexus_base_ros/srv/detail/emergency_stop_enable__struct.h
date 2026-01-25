// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nexus_base_ros:srv/EmergencyStopEnable.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__SRV__DETAIL__EMERGENCY_STOP_ENABLE__STRUCT_H_
#define NEXUS_BASE_ROS__SRV__DETAIL__EMERGENCY_STOP_ENABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EmergencyStopEnable in the package nexus_base_ros.
typedef struct nexus_base_ros__srv__EmergencyStopEnable_Request
{
  bool enable;
} nexus_base_ros__srv__EmergencyStopEnable_Request;

// Struct for a sequence of nexus_base_ros__srv__EmergencyStopEnable_Request.
typedef struct nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence
{
  nexus_base_ros__srv__EmergencyStopEnable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/EmergencyStopEnable in the package nexus_base_ros.
typedef struct nexus_base_ros__srv__EmergencyStopEnable_Response
{
  bool success;
} nexus_base_ros__srv__EmergencyStopEnable_Response;

// Struct for a sequence of nexus_base_ros__srv__EmergencyStopEnable_Response.
typedef struct nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence
{
  nexus_base_ros__srv__EmergencyStopEnable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEXUS_BASE_ROS__SRV__DETAIL__EMERGENCY_STOP_ENABLE__STRUCT_H_
