// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/StampedPps.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/stamped_pps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
// Member `host_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
multisense_msgs__msg__StampedPps__init(multisense_msgs__msg__StampedPps * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!builtin_interfaces__msg__Time__init(&msg->data)) {
    multisense_msgs__msg__StampedPps__fini(msg);
    return false;
  }
  // host_time
  if (!builtin_interfaces__msg__Time__init(&msg->host_time)) {
    multisense_msgs__msg__StampedPps__fini(msg);
    return false;
  }
  return true;
}

void
multisense_msgs__msg__StampedPps__fini(multisense_msgs__msg__StampedPps * msg)
{
  if (!msg) {
    return;
  }
  // data
  builtin_interfaces__msg__Time__fini(&msg->data);
  // host_time
  builtin_interfaces__msg__Time__fini(&msg->host_time);
}

bool
multisense_msgs__msg__StampedPps__are_equal(const multisense_msgs__msg__StampedPps * lhs, const multisense_msgs__msg__StampedPps * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // host_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->host_time), &(rhs->host_time)))
  {
    return false;
  }
  return true;
}

bool
multisense_msgs__msg__StampedPps__copy(
  const multisense_msgs__msg__StampedPps * input,
  multisense_msgs__msg__StampedPps * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!builtin_interfaces__msg__Time__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // host_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->host_time), &(output->host_time)))
  {
    return false;
  }
  return true;
}

multisense_msgs__msg__StampedPps *
multisense_msgs__msg__StampedPps__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__StampedPps * msg = (multisense_msgs__msg__StampedPps *)allocator.allocate(sizeof(multisense_msgs__msg__StampedPps), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__StampedPps));
  bool success = multisense_msgs__msg__StampedPps__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__StampedPps__destroy(multisense_msgs__msg__StampedPps * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__StampedPps__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__StampedPps__Sequence__init(multisense_msgs__msg__StampedPps__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__StampedPps * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__StampedPps *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__StampedPps), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__StampedPps__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__StampedPps__fini(&data[i - 1]);
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
multisense_msgs__msg__StampedPps__Sequence__fini(multisense_msgs__msg__StampedPps__Sequence * array)
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
      multisense_msgs__msg__StampedPps__fini(&array->data[i]);
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

multisense_msgs__msg__StampedPps__Sequence *
multisense_msgs__msg__StampedPps__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__StampedPps__Sequence * array = (multisense_msgs__msg__StampedPps__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__StampedPps__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__StampedPps__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__StampedPps__Sequence__destroy(multisense_msgs__msg__StampedPps__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__StampedPps__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__StampedPps__Sequence__are_equal(const multisense_msgs__msg__StampedPps__Sequence * lhs, const multisense_msgs__msg__StampedPps__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__StampedPps__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__StampedPps__Sequence__copy(
  const multisense_msgs__msg__StampedPps__Sequence * input,
  multisense_msgs__msg__StampedPps__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__StampedPps);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__StampedPps * data =
      (multisense_msgs__msg__StampedPps *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__StampedPps__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__StampedPps__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__StampedPps__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
