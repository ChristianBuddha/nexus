// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nexus_base_ros:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__STRUCT_H_
#define NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__STRUCT_H_

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

/// Struct defined in msg/Motors in the package nexus_base_ros.
typedef struct nexus_base_ros__msg__Motors
{
  std_msgs__msg__Header header;
  int16_t motor0;
  int16_t motor1;
  int16_t motor2;
  int16_t motor3;
} nexus_base_ros__msg__Motors;

// Struct for a sequence of nexus_base_ros__msg__Motors.
typedef struct nexus_base_ros__msg__Motors__Sequence
{
  nexus_base_ros__msg__Motors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nexus_base_ros__msg__Motors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEXUS_BASE_ROS__MSG__DETAIL__MOTORS__STRUCT_H_
