// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nexus_base_ros:msg/Encoders.idl
// generated code does not contain a copyright notice
#include "nexus_base_ros/msg/detail/encoders__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
nexus_base_ros__msg__Encoders__init(nexus_base_ros__msg__Encoders * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nexus_base_ros__msg__Encoders__fini(msg);
    return false;
  }
  // enc0
  // enc1
  // enc2
  // enc3
  return true;
}

void
nexus_base_ros__msg__Encoders__fini(nexus_base_ros__msg__Encoders * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // enc0
  // enc1
  // enc2
  // enc3
}

bool
nexus_base_ros__msg__Encoders__are_equal(const nexus_base_ros__msg__Encoders * lhs, const nexus_base_ros__msg__Encoders * rhs)
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
  // enc0
  if (lhs->enc0 != rhs->enc0) {
    return false;
  }
  // enc1
  if (lhs->enc1 != rhs->enc1) {
    return false;
  }
  // enc2
  if (lhs->enc2 != rhs->enc2) {
    return false;
  }
  // enc3
  if (lhs->enc3 != rhs->enc3) {
    return false;
  }
  return true;
}

bool
nexus_base_ros__msg__Encoders__copy(
  const nexus_base_ros__msg__Encoders * input,
  nexus_base_ros__msg__Encoders * output)
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
  // enc0
  output->enc0 = input->enc0;
  // enc1
  output->enc1 = input->enc1;
  // enc2
  output->enc2 = input->enc2;
  // enc3
  output->enc3 = input->enc3;
  return true;
}

nexus_base_ros__msg__Encoders *
nexus_base_ros__msg__Encoders__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__msg__Encoders * msg = (nexus_base_ros__msg__Encoders *)allocator.allocate(sizeof(nexus_base_ros__msg__Encoders), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nexus_base_ros__msg__Encoders));
  bool success = nexus_base_ros__msg__Encoders__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nexus_base_ros__msg__Encoders__destroy(nexus_base_ros__msg__Encoders * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nexus_base_ros__msg__Encoders__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nexus_base_ros__msg__Encoders__Sequence__init(nexus_base_ros__msg__Encoders__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__msg__Encoders * data = NULL;

  if (size) {
    data = (nexus_base_ros__msg__Encoders *)allocator.zero_allocate(size, sizeof(nexus_base_ros__msg__Encoders), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nexus_base_ros__msg__Encoders__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nexus_base_ros__msg__Encoders__fini(&data[i - 1]);
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
nexus_base_ros__msg__Encoders__Sequence__fini(nexus_base_ros__msg__Encoders__Sequence * array)
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
      nexus_base_ros__msg__Encoders__fini(&array->data[i]);
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

nexus_base_ros__msg__Encoders__Sequence *
nexus_base_ros__msg__Encoders__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__msg__Encoders__Sequence * array = (nexus_base_ros__msg__Encoders__Sequence *)allocator.allocate(sizeof(nexus_base_ros__msg__Encoders__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nexus_base_ros__msg__Encoders__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nexus_base_ros__msg__Encoders__Sequence__destroy(nexus_base_ros__msg__Encoders__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nexus_base_ros__msg__Encoders__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nexus_base_ros__msg__Encoders__Sequence__are_equal(const nexus_base_ros__msg__Encoders__Sequence * lhs, const nexus_base_ros__msg__Encoders__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nexus_base_ros__msg__Encoders__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nexus_base_ros__msg__Encoders__Sequence__copy(
  const nexus_base_ros__msg__Encoders__Sequence * input,
  nexus_base_ros__msg__Encoders__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nexus_base_ros__msg__Encoders);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nexus_base_ros__msg__Encoders * data =
      (nexus_base_ros__msg__Encoders *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nexus_base_ros__msg__Encoders__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nexus_base_ros__msg__Encoders__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nexus_base_ros__msg__Encoders__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
