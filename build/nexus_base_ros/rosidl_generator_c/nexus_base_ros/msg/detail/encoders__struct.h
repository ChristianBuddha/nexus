// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nexus_base_ros:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__STRUCT_H_
#define NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Encoders in the package nexus_base_ros.
typedef struct nexus_base_ros__msg__Encoders
{
  std_msgs__msg__Header header;
  int16_t enc0;
  int16_t enc1;
  int16_t enc2;
  int16_t enc3;
} nexus_base_ros__msg__Encoders;

// Struct for a sequence of nexus_base_ros__msg__Encoders.
typedef struct nexus_base_ros__msg__Encoders__Sequence
{
  nexus_base_ros__msg__Encoders * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nexus_base_ros__msg__Encoders__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEXUS_BASE_ROS__MSG__DETAIL__ENCODERS__STRUCT_H_
