// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "underground_world/msg/detail/local_scan__functions.h"
#include "underground_world/msg/detail/local_scan__struct.hpp"
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

void LocalScan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) underground_world::msg::LocalScan(_init);
}

void LocalScan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<underground_world::msg::LocalScan *>(message_memory);
  typed_message->~LocalScan();
}

size_t size_function__LocalScan__cells(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<underground_world::msg::CellObservation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalScan__cells(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<underground_world::msg::CellObservation> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalScan__cells(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<underground_world::msg::CellObservation> *>(untyped_member);
  return &member[index];
}

void fetch_function__LocalScan__cells(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const underground_world::msg::CellObservation *>(
    get_const_function__LocalScan__cells(untyped_member, index));
  auto & value = *reinterpret_cast<underground_world::msg::CellObservation *>(untyped_value);
  value = item;
}

void assign_function__LocalScan__cells(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<underground_world::msg::CellObservation *>(
    get_function__LocalScan__cells(untyped_member, index));
  const auto & value = *reinterpret_cast<const underground_world::msg::CellObservation *>(untyped_value);
  item = value;
}

void resize_function__LocalScan__cells(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<underground_world::msg::CellObservation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LocalScan_message_member_array[4] = {
  {
    "scenario_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world::msg::LocalScan, scenario_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world::msg::LocalScan, robot_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world::msg::LocalScan, robot_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cells",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<underground_world::msg::CellObservation>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(underground_world::msg::LocalScan, cells),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalScan__cells,  // size() function pointer
    get_const_function__LocalScan__cells,  // get_const(index) function pointer
    get_function__LocalScan__cells,  // get(index) function pointer
    fetch_function__LocalScan__cells,  // fetch(index, &value) function pointer
    assign_function__LocalScan__cells,  // assign(index, value) function pointer
    resize_function__LocalScan__cells  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LocalScan_message_members = {
  "underground_world::msg",  // message namespace
  "LocalScan",  // message name
  4,  // number of fields
  sizeof(underground_world::msg::LocalScan),
  false,  // has_any_key_member_
  LocalScan_message_member_array,  // message members
  LocalScan_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalScan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LocalScan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LocalScan_message_members,
  get_message_typesupport_handle_function,
  &underground_world__msg__LocalScan__get_type_hash,
  &underground_world__msg__LocalScan__get_type_description,
  &underground_world__msg__LocalScan__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace underground_world


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<underground_world::msg::LocalScan>()
{
  return &::underground_world::msg::rosidl_typesupport_introspection_cpp::LocalScan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, underground_world, msg, LocalScan)() {
  return &::underground_world::msg::rosidl_typesupport_introspection_cpp::LocalScan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
