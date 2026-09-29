// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from underground_world:msg/MoveCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/move_command.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__TRAITS_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "underground_world/msg/detail/move_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace underground_world
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoveCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace underground_world

namespace rosidl_generator_traits
{

[[deprecated("use underground_world::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const underground_world::msg::MoveCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::msg::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::msg::MoveCommand & msg)
{
  return underground_world::msg::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::msg::MoveCommand>()
{
  return "underground_world::msg::MoveCommand";
}

template<>
inline const char * name<underground_world::msg::MoveCommand>()
{
  return "underground_world/msg/MoveCommand";
}

template<>
struct has_fixed_size<underground_world::msg::MoveCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<underground_world::msg::MoveCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<underground_world::msg::MoveCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__TRAITS_HPP_
