// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/RawCamData.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/raw_cam_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `gray_scale_image`
// Member `disparity_image`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
multisense_msgs__msg__RawCamData__init(multisense_msgs__msg__RawCamData * msg)
{
  if (!msg) {
    return false;
  }
  // frames_per_second
  // gain
  // exposure_time
  // frame_count
  // time_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->time_stamp)) {
    multisense_msgs__msg__RawCamData__fini(msg);
    return false;
  }
  // angle
  // width
  // height
  // gray_scale_image
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->gray_scale_image, 0)) {
    multisense_msgs__msg__RawCamData__fini(msg);
    return false;
  }
  // disparity_image
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->disparity_image, 0)) {
    multisense_msgs__msg__RawCamData__fini(msg);
    return false;
  }
  return true;
}

void
multisense_msgs__msg__RawCamData__fini(multisense_msgs__msg__RawCamData * msg)
{
  if (!msg) {
    return;
  }
  // frames_per_second
  // gain
  // exposure_time
  // frame_count
  // time_stamp
  builtin_interfaces__msg__Time__fini(&msg->time_stamp);
  // angle
  // width
  // height
  // gray_scale_image
  rosidl_runtime_c__uint8__Sequence__fini(&msg->gray_scale_image);
  // disparity_image
  rosidl_runtime_c__uint16__Sequence__fini(&msg->disparity_image);
}

bool
multisense_msgs__msg__RawCamData__are_equal(const multisense_msgs__msg__RawCamData * lhs, const multisense_msgs__msg__RawCamData * rhs)
{
  if (!lhs || !rhs) {
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
  // frame_count
  if (lhs->frame_count != rhs->frame_count) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
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
  // gray_scale_image
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->gray_scale_image), &(rhs->gray_scale_image)))
  {
    return false;
  }
  // disparity_image
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->disparity_image), &(rhs->disparity_image)))
  {
    return false;
  }
  return true;
}

bool
multisense_msgs__msg__RawCamData__copy(
  const multisense_msgs__msg__RawCamData * input,
  multisense_msgs__msg__RawCamData * output)
{
  if (!input || !output) {
    return false;
  }
  // frames_per_second
  output->frames_per_second = input->frames_per_second;
  // gain
  output->gain = input->gain;
  // exposure_time
  output->exposure_time = input->exposure_time;
  // frame_count
  output->frame_count = input->frame_count;
  // time_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // angle
  output->angle = input->angle;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // gray_scale_image
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->gray_scale_image), &(output->gray_scale_image)))
  {
    return false;
  }
  // disparity_image
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->disparity_image), &(output->disparity_image)))
  {
    return false;
  }
  return true;
}

multisense_msgs__msg__RawCamData *
multisense_msgs__msg__RawCamData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamData * msg = (multisense_msgs__msg__RawCamData *)allocator.allocate(sizeof(multisense_msgs__msg__RawCamData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__RawCamData));
  bool success = multisense_msgs__msg__RawCamData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__RawCamData__destroy(multisense_msgs__msg__RawCamData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__RawCamData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__RawCamData__Sequence__init(multisense_msgs__msg__RawCamData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamData * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__RawCamData *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__RawCamData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__RawCamData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__RawCamData__fini(&data[i - 1]);
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
multisense_msgs__msg__RawCamData__Sequence__fini(multisense_msgs__msg__RawCamData__Sequence * array)
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
      multisense_msgs__msg__RawCamData__fini(&array->data[i]);
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

multisense_msgs__msg__RawCamData__Sequence *
multisense_msgs__msg__RawCamData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawCamData__Sequence * array = (multisense_msgs__msg__RawCamData__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__RawCamData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__RawCamData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__RawCamData__Sequence__destroy(multisense_msgs__msg__RawCamData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__RawCamData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__RawCamData__Sequence__are_equal(const multisense_msgs__msg__RawCamData__Sequence * lhs, const multisense_msgs__msg__RawCamData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__RawCamData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__RawCamData__Sequence__copy(
  const multisense_msgs__msg__RawCamData__Sequence * input,
  multisense_msgs__msg__RawCamData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__RawCamData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__RawCamData * data =
      (multisense_msgs__msg__RawCamData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__RawCamData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__RawCamData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__RawCamData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
