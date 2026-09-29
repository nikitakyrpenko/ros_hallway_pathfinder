// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from underground_world:msg/StudentStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/student_status.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__BUILDER_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "underground_world/msg/detail/student_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace underground_world
{

namespace msg
{

namespace builder
{

class Init_StudentStatus_state
{
public:
  Init_StudentStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::underground_world::msg::StudentStatus state(::underground_world::msg::StudentStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::msg::StudentStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::msg::StudentStatus>()
{
  return underground_world::msg::builder::Init_StudentStatus_state();
}

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__BUILDER_HPP_
