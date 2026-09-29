// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from underground_world:msg/EnemyDown.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "underground_world/msg/detail/enemy_down__functions.h"
#include "underground_world/msg/detail/enemy_down__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace underground_world
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EnemyDown_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) underground_world::msg::EnemyDown(_init);
}

void EnemyDown_fini_function(void * message_memory)
{
  auto typed_message = static_cast<underground_world::msg::EnemyDown *>(message_memory);
  typed_message->~EnemyDown();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnemyDown_message_member_array[3] = {
  {
    "contact_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world::msg::EnemyDown, contact_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world::msg::EnemyDown, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world::msg::EnemyDown, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnemyDown_message_members = {
  "underground_world::msg",  // message namespace
  "EnemyDown",  // message name
  3,  // number of fields
  sizeof(underground_world::msg::EnemyDown),
  false,  // has_any_key_member_
  EnemyDown_message_member_array,  // message members
  EnemyDown_init_function,  // function to initialize message memory (memory has to be allocated)
  EnemyDown_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnemyDown_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnemyDown_message_members,
  get_message_typesupport_handle_function,
  &underground_world__msg__EnemyDown__get_type_hash,
  &underground_world__msg__EnemyDown__get_type_description,
  &underground_world__msg__EnemyDown__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace underground_world


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<underground_world::msg::EnemyDown>()
{
  return &::underground_world::msg::rosidl_typesupport_introspection_cpp::EnemyDown_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, underground_world, msg, EnemyDown)() {
  return &::underground_world::msg::rosidl_typesupport_introspection_cpp::EnemyDown_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
