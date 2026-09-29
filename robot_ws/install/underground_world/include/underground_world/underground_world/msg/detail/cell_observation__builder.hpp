// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/cell_observation.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__BUILDER_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "underground_world/msg/detail/cell_observation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace underground_world
{

namespace msg
{

namespace builder
{

class Init_CellObservation_contact_id
{
public:
  explicit Init_CellObservation_contact_id(::underground_world::msg::CellObservation & msg)
  : msg_(msg)
  {}
  ::underground_world::msg::CellObservation contact_id(::underground_world::msg::CellObservation::_contact_id_type arg)
  {
    msg_.contact_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::msg::CellObservation msg_;
};

class Init_CellObservation_cell_type
{
public:
  explicit Init_CellObservation_cell_type(::underground_world::msg::CellObservation & msg)
  : msg_(msg)
  {}
  Init_CellObservation_contact_id cell_type(::underground_world::msg::CellObservation::_cell_type_type arg)
  {
    msg_.cell_type = std::move(arg);
    return Init_CellObservation_contact_id(msg_);
  }

private:
  ::underground_world::msg::CellObservation msg_;
};

class Init_CellObservation_y
{
public:
  explicit Init_CellObservation_y(::underground_world::msg::CellObservation & msg)
  : msg_(msg)
  {}
  Init_CellObservation_cell_type y(::underground_world::msg::CellObservation::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CellObservation_cell_type(msg_);
  }

private:
  ::underground_world::msg::CellObservation msg_;
};

class Init_CellObservation_x
{
public:
  Init_CellObservation_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CellObservation_y x(::underground_world::msg::CellObservation::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CellObservation_y(msg_);
  }

private:
  ::underground_world::msg::CellObservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::msg::CellObservation>()
{
  return underground_world::msg::builder::Init_CellObservation_x();
}

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__BUILDER_HPP_
