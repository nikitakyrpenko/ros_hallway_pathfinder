// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from underground_world:msg/EnemyDown.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/enemy_down.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__TRAITS_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "underground_world/msg/detail/enemy_down__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace underground_world
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnemyDown & msg,
  std::ostream & out)
{
  out << "{";
  // member: contact_id
  {
    out << "contact_id: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_id, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnemyDown & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: contact_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_id: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_id, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnemyDown & msg, bool use_flow_style = false)
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
  const underground_world::msg::EnemyDown & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::msg::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::msg::EnemyDown & msg)
{
  return underground_world::msg::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::msg::EnemyDown>()
{
  return "underground_world::msg::EnemyDown";
}

template<>
inline const char * name<underground_world::msg::EnemyDown>()
{
  return "underground_world/msg/EnemyDown";
}

template<>
struct has_fixed_size<underground_world::msg::EnemyDown>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<underground_world::msg::EnemyDown>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<underground_world::msg::EnemyDown>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__TRAITS_HPP_
