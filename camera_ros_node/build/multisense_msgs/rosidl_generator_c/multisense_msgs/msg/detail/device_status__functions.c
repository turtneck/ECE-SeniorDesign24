// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multisense_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/device_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
// Member `uptime`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
multisense_msgs__msg__DeviceStatus__init(multisense_msgs__msg__DeviceStatus * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->time_stamp)) {
    multisense_msgs__msg__DeviceStatus__fini(msg);
    return false;
  }
  // uptime
  if (!builtin_interfaces__msg__Time__init(&msg->uptime)) {
    multisense_msgs__msg__DeviceStatus__fini(msg);
    return false;
  }
  // system_ok
  // laser_ok
  // laser_motor_ok
  // cameras_ok
  // imu_ok
  // external_leds_ok
  // processing_pipeline_ok
  // power_supply_temp
  // fpga_temp
  // left_imager_temp
  // right_imager_temp
  // input_voltage
  // input_current
  // fpga_power
  // logic_power
  // imager_power
  return true;
}

void
multisense_msgs__msg__DeviceStatus__fini(multisense_msgs__msg__DeviceStatus * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp
  builtin_interfaces__msg__Time__fini(&msg->time_stamp);
  // uptime
  builtin_interfaces__msg__Time__fini(&msg->uptime);
  // system_ok
  // laser_ok
  // laser_motor_ok
  // cameras_ok
  // imu_ok
  // external_leds_ok
  // processing_pipeline_ok
  // power_supply_temp
  // fpga_temp
  // left_imager_temp
  // right_imager_temp
  // input_voltage
  // input_current
  // fpga_power
  // logic_power
  // imager_power
}

bool
multisense_msgs__msg__DeviceStatus__are_equal(const multisense_msgs__msg__DeviceStatus * lhs, const multisense_msgs__msg__DeviceStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // uptime
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->uptime), &(rhs->uptime)))
  {
    return false;
  }
  // system_ok
  if (lhs->system_ok != rhs->system_ok) {
    return false;
  }
  // laser_ok
  if (lhs->laser_ok != rhs->laser_ok) {
    return false;
  }
  // laser_motor_ok
  if (lhs->laser_motor_ok != rhs->laser_motor_ok) {
    return false;
  }
  // cameras_ok
  if (lhs->cameras_ok != rhs->cameras_ok) {
    return false;
  }
  // imu_ok
  if (lhs->imu_ok != rhs->imu_ok) {
    return false;
  }
  // external_leds_ok
  if (lhs->external_leds_ok != rhs->external_leds_ok) {
    return false;
  }
  // processing_pipeline_ok
  if (lhs->processing_pipeline_ok != rhs->processing_pipeline_ok) {
    return false;
  }
  // power_supply_temp
  if (lhs->power_supply_temp != rhs->power_supply_temp) {
    return false;
  }
  // fpga_temp
  if (lhs->fpga_temp != rhs->fpga_temp) {
    return false;
  }
  // left_imager_temp
  if (lhs->left_imager_temp != rhs->left_imager_temp) {
    return false;
  }
  // right_imager_temp
  if (lhs->right_imager_temp != rhs->right_imager_temp) {
    return false;
  }
  // input_voltage
  if (lhs->input_voltage != rhs->input_voltage) {
    return false;
  }
  // input_current
  if (lhs->input_current != rhs->input_current) {
    return false;
  }
  // fpga_power
  if (lhs->fpga_power != rhs->fpga_power) {
    return false;
  }
  // logic_power
  if (lhs->logic_power != rhs->logic_power) {
    return false;
  }
  // imager_power
  if (lhs->imager_power != rhs->imager_power) {
    return false;
  }
  return true;
}

bool
multisense_msgs__msg__DeviceStatus__copy(
  const multisense_msgs__msg__DeviceStatus * input,
  multisense_msgs__msg__DeviceStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // uptime
  if (!builtin_interfaces__msg__Time__copy(
      &(input->uptime), &(output->uptime)))
  {
    return false;
  }
  // system_ok
  output->system_ok = input->system_ok;
  // laser_ok
  output->laser_ok = input->laser_ok;
  // laser_motor_ok
  output->laser_motor_ok = input->laser_motor_ok;
  // cameras_ok
  output->cameras_ok = input->cameras_ok;
  // imu_ok
  output->imu_ok = input->imu_ok;
  // external_leds_ok
  output->external_leds_ok = input->external_leds_ok;
  // processing_pipeline_ok
  output->processing_pipeline_ok = input->processing_pipeline_ok;
  // power_supply_temp
  output->power_supply_temp = input->power_supply_temp;
  // fpga_temp
  output->fpga_temp = input->fpga_temp;
  // left_imager_temp
  output->left_imager_temp = input->left_imager_temp;
  // right_imager_temp
  output->right_imager_temp = input->right_imager_temp;
  // input_voltage
  output->input_voltage = input->input_voltage;
  // input_current
  output->input_current = input->input_current;
  // fpga_power
  output->fpga_power = input->fpga_power;
  // logic_power
  output->logic_power = input->logic_power;
  // imager_power
  output->imager_power = input->imager_power;
  return true;
}

multisense_msgs__msg__DeviceStatus *
multisense_msgs__msg__DeviceStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__DeviceStatus * msg = (multisense_msgs__msg__DeviceStatus *)allocator.allocate(sizeof(multisense_msgs__msg__DeviceStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multisense_msgs__msg__DeviceStatus));
  bool success = multisense_msgs__msg__DeviceStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multisense_msgs__msg__DeviceStatus__destroy(multisense_msgs__msg__DeviceStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multisense_msgs__msg__DeviceStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multisense_msgs__msg__DeviceStatus__Sequence__init(multisense_msgs__msg__DeviceStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__DeviceStatus * data = NULL;

  if (size) {
    data = (multisense_msgs__msg__DeviceStatus *)allocator.zero_allocate(size, sizeof(multisense_msgs__msg__DeviceStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multisense_msgs__msg__DeviceStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multisense_msgs__msg__DeviceStatus__fini(&data[i - 1]);
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
multisense_msgs__msg__DeviceStatus__Sequence__fini(multisense_msgs__msg__DeviceStatus__Sequence * array)
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
      multisense_msgs__msg__DeviceStatus__fini(&array->data[i]);
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

multisense_msgs__msg__DeviceStatus__Sequence *
multisense_msgs__msg__DeviceStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multisense_msgs__msg__DeviceStatus__Sequence * array = (multisense_msgs__msg__DeviceStatus__Sequence *)allocator.allocate(sizeof(multisense_msgs__msg__DeviceStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multisense_msgs__msg__DeviceStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multisense_msgs__msg__DeviceStatus__Sequence__destroy(multisense_msgs__msg__DeviceStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multisense_msgs__msg__DeviceStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multisense_msgs__msg__DeviceStatus__Sequence__are_equal(const multisense_msgs__msg__DeviceStatus__Sequence * lhs, const multisense_msgs__msg__DeviceStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multisense_msgs__msg__DeviceStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multisense_msgs__msg__DeviceStatus__Sequence__copy(
  const multisense_msgs__msg__DeviceStatus__Sequence * input,
  multisense_msgs__msg__DeviceStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multisense_msgs__msg__DeviceStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multisense_msgs__msg__DeviceStatus * data =
      (multisense_msgs__msg__DeviceStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multisense_msgs__msg__DeviceStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multisense_msgs__msg__DeviceStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multisense_msgs__msg__DeviceStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
