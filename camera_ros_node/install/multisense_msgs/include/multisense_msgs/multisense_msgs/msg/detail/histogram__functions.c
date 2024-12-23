// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/histogram__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
multisense_msgs__msg__Histogram__init(multisense_msgs__msg__Histogram * msg)
{
  if (!msg) {
    return false;
  }
  // frame_count
  // time_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->time_stamp)) {
    multisense_msgs__msg__Histogram__fini(msg);
    return false;
  }
  // width
  // height
  // gain
  // fps
  // exposure_time
  // channels
  // bins
  // data
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->data, 0)) {
    multisense_msgs__msg__Histogram__fini(msg);
    return false;
  }
  return true;
}

void
multisense_msgs__msg__Histogram__fini(multisense_msgs__msg__Histogram * msg)
{
  if (!msg) {
    return;
  }
  // frame_count
  // time_stamp
  builtin_interfaces__msg__Time__fini(&msg->time_stamp);
  // width
  // height
  // gain
  // fps
  // exposure_time
  // channels
  // bins
  // data
  rosidl_runtime_c__uint32__Sequence__fini(&msg->data);
}

bool
multisense_msgs__msg__Histogram__are_equal(const multisense_msgs__msg__Histogram * lhs, const multisense_msgs__msg__Histogram * rhs)
{
  if (!lhs || !rhs) {
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
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // gain
  if (lhs->gain != rhs->gain) {
    return false;
  }
  // fps
  if (lhs->fps != rhs->fps) {
    return false;
  }
  // exposure_time
  if (lhs->exposure_time != rhs->exposure_time) {
    return false;
  }
  // channels
  if (lhs->channels != rhs->channels) {
    return false;
  }
  // bins
  if (lhs->bins != rhs->bins) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
multisense_msgs__msg__Histogram__copy(
  const multisense_msgs__msg__Histogram * input,
  multisense_msgs__msg__Histogram * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_count
  output->frame_count = input->frame_count;
  // time_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // gain
  output->gain = input->gain;
  // fps
  output->fps = input->fps;
  // exposure_time
  output->exposure_time = input->exposure_time;
  // channels
  output->channels = input->channels;
  // bins
  output->bins = input->bins;
  // data
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

multisense_msgs__msg__Histogram *
multisense_msgs__msg__Histogram__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__Histogram * msg = (multisense_msgs__msg__Histogram *)allocator.allocate(sizeof(multisense_msgs__msg__Histogram), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__Histogram));
  bool success = multisense_msgs__msg__Histogram__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__Histogram__destroy(multisense_msgs__msg__Histogram * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__Histogram__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__Histogram__Sequence__init(multisense_msgs__msg__Histogram__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__Histogram * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__Histogram *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__Histogram), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__Histogram__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__Histogram__fini(&data[i - 1]);
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
multisense_msgs__msg__Histogram__Sequence__fini(multisense_msgs__msg__Histogram__Sequence * array)
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
      multisense_msgs__msg__Histogram__fini(&array->data[i]);
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

multisense_msgs__msg__Histogram__Sequence *
multisense_msgs__msg__Histogram__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__Histogram__Sequence * array = (multisense_msgs__msg__Histogram__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__Histogram__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__Histogram__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__Histogram__Sequence__destroy(multisense_msgs__msg__Histogram__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__Histogram__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__Histogram__Sequence__are_equal(const multisense_msgs__msg__Histogram__Sequence * lhs, const multisense_msgs__msg__Histogram__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__Histogram__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__Histogram__Sequence__copy(
  const multisense_msgs__msg__Histogram__Sequence * input,
  multisense_msgs__msg__Histogram__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__Histogram);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__Histogram * data =
      (multisense_msgs__msg__Histogram *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__Histogram__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__Histogram__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__Histogram__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
