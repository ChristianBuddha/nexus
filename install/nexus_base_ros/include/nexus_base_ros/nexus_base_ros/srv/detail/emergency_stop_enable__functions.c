// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nexus_base_ros:srv/EmergencyStopEnable.idl
// generated code does not contain a copyright notice
#include "nexus_base_ros/srv/detail/emergency_stop_enable__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
nexus_base_ros__srv__EmergencyStopEnable_Request__init(nexus_base_ros__srv__EmergencyStopEnable_Request * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  return true;
}

void
nexus_base_ros__srv__EmergencyStopEnable_Request__fini(nexus_base_ros__srv__EmergencyStopEnable_Request * msg)
{
  if (!msg) {
    return;
  }
  // enable
}

bool
nexus_base_ros__srv__EmergencyStopEnable_Request__are_equal(const nexus_base_ros__srv__EmergencyStopEnable_Request * lhs, const nexus_base_ros__srv__EmergencyStopEnable_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
nexus_base_ros__srv__EmergencyStopEnable_Request__copy(
  const nexus_base_ros__srv__EmergencyStopEnable_Request * input,
  nexus_base_ros__srv__EmergencyStopEnable_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

nexus_base_ros__srv__EmergencyStopEnable_Request *
nexus_base_ros__srv__EmergencyStopEnable_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__srv__EmergencyStopEnable_Request * msg = (nexus_base_ros__srv__EmergencyStopEnable_Request *)allocator.allocate(sizeof(nexus_base_ros__srv__EmergencyStopEnable_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nexus_base_ros__srv__EmergencyStopEnable_Request));
  bool success = nexus_base_ros__srv__EmergencyStopEnable_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nexus_base_ros__srv__EmergencyStopEnable_Request__destroy(nexus_base_ros__srv__EmergencyStopEnable_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nexus_base_ros__srv__EmergencyStopEnable_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence__init(nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__srv__EmergencyStopEnable_Request * data = NULL;

  if (size) {
    data = (nexus_base_ros__srv__EmergencyStopEnable_Request *)allocator.zero_allocate(size, sizeof(nexus_base_ros__srv__EmergencyStopEnable_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nexus_base_ros__srv__EmergencyStopEnable_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nexus_base_ros__srv__EmergencyStopEnable_Request__fini(&data[i - 1]);
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
nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence__fini(nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence * array)
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
      nexus_base_ros__srv__EmergencyStopEnable_Request__fini(&array->data[i]);
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

nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence *
nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence * array = (nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence *)allocator.allocate(sizeof(nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence__destroy(nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence__are_equal(const nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence * lhs, const nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nexus_base_ros__srv__EmergencyStopEnable_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence__copy(
  const nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence * input,
  nexus_base_ros__srv__EmergencyStopEnable_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nexus_base_ros__srv__EmergencyStopEnable_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nexus_base_ros__srv__EmergencyStopEnable_Request * data =
      (nexus_base_ros__srv__EmergencyStopEnable_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nexus_base_ros__srv__EmergencyStopEnable_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nexus_base_ros__srv__EmergencyStopEnable_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nexus_base_ros__srv__EmergencyStopEnable_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
nexus_base_ros__srv__EmergencyStopEnable_Response__init(nexus_base_ros__srv__EmergencyStopEnable_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
nexus_base_ros__srv__EmergencyStopEnable_Response__fini(nexus_base_ros__srv__EmergencyStopEnable_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
nexus_base_ros__srv__EmergencyStopEnable_Response__are_equal(const nexus_base_ros__srv__EmergencyStopEnable_Response * lhs, const nexus_base_ros__srv__EmergencyStopEnable_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
nexus_base_ros__srv__EmergencyStopEnable_Response__copy(
  const nexus_base_ros__srv__EmergencyStopEnable_Response * input,
  nexus_base_ros__srv__EmergencyStopEnable_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

nexus_base_ros__srv__EmergencyStopEnable_Response *
nexus_base_ros__srv__EmergencyStopEnable_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__srv__EmergencyStopEnable_Response * msg = (nexus_base_ros__srv__EmergencyStopEnable_Response *)allocator.allocate(sizeof(nexus_base_ros__srv__EmergencyStopEnable_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nexus_base_ros__srv__EmergencyStopEnable_Response));
  bool success = nexus_base_ros__srv__EmergencyStopEnable_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nexus_base_ros__srv__EmergencyStopEnable_Response__destroy(nexus_base_ros__srv__EmergencyStopEnable_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nexus_base_ros__srv__EmergencyStopEnable_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence__init(nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__srv__EmergencyStopEnable_Response * data = NULL;

  if (size) {
    data = (nexus_base_ros__srv__EmergencyStopEnable_Response *)allocator.zero_allocate(size, sizeof(nexus_base_ros__srv__EmergencyStopEnable_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nexus_base_ros__srv__EmergencyStopEnable_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nexus_base_ros__srv__EmergencyStopEnable_Response__fini(&data[i - 1]);
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
nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence__fini(nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence * array)
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
      nexus_base_ros__srv__EmergencyStopEnable_Response__fini(&array->data[i]);
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

nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence *
nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence * array = (nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence *)allocator.allocate(sizeof(nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence__destroy(nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence__are_equal(const nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence * lhs, const nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nexus_base_ros__srv__EmergencyStopEnable_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence__copy(
  const nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence * input,
  nexus_base_ros__srv__EmergencyStopEnable_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nexus_base_ros__srv__EmergencyStopEnable_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nexus_base_ros__srv__EmergencyStopEnable_Response * data =
      (nexus_base_ros__srv__EmergencyStopEnable_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nexus_base_ros__srv__EmergencyStopEnable_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nexus_base_ros__srv__EmergencyStopEnable_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nexus_base_ros__srv__EmergencyStopEnable_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
