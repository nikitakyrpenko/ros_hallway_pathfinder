// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from underground_world:msg/RobotMetrics.idl
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
#include "underground_world/msg/detail/robot_metrics__struct.h"
#include "underground_world/msg/detail/robot_metrics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool underground_world__msg__robot_metrics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("underground_world.msg._robot_metrics.RobotMetrics", full_classname_dest, 49) == 0);
  }
  underground_world__msg__RobotMetrics * ros_message = _ros_message;
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
  {  // steps_taken
    PyObject * field = PyObject_GetAttrString(_pymsg, "steps_taken");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steps_taken = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // invalid_moves
    PyObject * field = PyObject_GetAttrString(_pymsg, "invalid_moves");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->invalid_moves = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // contacts_seen
    PyObject * field = PyObject_GetAttrString(_pymsg, "contacts_seen");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->contacts_seen = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // contacts_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "contacts_down");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->contacts_down = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // invalid_triggers
    PyObject * field = PyObject_GetAttrString(_pymsg, "invalid_triggers");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->invalid_triggers = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // duplicate_triggers
    PyObject * field = PyObject_GetAttrString(_pymsg, "duplicate_triggers");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duplicate_triggers = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // unique_cells_seen
    PyObject * field = PyObject_GetAttrString(_pymsg, "unique_cells_seen");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unique_cells_seen = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // map_coverage_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_coverage_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->map_coverage_percent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * underground_world__msg__robot_metrics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotMetrics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("underground_world.msg._robot_metrics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotMetrics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  underground_world__msg__RobotMetrics * ros_message = (underground_world__msg__RobotMetrics *)raw_ros_message;
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
  {  // steps_taken
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steps_taken);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steps_taken", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // invalid_moves
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->invalid_moves);
    {
      int rc = PyObject_SetAttrString(_pymessage, "invalid_moves", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contacts_seen
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->contacts_seen);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contacts_seen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contacts_down
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->contacts_down);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contacts_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // invalid_triggers
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->invalid_triggers);
    {
      int rc = PyObject_SetAttrString(_pymessage, "invalid_triggers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duplicate_triggers
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->duplicate_triggers);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duplicate_triggers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unique_cells_seen
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unique_cells_seen);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unique_cells_seen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_coverage_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->map_coverage_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_coverage_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
