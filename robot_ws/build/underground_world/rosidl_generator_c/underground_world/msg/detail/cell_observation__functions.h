// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/cell_observation.h"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__FUNCTIONS_H_
#define UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "underground_world/msg/rosidl_generator_c__visibility_control.h"

#include "underground_world/msg/detail/cell_observation__struct.h"

/// Initialize msg/CellObservation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * underground_world__msg__CellObservation
 * )) before or use
 * underground_world__msg__CellObservation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__msg__CellObservation__init(underground_world__msg__CellObservation * msg);

/// Finalize msg/CellObservation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__msg__CellObservation__fini(underground_world__msg__CellObservation * msg);

/// Create msg/CellObservation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * underground_world__msg__CellObservation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
underground_world__msg__CellObservation *
underground_world__msg__CellObservation__create(void);

/// Destroy msg/CellObservation message.
/**
 * It calls
 * underground_world__msg__CellObservation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__msg__CellObservation__destroy(underground_world__msg__CellObservation * msg);

/// Check for msg/CellObservation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__msg__CellObservation__are_equal(const underground_world__msg__CellObservation * lhs, const underground_world__msg__CellObservation * rhs);

/// Copy a msg/CellObservation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__msg__CellObservation__copy(
  const underground_world__msg__CellObservation * input,
  underground_world__msg__CellObservation * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__msg__CellObservation__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeDescription *
underground_world__msg__CellObservation__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource *
underground_world__msg__CellObservation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__msg__CellObservation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/CellObservation messages.
/**
 * It allocates the memory for the number of elements and calls
 * underground_world__msg__CellObservation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__msg__CellObservation__Sequence__init(underground_world__msg__CellObservation__Sequence * array, size_t size);

/// Finalize array of msg/CellObservation messages.
/**
 * It calls
 * underground_world__msg__CellObservation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__msg__CellObservation__Sequence__fini(underground_world__msg__CellObservation__Sequence * array);

/// Create array of msg/CellObservation messages.
/**
 * It allocates the memory for the array and calls
 * underground_world__msg__CellObservation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
underground_world__msg__CellObservation__Sequence *
underground_world__msg__CellObservation__Sequence__create(size_t size);

/// Destroy array of msg/CellObservation messages.
/**
 * It calls
 * underground_world__msg__CellObservation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__msg__CellObservation__Sequence__destroy(underground_world__msg__CellObservation__Sequence * array);

/// Check for msg/CellObservation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__msg__CellObservation__Sequence__are_equal(const underground_world__msg__CellObservation__Sequence * lhs, const underground_world__msg__CellObservation__Sequence * rhs);

/// Copy an array of msg/CellObservation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__msg__CellObservation__Sequence__copy(
  const underground_world__msg__CellObservation__Sequence * input,
  underground_world__msg__CellObservation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__FUNCTIONS_H_
