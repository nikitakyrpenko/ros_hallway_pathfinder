// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from underground_world:msg/RobotResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/robot_result.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__TRAITS_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "underground_world/msg/detail/robot_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace underground_world
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: scenario_name
  {
    out << "scenario_name: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario_name, out);
    out << ", ";
  }

  // member: mission_result
  {
    out << "mission_result: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_result, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << ", ";
  }

  // member: steps_taken
  {
    out << "steps_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.steps_taken, out);
    out << ", ";
  }

  // member: max_steps
  {
    out << "max_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.max_steps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotResult & msg,
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

  // member: mission_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_result: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_result, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
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

  // member: max_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.max_steps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotResult & msg, bool use_flow_style = false)
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
  const underground_world::msg::RobotResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::msg::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::msg::RobotResult & msg)
{
  return underground_world::msg::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::msg::RobotResult>()
{
  return "underground_world::msg::RobotResult";
}

template<>
inline const char * name<underground_world::msg::RobotResult>()
{
  return "underground_world/msg/RobotResult";
}

template<>
struct has_fixed_size<underground_world::msg::RobotResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<underground_world::msg::RobotResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<underground_world::msg::RobotResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__TRAITS_HPP_
