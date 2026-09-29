// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from underground_world:msg/RobotMetrics.idl
// generated code does not contain a copyright notice
#include "underground_world/msg/detail/robot_metrics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "underground_world/msg/detail/robot_metrics__functions.h"
#include "underground_world/msg/detail/robot_metrics__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace underground_world
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
cdr_serialize(
  const underground_world::msg::RobotMetrics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: scenario_name
  cdr << ros_message.scenario_name;

  // Member: steps_taken
  cdr << ros_message.steps_taken;

  // Member: invalid_moves
  cdr << ros_message.invalid_moves;

  // Member: contacts_seen
  cdr << ros_message.contacts_seen;

  // Member: contacts_down
  cdr << ros_message.contacts_down;

  // Member: invalid_triggers
  cdr << ros_message.invalid_triggers;

  // Member: duplicate_triggers
  cdr << ros_message.duplicate_triggers;

  // Member: unique_cells_seen
  cdr << ros_message.unique_cells_seen;

  // Member: map_coverage_percent
  cdr << ros_message.map_coverage_percent;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  underground_world::msg::RobotMetrics & ros_message)
{
  // Member: scenario_name
  cdr >> ros_message.scenario_name;

  // Member: steps_taken
  cdr >> ros_message.steps_taken;

  // Member: invalid_moves
  cdr >> ros_message.invalid_moves;

  // Member: contacts_seen
  cdr >> ros_message.contacts_seen;

  // Member: contacts_down
  cdr >> ros_message.contacts_down;

  // Member: invalid_triggers
  cdr >> ros_message.invalid_triggers;

  // Member: duplicate_triggers
  cdr >> ros_message.duplicate_triggers;

  // Member: unique_cells_seen
  cdr >> ros_message.unique_cells_seen;

  // Member: map_coverage_percent
  cdr >> ros_message.map_coverage_percent;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
get_serialized_size(
  const underground_world::msg::RobotMetrics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: scenario_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.scenario_name.size() + 1);

  // Member: steps_taken
  {
    size_t item_size = sizeof(ros_message.steps_taken);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: invalid_moves
  {
    size_t item_size = sizeof(ros_message.invalid_moves);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: contacts_seen
  {
    size_t item_size = sizeof(ros_message.contacts_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: contacts_down
  {
    size_t item_size = sizeof(ros_message.contacts_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: invalid_triggers
  {
    size_t item_size = sizeof(ros_message.invalid_triggers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: duplicate_triggers
  {
    size_t item_size = sizeof(ros_message.duplicate_triggers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: unique_cells_seen
  {
    size_t item_size = sizeof(ros_message.unique_cells_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: map_coverage_percent
  {
    size_t item_size = sizeof(ros_message.map_coverage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
max_serialized_size_RobotMetrics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: scenario_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: steps_taken
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: invalid_moves
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: contacts_seen
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: contacts_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: invalid_triggers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: duplicate_triggers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: unique_cells_seen
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: map_coverage_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = underground_world::msg::RobotMetrics;
    is_plain =
      (
      offsetof(DataType, map_coverage_percent) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
cdr_serialize_key(
  const underground_world::msg::RobotMetrics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: scenario_name
  cdr << ros_message.scenario_name;

  // Member: steps_taken
  cdr << ros_message.steps_taken;

  // Member: invalid_moves
  cdr << ros_message.invalid_moves;

  // Member: contacts_seen
  cdr << ros_message.contacts_seen;

  // Member: contacts_down
  cdr << ros_message.contacts_down;

  // Member: invalid_triggers
  cdr << ros_message.invalid_triggers;

  // Member: duplicate_triggers
  cdr << ros_message.duplicate_triggers;

  // Member: unique_cells_seen
  cdr << ros_message.unique_cells_seen;

  // Member: map_coverage_percent
  cdr << ros_message.map_coverage_percent;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
get_serialized_size_key(
  const underground_world::msg::RobotMetrics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: scenario_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.scenario_name.size() + 1);

  // Member: steps_taken
  {
    size_t item_size = sizeof(ros_message.steps_taken);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: invalid_moves
  {
    size_t item_size = sizeof(ros_message.invalid_moves);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: contacts_seen
  {
    size_t item_size = sizeof(ros_message.contacts_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: contacts_down
  {
    size_t item_size = sizeof(ros_message.contacts_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: invalid_triggers
  {
    size_t item_size = sizeof(ros_message.invalid_triggers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: duplicate_triggers
  {
    size_t item_size = sizeof(ros_message.duplicate_triggers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: unique_cells_seen
  {
    size_t item_size = sizeof(ros_message.unique_cells_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: map_coverage_percent
  {
    size_t item_size = sizeof(ros_message.map_coverage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
max_serialized_size_key_RobotMetrics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: scenario_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: steps_taken
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: invalid_moves
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: contacts_seen
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: contacts_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: invalid_triggers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: duplicate_triggers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: unique_cells_seen
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: map_coverage_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = underground_world::msg::RobotMetrics;
    is_plain =
      (
      offsetof(DataType, map_coverage_percent) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _RobotMetrics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const underground_world::msg::RobotMetrics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotMetrics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<underground_world::msg::RobotMetrics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotMetrics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const underground_world::msg::RobotMetrics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotMetrics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotMetrics(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotMetrics__callbacks = {
  "underground_world::msg",
  "RobotMetrics",
  _RobotMetrics__cdr_serialize,
  _RobotMetrics__cdr_deserialize,
  _RobotMetrics__get_serialized_size,
  _RobotMetrics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotMetrics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotMetrics__callbacks,
  get_message_typesupport_handle_function,
  &underground_world__msg__RobotMetrics__get_type_hash,
  &underground_world__msg__RobotMetrics__get_type_description,
  &underground_world__msg__RobotMetrics__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace underground_world

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_underground_world
const rosidl_message_type_support_t *
get_message_type_support_handle<underground_world::msg::RobotMetrics>()
{
  return &underground_world::msg::typesupport_fastrtps_cpp::_RobotMetrics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, underground_world, msg, RobotMetrics)() {
  return &underground_world::msg::typesupport_fastrtps_cpp::_RobotMetrics__handle;
}

#ifdef __cplusplus
}
#endif
