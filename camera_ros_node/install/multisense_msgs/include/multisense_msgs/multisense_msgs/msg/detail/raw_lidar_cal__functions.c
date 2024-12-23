// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/RawLidarCal.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/raw_lidar_cal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
multisense_msgs__msg__RawLidarCal__init(multisense_msgs__msg__RawLidarCal * msg)
{
  if (!msg) {
    return false;
  }
  // laser_to_spindle
  // camera_to_spindle_fixed
  return true;
}

void
multisense_msgs__msg__RawLidarCal__fini(multisense_msgs__msg__RawLidarCal * msg)
{
  if (!msg) {
    return;
  }
  // laser_to_spindle
  // camera_to_spindle_fixed
}

bool
multisense_msgs__msg__RawLidarCal__are_equal(const multisense_msgs__msg__RawLidarCal * lhs, const multisense_msgs__msg__RawLidarCal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // laser_to_spindle
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->laser_to_spindle[i] != rhs->laser_to_spindle[i]) {
      return false;
    }
  }
  // camera_to_spindle_fixed
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->camera_to_spindle_fixed[i] != rhs->camera_to_spindle_fixed[i]) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__RawLidarCal__copy(
  const multisense_msgs__msg__RawLidarCal * input,
  multisense_msgs__msg__RawLidarCal * output)
{
  if (!input || !output) {
    return false;
  }
  // laser_to_spindle
  for (size_t i = 0; i < 16; ++i) {
    output->laser_to_spindle[i] = input->laser_to_spindle[i];
  }
  // camera_to_spindle_fixed
  for (size_t i = 0; i < 16; ++i) {
    output->camera_to_spindle_fixed[i] = input->camera_to_spindle_fixed[i];
  }
  return true;
}

multisense_msgs__msg__RawLidarCal *
multisense_msgs__msg__RawLidarCal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawLidarCal * msg = (multisense_msgs__msg__RawLidarCal *)allocator.allocate(sizeof(multisense_msgs__msg__RawLidarCal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__RawLidarCal));
  bool success = multisense_msgs__msg__RawLidarCal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__RawLidarCal__destroy(multisense_msgs__msg__RawLidarCal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__RawLidarCal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__RawLidarCal__Sequence__init(multisense_msgs__msg__RawLidarCal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawLidarCal * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__RawLidarCal *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__RawLidarCal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__RawLidarCal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__RawLidarCal__fini(&data[i - 1]);
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
multisense_msgs__msg__RawLidarCal__Sequence__fini(multisense_msgs__msg__RawLidarCal__Sequence * array)
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
      multisense_msgs__msg__RawLidarCal__fini(&array->data[i]);
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

multisense_msgs__msg__RawLidarCal__Sequence *
multisense_msgs__msg__RawLidarCal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawLidarCal__Sequence * array = (multisense_msgs__msg__RawLidarCal__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__RawLidarCal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__RawLidarCal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__RawLidarCal__Sequence__destroy(multisense_msgs__msg__RawLidarCal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__RawLidarCal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__RawLidarCal__Sequence__are_equal(const multisense_msgs__msg__RawLidarCal__Sequence * lhs, const multisense_msgs__msg__RawLidarCal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__RawLidarCal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__RawLidarCal__Sequence__copy(
  const multisense_msgs__msg__RawLidarCal__Sequence * input,
  multisense_msgs__msg__RawLidarCal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__RawLidarCal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__RawLidarCal * data =
      (multisense_msgs__msg__RawLidarCal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__RawLidarCal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__RawLidarCal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__RawLidarCal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
