// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from underground_world:msg/EnemyDown.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/enemy_down.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__BUILDER_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "underground_world/msg/detail/enemy_down__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace underground_world
{

namespace msg
{

namespace builder
{

class Init_EnemyDown_y
{
public:
  explicit Init_EnemyDown_y(::underground_world::msg::EnemyDown & msg)
  : msg_(msg)
  {}
  ::underground_world::msg::EnemyDown y(::underground_world::msg::EnemyDown::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::msg::EnemyDown msg_;
};

class Init_EnemyDown_x
{
public:
  explicit Init_EnemyDown_x(::underground_world::msg::EnemyDown & msg)
  : msg_(msg)
  {}
  Init_EnemyDown_y x(::underground_world::msg::EnemyDown::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EnemyDown_y(msg_);
  }

private:
  ::underground_world::msg::EnemyDown msg_;
};

class Init_EnemyDown_contact_id
{
public:
  Init_EnemyDown_contact_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnemyDown_x contact_id(::underground_world::msg::EnemyDown::_contact_id_type arg)
  {
    msg_.contact_id = std::move(arg);
    return Init_EnemyDown_x(msg_);
  }

private:
  ::underground_world::msg::EnemyDown msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::msg::EnemyDown>()
{
  return underground_world::msg::builder::Init_EnemyDown_contact_id();
}

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ENEMY_DOWN__BUILDER_HPP_
