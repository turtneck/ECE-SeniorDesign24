// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/RawCamConfig.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/raw_cam_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
multisense_msgs__msg__RawCamConfig__init(multisense_msgs__msg__RawCamConfig * msg)
{
  if (!msg) {
    return false;
  }
  // width
  // height
  // frames_per_second
  // gain
  // exposure_time
  // fx
  // fy
  // cx
  // cy
  // tx
  // ty
  // tz
  // roll
  // pitch
  // yaw
  return true;
}

void
multisense_msgs__msg__RawCamConfig__fini(multisense_msgs__msg__RawCamConfig * msg)
{
  if (!msg) {
    return;
  }
  // width
  // height
  // frames_per_second
  // gain
  // exposure_time
  // fx
  // fy
  // cx
  // cy
  // tx
  // ty
  // tz
  // roll
  // pitch
  // yaw
}

bool
multisense_msgs__msg__RawCamConfig__are_equal(const multisense_msgs__msg__RawCamConfig * lhs, const multisense_msgs__msg__RawCamConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // frames_per_second
  if (lhs->frames_per_second != rhs->frames_per_second) {
    return false;
  }
  // gain
  if (lhs->gain != rhs->gain) {
    return false;
  }
  // exposure_time
  if (lhs->exposure_time != rhs->exposure_time) {
    return false;
  }
  // fx
  if (lhs->fx != rhs->fx) {
    return false;
  }
  // fy
  if (lhs->fy != rhs->fy) {
    return false;
  }
  // cx
  if (lhs->cx != rhs->cx) {
    return false;
  }
  // cy
  if (lhs->cy != rhs->cy) {
    return false;
  }
  // tx
  if (lhs->tx != rhs->tx) {
    return false;
  }
  // ty
  if (lhs->ty != rhs->ty) {
    return false;
  }
  // tz
  if (lhs->tz != rhs->tz) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
multisense_msgs__msg__RawCamConfig__copy(
  const multisense_msgs__msg__RawCamConfig * input,
  multisense_msgs__msg__RawCamConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // frames_per_second
  output->frames_per_second = input->frames_per_second;
  // gain
  output->gain = input->gain;
  // exposure_time
  output->exposure_time = input->exposure_time;
  // fx
  output->fx = input->fx;
  // fy
  output->fy = input->fy;
  // cx
  output->cx = input->cx;
  // cy
  output->cy = input->cy;
  // tx
  output->tx = input->tx;
  // ty
  output->ty = input->ty;
  // tz
  output->tz = input->tz;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  return true;
}

multisense_msgs__msg__RawCamConfig *
multisense_msgs__msg__RawCamConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamConfig * msg = (multisense_msgs__msg__RawCamConfig *)allocator.allocate(sizeof(multisense_msgs__msg__RawCamConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__RawCamConfig));
  bool success = multisense_msgs__msg__RawCamConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__RawCamConfig__destroy(multisense_msgs__msg__RawCamConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__RawCamConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__RawCamConfig__Sequence__init(multisense_msgs__msg__RawCamConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamConfig * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__RawCamConfig *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__RawCamConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__RawCamConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__RawCamConfig__fini(&data[i - 1]);
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
multisense_msgs__msg__RawCamConfig__Sequence__fini(multisense_msgs__msg__RawCamConfig__Sequence * array)
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
      multisense_msgs__msg__RawCamConfig__fini(&array->data[i]);
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

multisense_msgs__msg__RawCamConfig__Sequence *
multisense_msgs__msg__RawCamConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamConfig__Sequence * array = (multisense_msgs__msg__RawCamConfig__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__RawCamConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__RawCamConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__RawCamConfig__Sequence__destroy(multisense_msgs__msg__RawCamConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__RawCamConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__RawCamConfig__Sequence__are_equal(const multisense_msgs__msg__RawCamConfig__Sequence * lhs, const multisense_msgs__msg__RawCamConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__RawCamConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__RawCamConfig__Sequence__copy(
  const multisense_msgs__msg__RawCamConfig__Sequence * input,
  multisense_msgs__msg__RawCamConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__RawCamConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__RawCamConfig * data =
      (multisense_msgs__msg__RawCamConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__RawCamConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__RawCamConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__RawCamConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
