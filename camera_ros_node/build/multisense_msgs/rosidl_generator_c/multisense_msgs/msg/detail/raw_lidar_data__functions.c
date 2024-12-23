// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/RawLidarData.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/raw_lidar_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_start`
// Member `time_end`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `distance`
// Member `intensity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
multisense_msgs__msg__RawLidarData__init(multisense_msgs__msg__RawLidarData * msg)
{
  if (!msg) {
    return false;
  }
  // scan_count
  // time_start
  if (!builtin_interfaces__msg__Time__init(&msg->time_start)) {
    multisense_msgs__msg__RawLidarData__fini(msg);
    return false;
  }
  // time_end
  if (!builtin_interfaces__msg__Time__init(&msg->time_end)) {
    multisense_msgs__msg__RawLidarData__fini(msg);
    return false;
  }
  // angle_start
  // angle_end
  // distance
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->distance, 0)) {
    multisense_msgs__msg__RawLidarData__fini(msg);
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->intensity, 0)) {
    multisense_msgs__msg__RawLidarData__fini(msg);
    return false;
  }
  return true;
}

void
multisense_msgs__msg__RawLidarData__fini(multisense_msgs__msg__RawLidarData * msg)
{
  if (!msg) {
    return;
  }
  // scan_count
  // time_start
  builtin_interfaces__msg__Time__fini(&msg->time_start);
  // time_end
  builtin_interfaces__msg__Time__fini(&msg->time_end);
  // angle_start
  // angle_end
  // distance
  rosidl_runtime_c__uint32__Sequence__fini(&msg->distance);
  // intensity
  rosidl_runtime_c__uint32__Sequence__fini(&msg->intensity);
}

bool
multisense_msgs__msg__RawLidarData__are_equal(const multisense_msgs__msg__RawLidarData * lhs, const multisense_msgs__msg__RawLidarData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scan_count
  if (lhs->scan_count != rhs->scan_count) {
    return false;
  }
  // time_start
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time_start), &(rhs->time_start)))
  {
    return false;
  }
  // time_end
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time_end), &(rhs->time_end)))
  {
    return false;
  }
  // angle_start
  if (lhs->angle_start != rhs->angle_start) {
    return false;
  }
  // angle_end
  if (lhs->angle_end != rhs->angle_end) {
    return false;
  }
  // distance
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->distance), &(rhs->distance)))
  {
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->intensity), &(rhs->intensity)))
  {
    return false;
  }
  return true;
}

bool
multisense_msgs__msg__RawLidarData__copy(
  const multisense_msgs__msg__RawLidarData * input,
  multisense_msgs__msg__RawLidarData * output)
{
  if (!input || !output) {
    return false;
  }
  // scan_count
  output->scan_count = input->scan_count;
  // time_start
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time_start), &(output->time_start)))
  {
    return false;
  }
  // time_end
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time_end), &(output->time_end)))
  {
    return false;
  }
  // angle_start
  output->angle_start = input->angle_start;
  // angle_end
  output->angle_end = input->angle_end;
  // distance
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->distance), &(output->distance)))
  {
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->intensity), &(output->intensity)))
  {
    return false;
  }
  return true;
}

multisense_msgs__msg__RawLidarData *
multisense_msgs__msg__RawLidarData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawLidarData * msg = (multisense_msgs__msg__RawLidarData *)allocator.allocate(sizeof(multisense_msgs__msg__RawLidarData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__RawLidarData));
  bool success = multisense_msgs__msg__RawLidarData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__RawLidarData__destroy(multisense_msgs__msg__RawLidarData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__RawLidarData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__RawLidarData__Sequence__init(multisense_msgs__msg__RawLidarData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawLidarData * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__RawLidarData *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__RawLidarData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__RawLidarData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__RawLidarData__fini(&data[i - 1]);
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
multisense_msgs__msg__RawLidarData__Sequence__fini(multisense_msgs__msg__RawLidarData__Sequence * array)
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
      multisense_msgs__msg__RawLidarData__fini(&array->data[i]);
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

multisense_msgs__msg__RawLidarData__Sequence *
multisense_msgs__msg__RawLidarData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__RawLidarData__Sequence * array = (multisense_msgs__msg__RawLidarData__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__RawLidarData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__RawLidarData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__RawLidarData__Sequence__destroy(multisense_msgs__msg__RawLidarData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__RawLidarData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__RawLidarData__Sequence__are_equal(const multisense_msgs__msg__RawLidarData__Sequence * lhs, const multisense_msgs__msg__RawLidarData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__RawLidarData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__RawLidarData__Sequence__copy(
  const multisense_msgs__msg__RawLidarData__Sequence * input,
  multisense_msgs__msg__RawLidarData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__RawLidarData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__RawLidarData * data =
      (multisense_msgs__msg__RawLidarData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__RawLidarData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__RawLidarData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__RawLidarData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
