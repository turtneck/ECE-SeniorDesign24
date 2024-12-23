// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/PtpStatus.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/ptp_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
multisense_msgs__msg__PtpStatus__init(multisense_msgs__msg__PtpStatus * msg)
{
  if (!msg) {
    return false;
  }
  // gm_present
  // gm_id
  // gm_offset
  // path_delay
  // steps_removed
  return true;
}

void
multisense_msgs__msg__PtpStatus__fini(multisense_msgs__msg__PtpStatus * msg)
{
  if (!msg) {
    return;
  }
  // gm_present
  // gm_id
  // gm_offset
  // path_delay
  // steps_removed
}

bool
multisense_msgs__msg__PtpStatus__are_equal(const multisense_msgs__msg__PtpStatus * lhs, const multisense_msgs__msg__PtpStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gm_present
  if (lhs->gm_present != rhs->gm_present) {
    return false;
  }
  // gm_id
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->gm_id[i] != rhs->gm_id[i]) {
      return false;
    }
  }
  // gm_offset
  if (lhs->gm_offset != rhs->gm_offset) {
    return false;
  }
  // path_delay
  if (lhs->path_delay != rhs->path_delay) {
    return false;
  }
  // steps_removed
  if (lhs->steps_removed != rhs->steps_removed) {
    return false;
  }
  return true;
}

bool
multisense_msgs__msg__PtpStatus__copy(
  const multisense_msgs__msg__PtpStatus * input,
  multisense_msgs__msg__PtpStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // gm_present
  output->gm_present = input->gm_present;
  // gm_id
  for (size_t i = 0; i < 8; ++i) {
    output->gm_id[i] = input->gm_id[i];
  }
  // gm_offset
  output->gm_offset = input->gm_offset;
  // path_delay
  output->path_delay = input->path_delay;
  // steps_removed
  output->steps_removed = input->steps_removed;
  return true;
}

multisense_msgs__msg__PtpStatus *
multisense_msgs__msg__PtpStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__PtpStatus * msg = (multisense_msgs__msg__PtpStatus *)allocator.allocate(sizeof(multisense_msgs__msg__PtpStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__PtpStatus));
  bool success = multisense_msgs__msg__PtpStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__PtpStatus__destroy(multisense_msgs__msg__PtpStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__PtpStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__PtpStatus__Sequence__init(multisense_msgs__msg__PtpStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__PtpStatus * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__PtpStatus *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__PtpStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__PtpStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__PtpStatus__fini(&data[i - 1]);
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
multisense_msgs__msg__PtpStatus__Sequence__fini(multisense_msgs__msg__PtpStatus__Sequence * array)
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
      multisense_msgs__msg__PtpStatus__fini(&array->data[i]);
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

multisense_msgs__msg__PtpStatus__Sequence *
multisense_msgs__msg__PtpStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__PtpStatus__Sequence * array = (multisense_msgs__msg__PtpStatus__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__PtpStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__PtpStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__PtpStatus__Sequence__destroy(multisense_msgs__msg__PtpStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__PtpStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__PtpStatus__Sequence__are_equal(const multisense_msgs__msg__PtpStatus__Sequence * lhs, const multisense_msgs__msg__PtpStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__PtpStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__PtpStatus__Sequence__copy(
  const multisense_msgs__msg__PtpStatus__Sequence * input,
  multisense_msgs__msg__PtpStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__PtpStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__PtpStatus * data =
      (multisense_msgs__msg__PtpStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__PtpStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__PtpStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__PtpStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
