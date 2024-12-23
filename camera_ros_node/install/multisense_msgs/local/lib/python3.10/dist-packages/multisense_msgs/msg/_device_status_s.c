// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from multisense_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "multisense_msgs/msg/detail/device_status__struct.h"
#include "multisense_msgs/msg/detail/device_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool multisense_msgs__msg__device_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("multisense_msgs.msg._device_status.DeviceStatus", full_classname_dest, 47) == 0);
  }
  multisense_msgs__msg__DeviceStatus * ros_message = _ros_message;
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->time_stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // uptime
    PyObject * field = PyObject_GetAttrString(_pymsg, "uptime");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->uptime)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // system_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->system_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // laser_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->laser_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // laser_motor_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_motor_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->laser_motor_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cameras_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "cameras_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cameras_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // external_leds_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "external_leds_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->external_leds_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // processing_pipeline_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "processing_pipeline_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->processing_pipeline_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_supply_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_supply_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power_supply_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fpga_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpga_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fpga_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_imager_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_imager_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_imager_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_imager_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_imager_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_imager_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // input_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // input_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fpga_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpga_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fpga_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // logic_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "logic_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->logic_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imager_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "imager_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imager_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * multisense_msgs__msg__device_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DeviceStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("multisense_msgs.msg._device_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DeviceStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  multisense_msgs__msg__DeviceStatus * ros_message = (multisense_msgs__msg__DeviceStatus *)raw_ros_message;
  {  // time_stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->time_stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uptime
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->uptime);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "uptime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->system_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->laser_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_motor_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->laser_motor_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_motor_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cameras_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cameras_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cameras_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // external_leds_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->external_leds_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "external_leds_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // processing_pipeline_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->processing_pipeline_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "processing_pipeline_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_supply_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power_supply_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_supply_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpga_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fpga_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpga_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_imager_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_imager_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_imager_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_imager_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_imager_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_imager_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpga_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fpga_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpga_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // logic_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->logic_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "logic_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imager_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imager_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imager_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
