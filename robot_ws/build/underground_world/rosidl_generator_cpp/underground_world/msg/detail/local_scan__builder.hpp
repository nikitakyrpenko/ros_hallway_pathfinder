// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/local_scan.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__BUILDER_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "underground_world/msg/detail/local_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace underground_world
{

namespace msg
{

namespace builder
{

class Init_LocalScan_cells
{
public:
  explicit Init_LocalScan_cells(::underground_world::msg::LocalScan & msg)
  : msg_(msg)
  {}
  ::underground_world::msg::LocalScan cells(::underground_world::msg::LocalScan::_cells_type arg)
  {
    msg_.cells = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::msg::LocalScan msg_;
};

class Init_LocalScan_robot_y
{
public:
  explicit Init_LocalScan_robot_y(::underground_world::msg::LocalScan & msg)
  : msg_(msg)
  {}
  Init_LocalScan_cells robot_y(::underground_world::msg::LocalScan::_robot_y_type arg)
  {
    msg_.robot_y = std::move(arg);
    return Init_LocalScan_cells(msg_);
  }

private:
  ::underground_world::msg::LocalScan msg_;
};

class Init_LocalScan_robot_x
{
public:
  explicit Init_LocalScan_robot_x(::underground_world::msg::LocalScan & msg)
  : msg_(msg)
  {}
  Init_LocalScan_robot_y robot_x(::underground_world::msg::LocalScan::_robot_x_type arg)
  {
    msg_.robot_x = std::move(arg);
    return Init_LocalScan_robot_y(msg_);
  }

private:
  ::underground_world::msg::LocalScan msg_;
};

class Init_LocalScan_scenario_name
{
public:
  Init_LocalScan_scenario_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalScan_robot_x scenario_name(::underground_world::msg::LocalScan::_scenario_name_type arg)
  {
    msg_.scenario_name = std::move(arg);
    return Init_LocalScan_robot_x(msg_);
  }

private:
  ::underground_world::msg::LocalScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::msg::LocalScan>()
{
  return underground_world::msg::builder::Init_LocalScan_scenario_name();
}

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__BUILDER_HPP_
