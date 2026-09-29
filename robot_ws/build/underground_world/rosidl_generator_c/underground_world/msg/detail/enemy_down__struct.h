// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from underground_world:msg/EnemyDown.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/enemy_down.h"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__STRUCT_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/EnemyDown in the package underground_world.
typedef struct underground_world__msg__EnemyDown
{
  int32_t contact_id;
  int32_t x;
  int32_t y;
} underground_world__msg__EnemyDown;

// Struct for a sequence of underground_world__msg__EnemyDown.
typedef struct underground_world__msg__EnemyDown__Sequence
{
  underground_world__msg__EnemyDown * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__msg__EnemyDown__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__STRUCT_H_
