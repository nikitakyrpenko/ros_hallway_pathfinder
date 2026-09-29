// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from underground_world:msg/MoveCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "underground_world/msg/detail/move_command__struct.h"
#include "underground_world/msg/detail/move_command__type_support.h"
#include "underground_world/msg/detail/move_command__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace underground_world
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _MoveCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveCommand_type_support_ids_t;

static const _MoveCommand_type_support_ids_t _MoveCommand_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveCommand_type_support_symbol_names_t _MoveCommand_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, underground_world, msg, MoveCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, underground_world, msg, MoveCommand)),
  }
};

typedef struct _MoveCommand_type_support_data_t
{
  void * data[2];
} _MoveCommand_type_support_data_t;

static _MoveCommand_type_support_data_t _MoveCommand_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveCommand_message_typesupport_map = {
  2,
  "underground_world",
  &_MoveCommand_message_typesupport_ids.typesupport_identifier[0],
  &_MoveCommand_message_typesupport_symbol_names.symbol_name[0],
  &_MoveCommand_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveCommand_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveCommand_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &underground_world__msg__MoveCommand__get_type_hash,
  &underground_world__msg__MoveCommand__get_type_description,
  &underground_world__msg__MoveCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace underground_world

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, underground_world, msg, MoveCommand)() {
  return &::underground_world::msg::rosidl_typesupport_c::MoveCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
