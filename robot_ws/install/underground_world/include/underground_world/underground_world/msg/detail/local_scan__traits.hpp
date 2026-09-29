// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/local_scan.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__TRAITS_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "underground_world/msg/detail/local_scan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cells'
#include "underground_world/msg/detail/cell_observation__traits.hpp"

namespace underground_world
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalScan & msg,
  std::ostream & out)
{
  out << "{";
  // member: scenario_name
  {
    out << "scenario_name: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario_name, out);
    out << ", ";
  }

  // member: robot_x
  {
    out << "robot_x: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_x, out);
    out << ", ";
  }

  // member: robot_y
  {
    out << "robot_y: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_y, out);
    out << ", ";
  }

  // member: cells
  {
    if (msg.cells.size() == 0) {
      out << "cells: []";
    } else {
      out << "cells: [";
      size_t pending_items = msg.cells.size();
      for (auto item : msg.cells) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalScan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scenario_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scenario_name: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario_name, out);
    out << "\n";
  }

  // member: robot_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_x: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_x, out);
    out << "\n";
  }

  // member: robot_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_y: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_y, out);
    out << "\n";
  }

  // member: cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cells.size() == 0) {
      out << "cells: []\n";
    } else {
      out << "cells:\n";
      for (auto item : msg.cells) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalScan & msg, bool use_flow_style = false)
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
  const underground_world::msg::LocalScan & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::msg::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::msg::LocalScan & msg)
{
  return underground_world::msg::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::msg::LocalScan>()
{
  return "underground_world::msg::LocalScan";
}

template<>
inline const char * name<underground_world::msg::LocalScan>()
{
  return "underground_world/msg/LocalScan";
}

template<>
struct has_fixed_size<underground_world::msg::LocalScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<underground_world::msg::LocalScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<underground_world::msg::LocalScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__TRAITS_HPP_
