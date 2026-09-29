// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/cell_observation.h"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__STRUCT_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'cell_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CellObservation in the package underground_world.
typedef struct underground_world__msg__CellObservation
{
  int32_t x;
  int32_t y;
  rosidl_runtime_c__String cell_type;
  int32_t contact_id;
} underground_world__msg__CellObservation;

// Struct for a sequence of underground_world__msg__CellObservation.
typedef struct underground_world__msg__CellObservation__Sequence
{
  underground_world__msg__CellObservation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__msg__CellObservation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__STRUCT_H_
