// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from multisense_msgs:msg/RawCamConfig.idl
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
#include "multisense_msgs/msg/detail/raw_cam_config__struct.h"
#include "multisense_msgs/msg/detail/raw_cam_config__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool multisense_msgs__msg__raw_cam_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("multisense_msgs.msg._raw_cam_config.RawCamConfig", full_classname_dest, 48) == 0);
  }
  multisense_msgs__msg__RawCamConfig * ros_message = _ros_message;
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frames_per_second
    PyObject * field = PyObject_GetAttrString(_pymsg, "frames_per_second");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->frames_per_second = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // exposure_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "exposure_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->exposure_time = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fx
    PyObject * field = PyObject_GetAttrString(_pymsg, "fx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fy
    PyObject * field = PyObject_GetAttrString(_pymsg, "fy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cx
    PyObject * field = PyObject_GetAttrString(_pymsg, "cx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cy
    PyObject * field = PyObject_GetAttrString(_pymsg, "cy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ty
    PyObject * field = PyObject_GetAttrString(_pymsg, "ty");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ty = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tz
    PyObject * field = PyObject_GetAttrString(_pymsg, "tz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * multisense_msgs__msg__raw_cam_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RawCamConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("multisense_msgs.msg._raw_cam_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RawCamConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  multisense_msgs__msg__RawCamConfig * ros_message = (multisense_msgs__msg__RawCamConfig *)raw_ros_message;
  {  // width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frames_per_second
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->frames_per_second);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frames_per_second", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exposure_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->exposure_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exposure_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ty
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
