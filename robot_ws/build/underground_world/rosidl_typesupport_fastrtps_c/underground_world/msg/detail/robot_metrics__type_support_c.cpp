// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from underground_world:msg/RobotMetrics.idl
// generated code does not contain a copyright notice
#include "underground_world/msg/detail/robot_metrics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "underground_world/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "underground_world/msg/detail/robot_metrics__struct.h"
#include "underground_world/msg/detail/robot_metrics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // scenario_name
#include "rosidl_runtime_c/string_functions.h"  // scenario_name

// forward declare type support functions


using _RobotMetrics__ros_msg_type = underground_world__msg__RobotMetrics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
bool cdr_serialize_underground_world__msg__RobotMetrics(
  const underground_world__msg__RobotMetrics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: scenario_name
  {
    const rosidl_runtime_c__String * str = &ros_message->scenario_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: steps_taken
  {
    cdr << ros_message->steps_taken;
  }

  // Field name: invalid_moves
  {
    cdr << ros_message->invalid_moves;
  }

  // Field name: contacts_seen
  {
    cdr << ros_message->contacts_seen;
  }

  // Field name: contacts_down
  {
    cdr << ros_message->contacts_down;
  }

  // Field name: invalid_triggers
  {
    cdr << ros_message->invalid_triggers;
  }

  // Field name: duplicate_triggers
  {
    cdr << ros_message->duplicate_triggers;
  }

  // Field name: unique_cells_seen
  {
    cdr << ros_message->unique_cells_seen;
  }

  // Field name: map_coverage_percent
  {
    cdr << ros_message->map_coverage_percent;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
bool cdr_deserialize_underground_world__msg__RobotMetrics(
  eprosima::fastcdr::Cdr & cdr,
  underground_world__msg__RobotMetrics * ros_message)
{
  // Field name: scenario_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->scenario_name.data) {
      rosidl_runtime_c__String__init(&ros_message->scenario_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->scenario_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'scenario_name'\n");
      return false;
    }
  }

  // Field name: steps_taken
  {
    cdr >> ros_message->steps_taken;
  }

  // Field name: invalid_moves
  {
    cdr >> ros_message->invalid_moves;
  }

  // Field name: contacts_seen
  {
    cdr >> ros_message->contacts_seen;
  }

  // Field name: contacts_down
  {
    cdr >> ros_message->contacts_down;
  }

  // Field name: invalid_triggers
  {
    cdr >> ros_message->invalid_triggers;
  }

  // Field name: duplicate_triggers
  {
    cdr >> ros_message->duplicate_triggers;
  }

  // Field name: unique_cells_seen
  {
    cdr >> ros_message->unique_cells_seen;
  }

  // Field name: map_coverage_percent
  {
    cdr >> ros_message->map_coverage_percent;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
size_t get_serialized_size_underground_world__msg__RobotMetrics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotMetrics__ros_msg_type * ros_message = static_cast<const _RobotMetrics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: scenario_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->scenario_name.size + 1);

  // Field name: steps_taken
  {
    size_t item_size = sizeof(ros_message->steps_taken);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: invalid_moves
  {
    size_t item_size = sizeof(ros_message->invalid_moves);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contacts_seen
  {
    size_t item_size = sizeof(ros_message->contacts_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contacts_down
  {
    size_t item_size = sizeof(ros_message->contacts_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: invalid_triggers
  {
    size_t item_size = sizeof(ros_message->invalid_triggers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: duplicate_triggers
  {
    size_t item_size = sizeof(ros_message->duplicate_triggers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unique_cells_seen
  {
    size_t item_size = sizeof(ros_message->unique_cells_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: map_coverage_percent
  {
    size_t item_size = sizeof(ros_message->map_coverage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
size_t max_serialized_size_underground_world__msg__RobotMetrics(
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

  // Field name: scenario_name
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

  // Field name: steps_taken
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: invalid_moves
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: contacts_seen
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: contacts_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: invalid_triggers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: duplicate_triggers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: unique_cells_seen
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: map_coverage_percent
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
    using DataType = underground_world__msg__RobotMetrics;
    is_plain =
      (
      offsetof(DataType, map_coverage_percent) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
bool cdr_serialize_key_underground_world__msg__RobotMetrics(
  const underground_world__msg__RobotMetrics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: scenario_name
  {
    const rosidl_runtime_c__String * str = &ros_message->scenario_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: steps_taken
  {
    cdr << ros_message->steps_taken;
  }

  // Field name: invalid_moves
  {
    cdr << ros_message->invalid_moves;
  }

  // Field name: contacts_seen
  {
    cdr << ros_message->contacts_seen;
  }

  // Field name: contacts_down
  {
    cdr << ros_message->contacts_down;
  }

  // Field name: invalid_triggers
  {
    cdr << ros_message->invalid_triggers;
  }

  // Field name: duplicate_triggers
  {
    cdr << ros_message->duplicate_triggers;
  }

  // Field name: unique_cells_seen
  {
    cdr << ros_message->unique_cells_seen;
  }

  // Field name: map_coverage_percent
  {
    cdr << ros_message->map_coverage_percent;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
size_t get_serialized_size_key_underground_world__msg__RobotMetrics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotMetrics__ros_msg_type * ros_message = static_cast<const _RobotMetrics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: scenario_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->scenario_name.size + 1);

  // Field name: steps_taken
  {
    size_t item_size = sizeof(ros_message->steps_taken);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: invalid_moves
  {
    size_t item_size = sizeof(ros_message->invalid_moves);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contacts_seen
  {
    size_t item_size = sizeof(ros_message->contacts_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contacts_down
  {
    size_t item_size = sizeof(ros_message->contacts_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: invalid_triggers
  {
    size_t item_size = sizeof(ros_message->invalid_triggers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: duplicate_triggers
  {
    size_t item_size = sizeof(ros_message->duplicate_triggers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unique_cells_seen
  {
    size_t item_size = sizeof(ros_message->unique_cells_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: map_coverage_percent
  {
    size_t item_size = sizeof(ros_message->map_coverage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_underground_world
size_t max_serialized_size_key_underground_world__msg__RobotMetrics(
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
  // Field name: scenario_name
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

  // Field name: steps_taken
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: invalid_moves
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: contacts_seen
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: contacts_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: invalid_triggers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: duplicate_triggers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: unique_cells_seen
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: map_coverage_percent
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
    using DataType = underground_world__msg__RobotMetrics;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const underground_world__msg__RobotMetrics * ros_message = static_cast<const underground_world__msg__RobotMetrics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_underground_world__msg__RobotMetrics(ros_message, cdr);
}

static bool _RobotMetrics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  underground_world__msg__RobotMetrics * ros_message = static_cast<underground_world__msg__RobotMetrics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_underground_world__msg__RobotMetrics(cdr, ros_message);
}

static uint32_t _RobotMetrics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_underground_world__msg__RobotMetrics(
      untyped_ros_message, 0));
}

static size_t _RobotMetrics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_underground_world__msg__RobotMetrics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotMetrics = {
  "underground_world::msg",
  "RobotMetrics",
  _RobotMetrics__cdr_serialize,
  _RobotMetrics__cdr_deserialize,
  _RobotMetrics__get_serialized_size,
  _RobotMetrics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotMetrics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotMetrics,
  get_message_typesupport_handle_function,
  &underground_world__msg__RobotMetrics__get_type_hash,
  &underground_world__msg__RobotMetrics__get_type_description,
  &underground_world__msg__RobotMetrics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, underground_world, msg, RobotMetrics)() {
  return &_RobotMetrics__type_support;
}

#if defined(__cplusplus)
}
#endif
