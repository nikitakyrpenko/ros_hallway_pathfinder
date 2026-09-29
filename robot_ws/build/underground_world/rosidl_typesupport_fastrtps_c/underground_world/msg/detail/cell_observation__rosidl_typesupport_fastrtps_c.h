// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice
#ifndef UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "underground_world/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "underground_world/msg/detail/cell_observation__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
bool cdr_serialize_underground_world__msg__CellObservation(
  const underground_world__msg__CellObservation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
bool cdr_deserialize_underground_world__msg__CellObservation(
  eprosima::fastcdr::Cdr &,
  underground_world__msg__CellObservation * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
size_t get_serialized_size_underground_world__msg__CellObservation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
size_t max_serialized_size_underground_world__msg__CellObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
bool cdr_serialize_key_underground_world__msg__CellObservation(
  const underground_world__msg__CellObservation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
size_t get_serialized_size_key_underground_world__msg__CellObservation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
size_t max_serialized_size_key_underground_world__msg__CellObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, underground_world, msg, CellObservation)();

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
