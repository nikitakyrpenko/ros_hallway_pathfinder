// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from underground_world:srv/PayloadTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/srv/payload_trigger.h"


#ifndef UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__STRUCT_H_
#define UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PayloadTrigger in the package underground_world.
typedef struct underground_world__srv__PayloadTrigger_Request
{
  int32_t contact_id;
  int32_t x;
  int32_t y;
} underground_world__srv__PayloadTrigger_Request;

// Struct for a sequence of underground_world__srv__PayloadTrigger_Request.
typedef struct underground_world__srv__PayloadTrigger_Request__Sequence
{
  underground_world__srv__PayloadTrigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__srv__PayloadTrigger_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PayloadTrigger in the package underground_world.
typedef struct underground_world__srv__PayloadTrigger_Response
{
  bool accepted;
  rosidl_runtime_c__String reason;
} underground_world__srv__PayloadTrigger_Response;

// Struct for a sequence of underground_world__srv__PayloadTrigger_Response.
typedef struct underground_world__srv__PayloadTrigger_Response__Sequence
{
  underground_world__srv__PayloadTrigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__srv__PayloadTrigger_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  underground_world__srv__PayloadTrigger_Event__request__MAX_SIZE = 1
};
// response
enum
{
  underground_world__srv__PayloadTrigger_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PayloadTrigger in the package underground_world.
typedef struct underground_world__srv__PayloadTrigger_Event
{
  service_msgs__msg__ServiceEventInfo info;
  underground_world__srv__PayloadTrigger_Request__Sequence request;
  underground_world__srv__PayloadTrigger_Response__Sequence response;
} underground_world__srv__PayloadTrigger_Event;

// Struct for a sequence of underground_world__srv__PayloadTrigger_Event.
typedef struct underground_world__srv__PayloadTrigger_Event__Sequence
{
  underground_world__srv__PayloadTrigger_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} underground_world__srv__PayloadTrigger_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__STRUCT_H_
