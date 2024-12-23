// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `device_name`
// Member `build_date`
// Member `serial_number`
// Member `pcb_names`
// Member `imager_name`
// Member `lens_name`
// Member `laser_name`
// Member `motor_name`
// Member `api_build_date`
// Member `firmware_build_date`
#include "rosidl_runtime_c/string_functions.h"
// Member `pcb_serial_numbers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
multisense_msgs__msg__DeviceInfo__init(multisense_msgs__msg__DeviceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__init(&msg->device_name)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // build_date
  if (!rosidl_runtime_c__String__init(&msg->build_date)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // device_revision
  // number_of_pcbs
  // pcb_serial_numbers
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->pcb_serial_numbers, 0)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // pcb_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->pcb_names, 0)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // imager_name
  if (!rosidl_runtime_c__String__init(&msg->imager_name)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // imager_type
  // imager_width
  // imager_height
  // lens_name
  if (!rosidl_runtime_c__String__init(&msg->lens_name)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // lens_type
  // nominal_baseline
  // nominal_focal_length
  // nominal_relative_aperture
  // lighting_type
  // number_of_lights
  // laser_name
  if (!rosidl_runtime_c__String__init(&msg->laser_name)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // laser_type
  // motor_name
  if (!rosidl_runtime_c__String__init(&msg->motor_name)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // motor_type
  // motor_gear_reduction
  // api_build_date
  if (!rosidl_runtime_c__String__init(&msg->api_build_date)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // api_version
  // firmware_build_date
  if (!rosidl_runtime_c__String__init(&msg->firmware_build_date)) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // firmware_version
  // bitstream_version
  // bitstream_magic
  // fpga_dna
  return true;
}

void
multisense_msgs__msg__DeviceInfo__fini(multisense_msgs__msg__DeviceInfo * msg)
{
  if (!msg) {
    return;
  }
  // device_name
  rosidl_runtime_c__String__fini(&msg->device_name);
  // build_date
  rosidl_runtime_c__String__fini(&msg->build_date);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // device_revision
  // number_of_pcbs
  // pcb_serial_numbers
  rosidl_runtime_c__uint32__Sequence__fini(&msg->pcb_serial_numbers);
  // pcb_names
  rosidl_runtime_c__String__Sequence__fini(&msg->pcb_names);
  // imager_name
  rosidl_runtime_c__String__fini(&msg->imager_name);
  // imager_type
  // imager_width
  // imager_height
  // lens_name
  rosidl_runtime_c__String__fini(&msg->lens_name);
  // lens_type
  // nominal_baseline
  // nominal_focal_length
  // nominal_relative_aperture
  // lighting_type
  // number_of_lights
  // laser_name
  rosidl_runtime_c__String__fini(&msg->laser_name);
  // laser_type
  // motor_name
  rosidl_runtime_c__String__fini(&msg->motor_name);
  // motor_type
  // motor_gear_reduction
  // api_build_date
  rosidl_runtime_c__String__fini(&msg->api_build_date);
  // api_version
  // firmware_build_date
  rosidl_runtime_c__String__fini(&msg->firmware_build_date);
  // firmware_version
  // bitstream_version
  // bitstream_magic
  // fpga_dna
}

bool
multisense_msgs__msg__DeviceInfo__are_equal(const multisense_msgs__msg__DeviceInfo * lhs, const multisense_msgs__msg__DeviceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_name), &(rhs->device_name)))
  {
    return false;
  }
  // build_date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->build_date), &(rhs->build_date)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  // device_revision
  if (lhs->device_revision != rhs->device_revision) {
    return false;
  }
  // number_of_pcbs
  if (lhs->number_of_pcbs != rhs->number_of_pcbs) {
    return false;
  }
  // pcb_serial_numbers
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->pcb_serial_numbers), &(rhs->pcb_serial_numbers)))
  {
    return false;
  }
  // pcb_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->pcb_names), &(rhs->pcb_names)))
  {
    return false;
  }
  // imager_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->imager_name), &(rhs->imager_name)))
  {
    return false;
  }
  // imager_type
  if (lhs->imager_type != rhs->imager_type) {
    return false;
  }
  // imager_width
  if (lhs->imager_width != rhs->imager_width) {
    return false;
  }
  // imager_height
  if (lhs->imager_height != rhs->imager_height) {
    return false;
  }
  // lens_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lens_name), &(rhs->lens_name)))
  {
    return false;
  }
  // lens_type
  if (lhs->lens_type != rhs->lens_type) {
    return false;
  }
  // nominal_baseline
  if (lhs->nominal_baseline != rhs->nominal_baseline) {
    return false;
  }
  // nominal_focal_length
  if (lhs->nominal_focal_length != rhs->nominal_focal_length) {
    return false;
  }
  // nominal_relative_aperture
  if (lhs->nominal_relative_aperture != rhs->nominal_relative_aperture) {
    return false;
  }
  // lighting_type
  if (lhs->lighting_type != rhs->lighting_type) {
    return false;
  }
  // number_of_lights
  if (lhs->number_of_lights != rhs->number_of_lights) {
    return false;
  }
  // laser_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->laser_name), &(rhs->laser_name)))
  {
    return false;
  }
  // laser_type
  if (lhs->laser_type != rhs->laser_type) {
    return false;
  }
  // motor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motor_name), &(rhs->motor_name)))
  {
    return false;
  }
  // motor_type
  if (lhs->motor_type != rhs->motor_type) {
    return false;
  }
  // motor_gear_reduction
  if (lhs->motor_gear_reduction != rhs->motor_gear_reduction) {
    return false;
  }
  // api_build_date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->api_build_date), &(rhs->api_build_date)))
  {
    return false;
  }
  // api_version
  if (lhs->api_version != rhs->api_version) {
    return false;
  }
  // firmware_build_date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_build_date), &(rhs->firmware_build_date)))
  {
    return false;
  }
  // firmware_version
  if (lhs->firmware_version != rhs->firmware_version) {
    return false;
  }
  // bitstream_version
  if (lhs->bitstream_version != rhs->bitstream_version) {
    return false;
  }
  // bitstream_magic
  if (lhs->bitstream_magic != rhs->bitstream_magic) {
    return false;
  }
  // fpga_dna
  if (lhs->fpga_dna != rhs->fpga_dna) {
    return false;
  }
  return true;
}

bool
multisense_msgs__msg__DeviceInfo__copy(
  const multisense_msgs__msg__DeviceInfo * input,
  multisense_msgs__msg__DeviceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__copy(
      &(input->device_name), &(output->device_name)))
  {
    return false;
  }
  // build_date
  if (!rosidl_runtime_c__String__copy(
      &(input->build_date), &(output->build_date)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  // device_revision
  output->device_revision = input->device_revision;
  // number_of_pcbs
  output->number_of_pcbs = input->number_of_pcbs;
  // pcb_serial_numbers
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->pcb_serial_numbers), &(output->pcb_serial_numbers)))
  {
    return false;
  }
  // pcb_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->pcb_names), &(output->pcb_names)))
  {
    return false;
  }
  // imager_name
  if (!rosidl_runtime_c__String__copy(
      &(input->imager_name), &(output->imager_name)))
  {
    return false;
  }
  // imager_type
  output->imager_type = input->imager_type;
  // imager_width
  output->imager_width = input->imager_width;
  // imager_height
  output->imager_height = input->imager_height;
  // lens_name
  if (!rosidl_runtime_c__String__copy(
      &(input->lens_name), &(output->lens_name)))
  {
    return false;
  }
  // lens_type
  output->lens_type = input->lens_type;
  // nominal_baseline
  output->nominal_baseline = input->nominal_baseline;
  // nominal_focal_length
  output->nominal_focal_length = input->nominal_focal_length;
  // nominal_relative_aperture
  output->nominal_relative_aperture = input->nominal_relative_aperture;
  // lighting_type
  output->lighting_type = input->lighting_type;
  // number_of_lights
  output->number_of_lights = input->number_of_lights;
  // laser_name
  if (!rosidl_runtime_c__String__copy(
      &(input->laser_name), &(output->laser_name)))
  {
    return false;
  }
  // laser_type
  output->laser_type = input->laser_type;
  // motor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->motor_name), &(output->motor_name)))
  {
    return false;
  }
  // motor_type
  output->motor_type = input->motor_type;
  // motor_gear_reduction
  output->motor_gear_reduction = input->motor_gear_reduction;
  // api_build_date
  if (!rosidl_runtime_c__String__copy(
      &(input->api_build_date), &(output->api_build_date)))
  {
    return false;
  }
  // api_version
  output->api_version = input->api_version;
  // firmware_build_date
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_build_date), &(output->firmware_build_date)))
  {
    return false;
  }
  // firmware_version
  output->firmware_version = input->firmware_version;
  // bitstream_version
  output->bitstream_version = input->bitstream_version;
  // bitstream_magic
  output->bitstream_magic = input->bitstream_magic;
  // fpga_dna
  output->fpga_dna = input->fpga_dna;
  return true;
}

multisense_msgs__msg__DeviceInfo *
multisense_msgs__msg__DeviceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__DeviceInfo * msg = (multisense_msgs__msg__DeviceInfo *)allocator.allocate(sizeof(multisense_msgs__msg__DeviceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__DeviceInfo));
  bool success = multisense_msgs__msg__DeviceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__DeviceInfo__destroy(multisense_msgs__msg__DeviceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__DeviceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__DeviceInfo__Sequence__init(multisense_msgs__msg__DeviceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__DeviceInfo * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__DeviceInfo *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__DeviceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__DeviceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__DeviceInfo__fini(&data[i - 1]);
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
multisense_msgs__msg__DeviceInfo__Sequence__fini(multisense_msgs__msg__DeviceInfo__Sequence * array)
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
      multisense_msgs__msg__DeviceInfo__fini(&array->data[i]);
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

multisense_msgs__msg__DeviceInfo__Sequence *
multisense_msgs__msg__DeviceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__DeviceInfo__Sequence * array = (multisense_msgs__msg__DeviceInfo__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__DeviceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__DeviceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__DeviceInfo__Sequence__destroy(multisense_msgs__msg__DeviceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__DeviceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__DeviceInfo__Sequence__are_equal(const multisense_msgs__msg__DeviceInfo__Sequence * lhs, const multisense_msgs__msg__DeviceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__DeviceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__DeviceInfo__Sequence__copy(
  const multisense_msgs__msg__DeviceInfo__Sequence * input,
  multisense_msgs__msg__DeviceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__DeviceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__DeviceInfo * data =
      (multisense_msgs__msg__DeviceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__DeviceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__DeviceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__DeviceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
