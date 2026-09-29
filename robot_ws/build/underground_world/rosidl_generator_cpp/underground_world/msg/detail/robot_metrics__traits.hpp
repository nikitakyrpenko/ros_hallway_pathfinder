// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from underground_world:msg/RobotMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/robot_metrics.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__TRAITS_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "underground_world/msg/detail/robot_metrics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace underground_world
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotMetrics & msg,
  std::ostream & out)
{
  out << "{";
  // member: scenario_name
  {
    out << "scenario_name: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario_name, out);
    out << ", ";
  }

  // member: steps_taken
  {
    out << "steps_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.steps_taken, out);
    out << ", ";
  }

  // member: invalid_moves
  {
    out << "invalid_moves: ";
    rosidl_generator_traits::value_to_yaml(msg.invalid_moves, out);
    out << ", ";
  }

  // member: contacts_seen
  {
    out << "contacts_seen: ";
    rosidl_generator_traits::value_to_yaml(msg.contacts_seen, out);
    out << ", ";
  }

  // member: contacts_down
  {
    out << "contacts_down: ";
    rosidl_generator_traits::value_to_yaml(msg.contacts_down, out);
    out << ", ";
  }

  // member: invalid_triggers
  {
    out << "invalid_triggers: ";
    rosidl_generator_traits::value_to_yaml(msg.invalid_triggers, out);
    out << ", ";
  }

  // member: duplicate_triggers
  {
    out << "duplicate_triggers: ";
    rosidl_generator_traits::value_to_yaml(msg.duplicate_triggers, out);
    out << ", ";
  }

  // member: unique_cells_seen
  {
    out << "unique_cells_seen: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_cells_seen, out);
    out << ", ";
  }

  // member: map_coverage_percent
  {
    out << "map_coverage_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.map_coverage_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotMetrics & msg,
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

  // member: steps_taken
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steps_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.steps_taken, out);
    out << "\n";
  }

  // member: invalid_moves
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "invalid_moves: ";
    rosidl_generator_traits::value_to_yaml(msg.invalid_moves, out);
    out << "\n";
  }

  // member: contacts_seen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contacts_seen: ";
    rosidl_generator_traits::value_to_yaml(msg.contacts_seen, out);
    out << "\n";
  }

  // member: contacts_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contacts_down: ";
    rosidl_generator_traits::value_to_yaml(msg.contacts_down, out);
    out << "\n";
  }

  // member: invalid_triggers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "invalid_triggers: ";
    rosidl_generator_traits::value_to_yaml(msg.invalid_triggers, out);
    out << "\n";
  }

  // member: duplicate_triggers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duplicate_triggers: ";
    rosidl_generator_traits::value_to_yaml(msg.duplicate_triggers, out);
    out << "\n";
  }

  // member: unique_cells_seen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unique_cells_seen: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_cells_seen, out);
    out << "\n";
  }

  // member: map_coverage_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_coverage_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.map_coverage_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotMetrics & msg, bool use_flow_style = false)
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
  const underground_world::msg::RobotMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::msg::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::msg::RobotMetrics & msg)
{
  return underground_world::msg::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::msg::RobotMetrics>()
{
  return "underground_world::msg::RobotMetrics";
}

template<>
inline const char * name<underground_world::msg::RobotMetrics>()
{
  return "underground_world/msg/RobotMetrics";
}

template<>
struct has_fixed_size<underground_world::msg::RobotMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<underground_world::msg::RobotMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<underground_world::msg::RobotMetrics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__TRAITS_HPP_
