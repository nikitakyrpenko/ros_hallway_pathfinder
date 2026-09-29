// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from underground_world:srv/PayloadTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/srv/payload_trigger.h"


#ifndef UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__TYPE_SUPPORT_H_
#define UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "underground_world/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  underground_world,
  srv,
  PayloadTrigger_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  underground_world,
  srv,
  PayloadTrigger_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  underground_world,
  srv,
  PayloadTrigger_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  underground_world,
  srv,
  PayloadTrigger
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  underground_world,
  srv,
  PayloadTrigger
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_underground_world
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  underground_world,
  srv,
  PayloadTrigger
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__TYPE_SUPPORT_H_
