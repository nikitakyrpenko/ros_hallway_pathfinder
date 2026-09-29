// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/local_scan.h"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__STRUCT_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'scenario_name'
#include "rosidl_runtime_c/string.h"
// Member 'cells'
#include "underground_world/msg/detail/cell_observation__struct.h"

/// Struct defined in msg/LocalScan in the package underground_world.
typedef struct underground_world__msg__LocalScan
{
  rosidl_runtime_c__String scenario_name;
  int32_t robot_x;
  int32_t robot_y;
  underground_world__msg__CellObservation__Sequence cells;
} underground_world__msg__LocalScan;

// Struct for a sequence of underground_world__msg__LocalScan.
typedef struct underground_world__msg__LocalScan__Sequence
{
  underground_world__msg__LocalScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__msg__LocalScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__STRUCT_H_
