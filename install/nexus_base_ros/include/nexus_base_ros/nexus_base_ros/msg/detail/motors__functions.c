// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nexus_base_ros:msg/Motors.idl
// generated code does not contain a copyright notice
#include "nexus_base_ros/msg/detail/motors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
nexus_base_ros__msg__Motors__init(nexus_base_ros__msg__Motors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nexus_base_ros__msg__Motors__fini(msg);
    return false;
  }
  // motor0
  // motor1
  // motor2
  // motor3
  return true;
}

void
nexus_base_ros__msg__Motors__fini(nexus_base_ros__msg__Motors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // motor0
  // motor1
  // motor2
  // motor3
}

bool
nexus_base_ros__msg__Motors__are_equal(const nexus_base_ros__msg__Motors * lhs, const nexus_base_ros__msg__Motors * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // motor0
  if (lhs->motor0 != rhs->motor0) {
    return false;
  }
  // motor1
  if (lhs->motor1 != rhs->motor1) {
    return false;
  }
  // motor2
  if (lhs->motor2 != rhs->motor2) {
    return false;
  }
  // motor3
  if (lhs->motor3 != rhs->motor3) {
    return false;
  }
  return true;
}

bool
nexus_base_ros__msg__Motors__copy(
  const nexus_base_ros__msg__Motors * input,
  nexus_base_ros__msg__Motors * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // motor0
  output->motor0 = input->motor0;
  // motor1
  output->motor1 = input->motor1;
  // motor2
  output->motor2 = input->motor2;
  // motor3
  output->motor3 = input->motor3;
  return true;
}

nexus_base_ros__msg__Motors *
nexus_base_ros__msg__Motors__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__msg__Motors * msg = (nexus_base_ros__msg__Motors *)allocator.allocate(sizeof(nexus_base_ros__msg__Motors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nexus_base_ros__msg__Motors));
  bool success = nexus_base_ros__msg__Motors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nexus_base_ros__msg__Motors__destroy(nexus_base_ros__msg__Motors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nexus_base_ros__msg__Motors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nexus_base_ros__msg__Motors__Sequence__init(nexus_base_ros__msg__Motors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__msg__Motors * data = NULL;

  if (size) {
    data = (nexus_base_ros__msg__Motors *)allocator.zero_allocate(size, sizeof(nexus_base_ros__msg__Motors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nexus_base_ros__msg__Motors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nexus_base_ros__msg__Motors__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nexus_base_ros__msg__Motors__Sequence__fini(nexus_base_ros__msg__Motors__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nexus_base_ros__msg__Motors__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nexus_base_ros__msg__Motors__Sequence *
nexus_base_ros__msg__Motors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__msg__Motors__Sequence * array = (nexus_base_ros__msg__Motors__Sequence *)allocator.allocate(sizeof(nexus_base_ros__msg__Motors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nexus_base_ros__msg__Motors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nexus_base_ros__msg__Motors__Sequence__destroy(nexus_base_ros__msg__Motors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nexus_base_ros__msg__Motors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nexus_base_ros__msg__Motors__Sequence__are_equal(const nexus_base_ros__msg__Motors__Sequence * lhs, const nexus_base_ros__msg__Motors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nexus_base_ros__msg__Motors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nexus_base_ros__msg__Motors__Sequence__copy(
  const nexus_base_ros__msg__Motors__Sequence * input,
  nexus_base_ros__msg__Motors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nexus_base_ros__msg__Motors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nexus_base_ros__msg__Motors * data =
      (nexus_base_ros__msg__Motors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nexus_base_ros__msg__Motors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nexus_base_ros__msg__Motors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nexus_base_ros__msg__Motors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
