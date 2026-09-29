// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from underground_world:msg/LocalScan.idl
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
#include "underground_world/msg/detail/local_scan__struct.h"
#include "underground_world/msg/detail/local_scan__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "underground_world/msg/detail/cell_observation__functions.h"
// end nested array functions include
bool underground_world__msg__cell_observation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * underground_world__msg__cell_observation__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool underground_world__msg__local_scan__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("underground_world.msg._local_scan.LocalScan", full_classname_dest, 43) == 0);
  }
  underground_world__msg__LocalScan * ros_message = _ros_message;
  {  // scenario_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "scenario_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->scenario_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // robot_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // robot_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cells
    PyObject * field = PyObject_GetAttrString(_pymsg, "cells");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cells'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!underground_world__msg__CellObservation__Sequence__init(&(ros_message->cells), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create underground_world__msg__CellObservation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    underground_world__msg__CellObservation * dest = ros_message->cells.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!underground_world__msg__cell_observation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * underground_world__msg__local_scan__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LocalScan */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("underground_world.msg._local_scan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LocalScan");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  underground_world__msg__LocalScan * ros_message = (underground_world__msg__LocalScan *)raw_ros_message;
  {  // scenario_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->scenario_name.data,
      strlen(ros_message->scenario_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scenario_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->robot_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->robot_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cells
    PyObject * field = NULL;
    size_t size = ros_message->cells.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    underground_world__msg__CellObservation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cells.data[i]);
      PyObject * pyitem = underground_world__msg__cell_observation__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cells", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
