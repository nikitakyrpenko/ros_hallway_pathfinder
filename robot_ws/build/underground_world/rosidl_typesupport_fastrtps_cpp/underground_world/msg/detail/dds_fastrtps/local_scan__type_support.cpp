// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice
#include "underground_world/msg/detail/local_scan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "underground_world/msg/detail/local_scan__functions.h"
#include "underground_world/msg/detail/local_scan__struct.hpp"

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
bool cdr_serialize(
  const underground_world::msg::CellObservation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  underground_world::msg::CellObservation &);
size_t get_serialized_size(
  const underground_world::msg::CellObservation &,
  size_t current_alignment);
size_t
max_serialized_size_CellObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const underground_world::msg::CellObservation &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const underground_world::msg::CellObservation &,
  size_t current_alignment);
size_t
max_serialized_size_key_CellObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace underground_world


namespace underground_world
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
cdr_serialize(
  const underground_world::msg::LocalScan & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: scenario_name
  cdr << ros_message.scenario_name;

  // Member: robot_x
  cdr << ros_message.robot_x;

  // Member: robot_y
  cdr << ros_message.robot_y;

  // Member: cells
  {
    size_t size = ros_message.cells.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      underground_world::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cells[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  underground_world::msg::LocalScan & ros_message)
{
  // Member: scenario_name
  cdr >> ros_message.scenario_name;

  // Member: robot_x
  cdr >> ros_message.robot_x;

  // Member: robot_y
  cdr >> ros_message.robot_y;

  // Member: cells
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.cells.resize(size);
    for (size_t i = 0; i < size; i++) {
      underground_world::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cells[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
get_serialized_size(
  const underground_world::msg::LocalScan & ros_message,
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

  // Member: robot_x
  {
    size_t item_size = sizeof(ros_message.robot_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: robot_y
  {
    size_t item_size = sizeof(ros_message.robot_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cells
  {
    size_t array_size = ros_message.cells.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        underground_world::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cells[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
max_serialized_size_LocalScan(
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
  // Member: robot_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: robot_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cells
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        underground_world::msg::typesupport_fastrtps_cpp::max_serialized_size_CellObservation(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = underground_world::msg::LocalScan;
    is_plain =
      (
      offsetof(DataType, cells) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
cdr_serialize_key(
  const underground_world::msg::LocalScan & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: scenario_name
  cdr << ros_message.scenario_name;

  // Member: robot_x
  cdr << ros_message.robot_x;

  // Member: robot_y
  cdr << ros_message.robot_y;

  // Member: cells
  {
    size_t size = ros_message.cells.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      underground_world::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.cells[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
get_serialized_size_key(
  const underground_world::msg::LocalScan & ros_message,
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

  // Member: robot_x
  {
    size_t item_size = sizeof(ros_message.robot_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: robot_y
  {
    size_t item_size = sizeof(ros_message.robot_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cells
  {
    size_t array_size = ros_message.cells.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        underground_world::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.cells[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_underground_world
max_serialized_size_key_LocalScan(
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

  // Member: robot_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robot_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cells
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        underground_world::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CellObservation(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = underground_world::msg::LocalScan;
    is_plain =
      (
      offsetof(DataType, cells) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _LocalScan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const underground_world::msg::LocalScan *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LocalScan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<underground_world::msg::LocalScan *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LocalScan__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const underground_world::msg::LocalScan *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LocalScan__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LocalScan(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LocalScan__callbacks = {
  "underground_world::msg",
  "LocalScan",
  _LocalScan__cdr_serialize,
  _LocalScan__cdr_deserialize,
  _LocalScan__get_serialized_size,
  _LocalScan__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LocalScan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LocalScan__callbacks,
  get_message_typesupport_handle_function,
  &underground_world__msg__LocalScan__get_type_hash,
  &underground_world__msg__LocalScan__get_type_description,
  &underground_world__msg__LocalScan__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace underground_world

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_underground_world
const rosidl_message_type_support_t *
get_message_type_support_handle<underground_world::msg::LocalScan>()
{
  return &underground_world::msg::typesupport_fastrtps_cpp::_LocalScan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, underground_world, msg, LocalScan)() {
  return &underground_world::msg::typesupport_fastrtps_cpp::_LocalScan__handle;
}

#ifdef __cplusplus
}
#endif
