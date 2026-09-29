// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/cell_observation.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__TRAITS_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "underground_world/msg/detail/cell_observation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace underground_world
{

namespace msg
{

inline void to_flow_style_yaml(
  const CellObservation & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: cell_type
  {
    out << "cell_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_type, out);
    out << ", ";
  }

  // member: contact_id
  {
    out << "contact_id: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CellObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: cell_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_type, out);
    out << "\n";
  }

  // member: contact_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_id: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CellObservation & msg, bool use_flow_style = false)
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
  const underground_world::msg::CellObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::msg::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::msg::CellObservation & msg)
{
  return underground_world::msg::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::msg::CellObservation>()
{
  return "underground_world::msg::CellObservation";
}

template<>
inline const char * name<underground_world::msg::CellObservation>()
{
  return "underground_world/msg/CellObservation";
}

template<>
struct has_fixed_size<underground_world::msg::CellObservation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<underground_world::msg::CellObservation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<underground_world::msg::CellObservation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__TRAITS_HPP_
