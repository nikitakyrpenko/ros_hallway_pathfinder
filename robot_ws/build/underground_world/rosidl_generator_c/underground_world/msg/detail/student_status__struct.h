// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from underground_world:msg/StudentStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/student_status.h"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__STRUCT_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'EXPLORING'.
enum
{
  underground_world__msg__StudentStatus__EXPLORING = 0
};

/// Constant 'ENGAGING'.
enum
{
  underground_world__msg__StudentStatus__ENGAGING = 1
};

/// Constant 'RETURNING'.
enum
{
  underground_world__msg__StudentStatus__RETURNING = 2
};

/// Constant 'DONE'.
enum
{
  underground_world__msg__StudentStatus__DONE = 3
};

/// Constant 'FAILED'.
enum
{
  underground_world__msg__StudentStatus__FAILED = 4
};

/// Struct defined in msg/StudentStatus in the package underground_world.
typedef struct underground_world__msg__StudentStatus
{
  uint8_t state;
} underground_world__msg__StudentStatus;

// Struct for a sequence of underground_world__msg__StudentStatus.
typedef struct underground_world__msg__StudentStatus__Sequence
{
  underground_world__msg__StudentStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__msg__StudentStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__STRUCT_H_
