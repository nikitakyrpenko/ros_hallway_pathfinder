// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from underground_world:msg/MoveCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/move_command.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__BUILDER_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "underground_world/msg/detail/move_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace underground_world
{

namespace msg
{

namespace builder
{

class Init_MoveCommand_direction
{
public:
  Init_MoveCommand_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::underground_world::msg::MoveCommand direction(::underground_world::msg::MoveCommand::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::msg::MoveCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::msg::MoveCommand>()
{
  return underground_world::msg::builder::Init_MoveCommand_direction();
}

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__BUILDER_HPP_
