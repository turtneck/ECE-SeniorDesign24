// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from multisense_msgs:msg/PtpStatus.idl
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
#include "multisense_msgs/msg/detail/ptp_status__struct.h"
#include "multisense_msgs/msg/detail/ptp_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool multisense_msgs__msg__ptp_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("multisense_msgs.msg._ptp_status.PtpStatus", full_classname_dest, 41) == 0);
  }
  multisense_msgs__msg__PtpStatus * ros_message = _ros_message;
  {  // gm_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "gm_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gm_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gm_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "gm_id");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 8;
      uint8_t * dest = ros_message->gm_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gm_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "gm_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gm_offset = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // path_delay
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_delay");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->path_delay = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // steps_removed
    PyObject * field = PyObject_GetAttrString(_pymsg, "steps_removed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steps_removed = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * multisense_msgs__msg__ptp_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PtpStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("multisense_msgs.msg._ptp_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PtpStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  multisense_msgs__msg__PtpStatus * ros_message = (multisense_msgs__msg__PtpStatus *)raw_ros_message;
  {  // gm_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gm_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gm_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gm_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "gm_id");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->gm_id[0]);
    memcpy(dst, src, 8 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // gm_offset
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->gm_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gm_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_delay
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->path_delay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_delay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steps_removed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->steps_removed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steps_removed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
