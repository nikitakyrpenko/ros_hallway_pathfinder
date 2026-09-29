// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "underground_world/msg/detail/cell_observation__rosidl_typesupport_introspection_c.h"
#include "underground_world/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "underground_world/msg/detail/cell_observation__functions.h"
#include "underground_world/msg/detail/cell_observation__struct.h"


// Include directives for member types
// Member `cell_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  underground_world__msg__CellObservation__init(message_memory);
}

void underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_fini_function(void * message_memory)
{
  underground_world__msg__CellObservation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world__msg__CellObservation, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world__msg__CellObservation, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cell_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world__msg__CellObservation, cell_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world__msg__CellObservation, contact_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_message_members = {
  "underground_world__msg",  // message namespace
  "CellObservation",  // message name
  4,  // number of fields
  sizeof(underground_world__msg__CellObservation),
  false,  // has_any_key_member_
  underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_message_member_array,  // message members
  underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_init_function,  // function to initialize message memory (memory has to be allocated)
  underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_message_type_support_handle = {
  0,
  &underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_message_members,
  get_message_typesupport_handle_function,
  &underground_world__msg__CellObservation__get_type_hash,
  &underground_world__msg__CellObservation__get_type_description,
  &underground_world__msg__CellObservation__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_underground_world
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, underground_world, msg, CellObservation)() {
  if (!underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_message_type_support_handle.typesupport_identifier) {
    underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &underground_world__msg__CellObservation__rosidl_typesupport_introspection_c__CellObservation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
