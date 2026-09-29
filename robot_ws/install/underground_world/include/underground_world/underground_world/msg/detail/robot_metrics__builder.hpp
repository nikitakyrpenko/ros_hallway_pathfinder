// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from underground_world:msg/RobotMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/robot_metrics.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__BUILDER_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "underground_world/msg/detail/robot_metrics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace underground_world
{

namespace msg
{

namespace builder
{

class Init_RobotMetrics_map_coverage_percent
{
public:
  explicit Init_RobotMetrics_map_coverage_percent(::underground_world::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  ::underground_world::msg::RobotMetrics map_coverage_percent(::underground_world::msg::RobotMetrics::_map_coverage_percent_type arg)
  {
    msg_.map_coverage_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_unique_cells_seen
{
public:
  explicit Init_RobotMetrics_unique_cells_seen(::underground_world::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  Init_RobotMetrics_map_coverage_percent unique_cells_seen(::underground_world::msg::RobotMetrics::_unique_cells_seen_type arg)
  {
    msg_.unique_cells_seen = std::move(arg);
    return Init_RobotMetrics_map_coverage_percent(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_duplicate_triggers
{
public:
  explicit Init_RobotMetrics_duplicate_triggers(::underground_world::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  Init_RobotMetrics_unique_cells_seen duplicate_triggers(::underground_world::msg::RobotMetrics::_duplicate_triggers_type arg)
  {
    msg_.duplicate_triggers = std::move(arg);
    return Init_RobotMetrics_unique_cells_seen(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_invalid_triggers
{
public:
  explicit Init_RobotMetrics_invalid_triggers(::underground_world::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  Init_RobotMetrics_duplicate_triggers invalid_triggers(::underground_world::msg::RobotMetrics::_invalid_triggers_type arg)
  {
    msg_.invalid_triggers = std::move(arg);
    return Init_RobotMetrics_duplicate_triggers(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_contacts_down
{
public:
  explicit Init_RobotMetrics_contacts_down(::underground_world::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  Init_RobotMetrics_invalid_triggers contacts_down(::underground_world::msg::RobotMetrics::_contacts_down_type arg)
  {
    msg_.contacts_down = std::move(arg);
    return Init_RobotMetrics_invalid_triggers(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_contacts_seen
{
public:
  explicit Init_RobotMetrics_contacts_seen(::underground_world::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  Init_RobotMetrics_contacts_down contacts_seen(::underground_world::msg::RobotMetrics::_contacts_seen_type arg)
  {
    msg_.contacts_seen = std::move(arg);
    return Init_RobotMetrics_contacts_down(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_invalid_moves
{
public:
  explicit Init_RobotMetrics_invalid_moves(::underground_world::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  Init_RobotMetrics_contacts_seen invalid_moves(::underground_world::msg::RobotMetrics::_invalid_moves_type arg)
  {
    msg_.invalid_moves = std::move(arg);
    return Init_RobotMetrics_contacts_seen(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_steps_taken
{
public:
  explicit Init_RobotMetrics_steps_taken(::underground_world::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  Init_RobotMetrics_invalid_moves steps_taken(::underground_world::msg::RobotMetrics::_steps_taken_type arg)
  {
    msg_.steps_taken = std::move(arg);
    return Init_RobotMetrics_invalid_moves(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_scenario_name
{
public:
  Init_RobotMetrics_scenario_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMetrics_steps_taken scenario_name(::underground_world::msg::RobotMetrics::_scenario_name_type arg)
  {
    msg_.scenario_name = std::move(arg);
    return Init_RobotMetrics_steps_taken(msg_);
  }

private:
  ::underground_world::msg::RobotMetrics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::msg::RobotMetrics>()
{
  return underground_world::msg::builder::Init_RobotMetrics_scenario_name();
}

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__BUILDER_HPP_
