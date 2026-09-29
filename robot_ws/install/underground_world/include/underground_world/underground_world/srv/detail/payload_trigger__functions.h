// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from underground_world:srv/PayloadTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/srv/payload_trigger.h"


#ifndef UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__FUNCTIONS_H_
#define UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__FUNCTIONS_H_

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

#include "underground_world/srv/detail/payload_trigger__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__srv__PayloadTrigger__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeDescription *
underground_world__srv__PayloadTrigger__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource *
underground_world__srv__PayloadTrigger__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__srv__PayloadTrigger__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/PayloadTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * underground_world__srv__PayloadTrigger_Request
 * )) before or use
 * underground_world__srv__PayloadTrigger_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Request__init(underground_world__srv__PayloadTrigger_Request * msg);

/// Finalize srv/PayloadTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Request__fini(underground_world__srv__PayloadTrigger_Request * msg);

/// Create srv/PayloadTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * underground_world__srv__PayloadTrigger_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
underground_world__srv__PayloadTrigger_Request *
underground_world__srv__PayloadTrigger_Request__create(void);

/// Destroy srv/PayloadTrigger message.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Request__destroy(underground_world__srv__PayloadTrigger_Request * msg);

/// Check for srv/PayloadTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Request__are_equal(const underground_world__srv__PayloadTrigger_Request * lhs, const underground_world__srv__PayloadTrigger_Request * rhs);

/// Copy a srv/PayloadTrigger message.
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
underground_world__srv__PayloadTrigger_Request__copy(
  const underground_world__srv__PayloadTrigger_Request * input,
  underground_world__srv__PayloadTrigger_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__srv__PayloadTrigger_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeDescription *
underground_world__srv__PayloadTrigger_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource *
underground_world__srv__PayloadTrigger_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__srv__PayloadTrigger_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/PayloadTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * underground_world__srv__PayloadTrigger_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Request__Sequence__init(underground_world__srv__PayloadTrigger_Request__Sequence * array, size_t size);

/// Finalize array of srv/PayloadTrigger messages.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Request__Sequence__fini(underground_world__srv__PayloadTrigger_Request__Sequence * array);

/// Create array of srv/PayloadTrigger messages.
/**
 * It allocates the memory for the array and calls
 * underground_world__srv__PayloadTrigger_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
underground_world__srv__PayloadTrigger_Request__Sequence *
underground_world__srv__PayloadTrigger_Request__Sequence__create(size_t size);

/// Destroy array of srv/PayloadTrigger messages.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Request__Sequence__destroy(underground_world__srv__PayloadTrigger_Request__Sequence * array);

/// Check for srv/PayloadTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Request__Sequence__are_equal(const underground_world__srv__PayloadTrigger_Request__Sequence * lhs, const underground_world__srv__PayloadTrigger_Request__Sequence * rhs);

/// Copy an array of srv/PayloadTrigger messages.
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
underground_world__srv__PayloadTrigger_Request__Sequence__copy(
  const underground_world__srv__PayloadTrigger_Request__Sequence * input,
  underground_world__srv__PayloadTrigger_Request__Sequence * output);

/// Initialize srv/PayloadTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * underground_world__srv__PayloadTrigger_Response
 * )) before or use
 * underground_world__srv__PayloadTrigger_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Response__init(underground_world__srv__PayloadTrigger_Response * msg);

/// Finalize srv/PayloadTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Response__fini(underground_world__srv__PayloadTrigger_Response * msg);

/// Create srv/PayloadTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * underground_world__srv__PayloadTrigger_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
underground_world__srv__PayloadTrigger_Response *
underground_world__srv__PayloadTrigger_Response__create(void);

/// Destroy srv/PayloadTrigger message.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Response__destroy(underground_world__srv__PayloadTrigger_Response * msg);

/// Check for srv/PayloadTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Response__are_equal(const underground_world__srv__PayloadTrigger_Response * lhs, const underground_world__srv__PayloadTrigger_Response * rhs);

/// Copy a srv/PayloadTrigger message.
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
underground_world__srv__PayloadTrigger_Response__copy(
  const underground_world__srv__PayloadTrigger_Response * input,
  underground_world__srv__PayloadTrigger_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__srv__PayloadTrigger_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeDescription *
underground_world__srv__PayloadTrigger_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource *
underground_world__srv__PayloadTrigger_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__srv__PayloadTrigger_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/PayloadTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * underground_world__srv__PayloadTrigger_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Response__Sequence__init(underground_world__srv__PayloadTrigger_Response__Sequence * array, size_t size);

/// Finalize array of srv/PayloadTrigger messages.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Response__Sequence__fini(underground_world__srv__PayloadTrigger_Response__Sequence * array);

/// Create array of srv/PayloadTrigger messages.
/**
 * It allocates the memory for the array and calls
 * underground_world__srv__PayloadTrigger_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
underground_world__srv__PayloadTrigger_Response__Sequence *
underground_world__srv__PayloadTrigger_Response__Sequence__create(size_t size);

/// Destroy array of srv/PayloadTrigger messages.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Response__Sequence__destroy(underground_world__srv__PayloadTrigger_Response__Sequence * array);

/// Check for srv/PayloadTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Response__Sequence__are_equal(const underground_world__srv__PayloadTrigger_Response__Sequence * lhs, const underground_world__srv__PayloadTrigger_Response__Sequence * rhs);

/// Copy an array of srv/PayloadTrigger messages.
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
underground_world__srv__PayloadTrigger_Response__Sequence__copy(
  const underground_world__srv__PayloadTrigger_Response__Sequence * input,
  underground_world__srv__PayloadTrigger_Response__Sequence * output);

/// Initialize srv/PayloadTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * underground_world__srv__PayloadTrigger_Event
 * )) before or use
 * underground_world__srv__PayloadTrigger_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Event__init(underground_world__srv__PayloadTrigger_Event * msg);

/// Finalize srv/PayloadTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Event__fini(underground_world__srv__PayloadTrigger_Event * msg);

/// Create srv/PayloadTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * underground_world__srv__PayloadTrigger_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
underground_world__srv__PayloadTrigger_Event *
underground_world__srv__PayloadTrigger_Event__create(void);

/// Destroy srv/PayloadTrigger message.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Event__destroy(underground_world__srv__PayloadTrigger_Event * msg);

/// Check for srv/PayloadTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Event__are_equal(const underground_world__srv__PayloadTrigger_Event * lhs, const underground_world__srv__PayloadTrigger_Event * rhs);

/// Copy a srv/PayloadTrigger message.
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
underground_world__srv__PayloadTrigger_Event__copy(
  const underground_world__srv__PayloadTrigger_Event * input,
  underground_world__srv__PayloadTrigger_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__srv__PayloadTrigger_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeDescription *
underground_world__srv__PayloadTrigger_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource *
underground_world__srv__PayloadTrigger_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__srv__PayloadTrigger_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/PayloadTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * underground_world__srv__PayloadTrigger_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Event__Sequence__init(underground_world__srv__PayloadTrigger_Event__Sequence * array, size_t size);

/// Finalize array of srv/PayloadTrigger messages.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Event__Sequence__fini(underground_world__srv__PayloadTrigger_Event__Sequence * array);

/// Create array of srv/PayloadTrigger messages.
/**
 * It allocates the memory for the array and calls
 * underground_world__srv__PayloadTrigger_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
underground_world__srv__PayloadTrigger_Event__Sequence *
underground_world__srv__PayloadTrigger_Event__Sequence__create(size_t size);

/// Destroy array of srv/PayloadTrigger messages.
/**
 * It calls
 * underground_world__srv__PayloadTrigger_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void
underground_world__srv__PayloadTrigger_Event__Sequence__destroy(underground_world__srv__PayloadTrigger_Event__Sequence * array);

/// Check for srv/PayloadTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
underground_world__srv__PayloadTrigger_Event__Sequence__are_equal(const underground_world__srv__PayloadTrigger_Event__Sequence * lhs, const underground_world__srv__PayloadTrigger_Event__Sequence * rhs);

/// Copy an array of srv/PayloadTrigger messages.
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
underground_world__srv__PayloadTrigger_Event__Sequence__copy(
  const underground_world__srv__PayloadTrigger_Event__Sequence * input,
  underground_world__srv__PayloadTrigger_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__FUNCTIONS_H_
