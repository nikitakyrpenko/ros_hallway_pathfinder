// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from underground_world:msg/RobotResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/robot_result.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__BUILDER_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "underground_world/msg/detail/robot_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace underground_world
{

namespace msg
{

namespace builder
{

class Init_RobotResult_max_steps
{
public:
  explicit Init_RobotResult_max_steps(::underground_world::msg::RobotResult & msg)
  : msg_(msg)
  {}
  ::underground_world::msg::RobotResult max_steps(::underground_world::msg::RobotResult::_max_steps_type arg)
  {
    msg_.max_steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::msg::RobotResult msg_;
};

class Init_RobotResult_steps_taken
{
public:
  explicit Init_RobotResult_steps_taken(::underground_world::msg::RobotResult & msg)
  : msg_(msg)
  {}
  Init_RobotResult_max_steps steps_taken(::underground_world::msg::RobotResult::_steps_taken_type arg)
  {
    msg_.steps_taken = std::move(arg);
    return Init_RobotResult_max_steps(msg_);
  }

private:
  ::underground_world::msg::RobotResult msg_;
};

class Init_RobotResult_reason
{
public:
  explicit Init_RobotResult_reason(::underground_world::msg::RobotResult & msg)
  : msg_(msg)
  {}
  Init_RobotResult_steps_taken reason(::underground_world::msg::RobotResult::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_RobotResult_steps_taken(msg_);
  }

private:
  ::underground_world::msg::RobotResult msg_;
};

class Init_RobotResult_mission_result
{
public:
  explicit Init_RobotResult_mission_result(::underground_world::msg::RobotResult & msg)
  : msg_(msg)
  {}
  Init_RobotResult_reason mission_result(::underground_world::msg::RobotResult::_mission_result_type arg)
  {
    msg_.mission_result = std::move(arg);
    return Init_RobotResult_reason(msg_);
  }

private:
  ::underground_world::msg::RobotResult msg_;
};

class Init_RobotResult_scenario_name
{
public:
  Init_RobotResult_scenario_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotResult_mission_result scenario_name(::underground_world::msg::RobotResult::_scenario_name_type arg)
  {
    msg_.scenario_name = std::move(arg);
    return Init_RobotResult_mission_result(msg_);
  }

private:
  ::underground_world::msg::RobotResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::msg::RobotResult>()
{
  return underground_world::msg::builder::Init_RobotResult_scenario_name();
}

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__BUILDER_HPP_
