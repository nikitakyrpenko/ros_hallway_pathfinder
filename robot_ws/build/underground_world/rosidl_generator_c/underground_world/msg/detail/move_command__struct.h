// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from underground_world:msg/MoveCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/move_command.h"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__STRUCT_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UP'.
enum
{
  underground_world__msg__MoveCommand__UP = 0
};

/// Constant 'DOWN'.
enum
{
  underground_world__msg__MoveCommand__DOWN = 1
};

/// Constant 'LEFT'.
enum
{
  underground_world__msg__MoveCommand__LEFT = 2
};

/// Constant 'RIGHT'.
enum
{
  underground_world__msg__MoveCommand__RIGHT = 3
};

/// Struct defined in msg/MoveCommand in the package underground_world.
typedef struct underground_world__msg__MoveCommand
{
  uint8_t direction;
} underground_world__msg__MoveCommand;

// Struct for a sequence of underground_world__msg__MoveCommand.
typedef struct underground_world__msg__MoveCommand__Sequence
{
  underground_world__msg__MoveCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__msg__MoveCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__STRUCT_H_
