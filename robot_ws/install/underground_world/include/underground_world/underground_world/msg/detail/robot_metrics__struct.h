// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from underground_world:msg/RobotMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/robot_metrics.h"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__STRUCT_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__STRUCT_H_

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

/// Struct defined in msg/RobotMetrics in the package underground_world.
typedef struct underground_world__msg__RobotMetrics
{
  rosidl_runtime_c__String scenario_name;
  uint32_t steps_taken;
  uint32_t invalid_moves;
  uint32_t contacts_seen;
  uint32_t contacts_down;
  uint32_t invalid_triggers;
  uint32_t duplicate_triggers;
  uint32_t unique_cells_seen;
  float map_coverage_percent;
} underground_world__msg__RobotMetrics;

// Struct for a sequence of underground_world__msg__RobotMetrics.
typedef struct underground_world__msg__RobotMetrics__Sequence
{
  underground_world__msg__RobotMetrics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__msg__RobotMetrics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__STRUCT_H_
