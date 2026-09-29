// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "underground_world/msg/detail/local_scan__rosidl_typesupport_introspection_c.h"
#include "underground_world/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "underground_world/msg/detail/local_scan__functions.h"
#include "underground_world/msg/detail/local_scan__struct.h"


// Include directives for member types
// Member `scenario_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `cells`
#include "underground_world/msg/cell_observation.h"
// Member `cells`
#include "underground_world/msg/detail/cell_observation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  underground_world__msg__LocalScan__init(message_memory);
}

void underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_fini_function(void * message_memory)
{
  underground_world__msg__LocalScan__fini(message_memory);
}

size_t underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__size_function__LocalScan__cells(
  const void * untyped_member)
{
  const underground_world__msg__CellObservation__Sequence * member =
    (const underground_world__msg__CellObservation__Sequence *)(untyped_member);
  return member->size;
}

const void * underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__get_const_function__LocalScan__cells(
  const void * untyped_member, size_t index)
{
  const underground_world__msg__CellObservation__Sequence * member =
    (const underground_world__msg__CellObservation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__get_function__LocalScan__cells(
  void * untyped_member, size_t index)
{
  underground_world__msg__CellObservation__Sequence * member =
    (underground_world__msg__CellObservation__Sequence *)(untyped_member);
  return &member->data[index];
}

void underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__fetch_function__LocalScan__cells(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const underground_world__msg__CellObservation * item =
    ((const underground_world__msg__CellObservation *)
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__get_const_function__LocalScan__cells(untyped_member, index));
  underground_world__msg__CellObservation * value =
    (underground_world__msg__CellObservation *)(untyped_value);
  *value = *item;
}

void underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__assign_function__LocalScan__cells(
  void * untyped_member, size_t index, const void * untyped_value)
{
  underground_world__msg__CellObservation * item =
    ((underground_world__msg__CellObservation *)
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__get_function__LocalScan__cells(untyped_member, index));
  const underground_world__msg__CellObservation * value =
    (const underground_world__msg__CellObservation *)(untyped_value);
  *item = *value;
}

bool underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__resize_function__LocalScan__cells(
  void * untyped_member, size_t size)
{
  underground_world__msg__CellObservation__Sequence * member =
    (underground_world__msg__CellObservation__Sequence *)(untyped_member);
  underground_world__msg__CellObservation__Sequence__fini(member);
  return underground_world__msg__CellObservation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_member_array[4] = {
  {
    "scenario_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world__msg__LocalScan, scenario_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world__msg__LocalScan, robot_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world__msg__LocalScan, robot_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world__msg__LocalScan, cells),  // bytes offset in struct
    NULL,  // default value
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__size_function__LocalScan__cells,  // size() function pointer
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__get_const_function__LocalScan__cells,  // get_const(index) function pointer
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__get_function__LocalScan__cells,  // get(index) function pointer
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__fetch_function__LocalScan__cells,  // fetch(index, &value) function pointer
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__assign_function__LocalScan__cells,  // assign(index, value) function pointer
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__resize_function__LocalScan__cells  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_members = {
  "underground_world__msg",  // message namespace
  "LocalScan",  // message name
  4,  // number of fields
  sizeof(underground_world__msg__LocalScan),
  false,  // has_any_key_member_
  underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_member_array,  // message members
  underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_init_function,  // function to initialize message memory (memory has to be allocated)
  underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_type_support_handle = {
  0,
  &underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_members,
  get_message_typesupport_handle_function,
  &underground_world__msg__LocalScan__get_type_hash,
  &underground_world__msg__LocalScan__get_type_description,
  &underground_world__msg__LocalScan__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_underground_world
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, underground_world, msg, LocalScan)() {
  underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, underground_world, msg, CellObservation)();
  if (!underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_type_support_handle.typesupport_identifier) {
    underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &underground_world__msg__LocalScan__rosidl_typesupport_introspection_c__LocalScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
