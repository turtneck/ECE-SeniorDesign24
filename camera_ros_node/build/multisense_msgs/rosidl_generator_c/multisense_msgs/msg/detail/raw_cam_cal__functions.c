// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/RawCamCal.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/raw_cam_cal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
multisense_msgs__msg__RawCamCal__init(multisense_msgs__msg__RawCamCal * msg)
{
  if (!msg) {
    return false;
  }
  // left_m
  // left_d
  // left_r
  // left_p
  // right_m
  // right_d
  // right_r
  // right_p
  return true;
}

void
multisense_msgs__msg__RawCamCal__fini(multisense_msgs__msg__RawCamCal * msg)
{
  if (!msg) {
    return;
  }
  // left_m
  // left_d
  // left_r
  // left_p
  // right_m
  // right_d
  // right_r
  // right_p
}

bool
multisense_msgs__msg__RawCamCal__are_equal(const multisense_msgs__msg__RawCamCal * lhs, const multisense_msgs__msg__RawCamCal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_m
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->left_m[i] != rhs->left_m[i]) {
      return false;
    }
  }
  // left_d
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->left_d[i] != rhs->left_d[i]) {
      return false;
    }
  }
  // left_r
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->left_r[i] != rhs->left_r[i]) {
      return false;
    }
  }
  // left_p
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->left_p[i] != rhs->left_p[i]) {
      return false;
    }
  }
  // right_m
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->right_m[i] != rhs->right_m[i]) {
      return false;
    }
  }
  // right_d
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->right_d[i] != rhs->right_d[i]) {
      return false;
    }
  }
  // right_r
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->right_r[i] != rhs->right_r[i]) {
      return false;
    }
  }
  // right_p
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->right_p[i] != rhs->right_p[i]) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__RawCamCal__copy(
  const multisense_msgs__msg__RawCamCal * input,
  multisense_msgs__msg__RawCamCal * output)
{
  if (!input || !output) {
    return false;
  }
  // left_m
  for (size_t i = 0; i < 9; ++i) {
    output->left_m[i] = input->left_m[i];
  }
  // left_d
  for (size_t i = 0; i < 8; ++i) {
    output->left_d[i] = input->left_d[i];
  }
  // left_r
  for (size_t i = 0; i < 9; ++i) {
    output->left_r[i] = input->left_r[i];
  }
  // left_p
  for (size_t i = 0; i < 12; ++i) {
    output->left_p[i] = input->left_p[i];
  }
  // right_m
  for (size_t i = 0; i < 9; ++i) {
    output->right_m[i] = input->right_m[i];
  }
  // right_d
  for (size_t i = 0; i < 8; ++i) {
    output->right_d[i] = input->right_d[i];
  }
  // right_r
  for (size_t i = 0; i < 9; ++i) {
    output->right_r[i] = input->right_r[i];
  }
  // right_p
  for (size_t i = 0; i < 12; ++i) {
    output->right_p[i] = input->right_p[i];
  }
  return true;
}

multisense_msgs__msg__RawCamCal *
multisense_msgs__msg__RawCamCal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamCal * msg = (multisense_msgs__msg__RawCamCal *)allocator.allocate(sizeof(multisense_msgs__msg__RawCamCal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__RawCamCal));
  bool success = multisense_msgs__msg__RawCamCal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__RawCamCal__destroy(multisense_msgs__msg__RawCamCal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__RawCamCal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__RawCamCal__Sequence__init(multisense_msgs__msg__RawCamCal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamCal * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__RawCamCal *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__RawCamCal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__RawCamCal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__RawCamCal__fini(&data[i - 1]);
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
multisense_msgs__msg__RawCamCal__Sequence__fini(multisense_msgs__msg__RawCamCal__Sequence * array)
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
      multisense_msgs__msg__RawCamCal__fini(&array->data[i]);
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

multisense_msgs__msg__RawCamCal__Sequence *
multisense_msgs__msg__RawCamCal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamCal__Sequence * array = (multisense_msgs__msg__RawCamCal__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__RawCamCal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__RawCamCal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__RawCamCal__Sequence__destroy(multisense_msgs__msg__RawCamCal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__RawCamCal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__RawCamCal__Sequence__are_equal(const multisense_msgs__msg__RawCamCal__Sequence * lhs, const multisense_msgs__msg__RawCamCal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__RawCamCal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__RawCamCal__Sequence__copy(
  const multisense_msgs__msg__RawCamCal__Sequence * input,
  multisense_msgs__msg__RawCamCal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__RawCamCal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__RawCamCal * data =
      (multisense_msgs__msg__RawCamCal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__RawCamCal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__RawCamCal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__RawCamCal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
