// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from underground_world:msg/RobotResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/robot_result.h"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__STRUCT_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__STRUCT_H_

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
// Member 'mission_result'
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotResult in the package underground_world.
typedef struct underground_world__msg__RobotResult
{
  rosidl_runtime_c__String scenario_name;
  rosidl_runtime_c__String mission_result;
  rosidl_runtime_c__String reason;
  uint32_t steps_taken;
  uint32_t max_steps;
} underground_world__msg__RobotResult;

// Struct for a sequence of underground_world__msg__RobotResult.
typedef struct underground_world__msg__RobotResult__Sequence
{
  underground_world__msg__RobotResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__msg__RobotResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__STRUCT_H_
