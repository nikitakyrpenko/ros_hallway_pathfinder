// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from underground_world:msg/MoveCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/move_command.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__STRUCT_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__underground_world__msg__MoveCommand __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__msg__MoveCommand __declspec(deprecated)
#endif

namespace underground_world
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_
{
  using Type = MoveCommand_<ContainerAllocator>;

  explicit MoveCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
    }
  }

  explicit MoveCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
    }
  }

  // field types and members
  using _direction_type =
    uint8_t;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UP =
    0u;
  static constexpr uint8_t DOWN =
    1u;
  static constexpr uint8_t LEFT =
    2u;
  static constexpr uint8_t RIGHT =
    3u;

  // pointer types
  using RawPtr =
    underground_world::msg::MoveCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::msg::MoveCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::msg::MoveCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::msg::MoveCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::MoveCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::MoveCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::MoveCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::MoveCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::msg::MoveCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::msg::MoveCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__msg__MoveCommand
    std::shared_ptr<underground_world::msg::MoveCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__msg__MoveCommand
    std::shared_ptr<underground_world::msg::MoveCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_

// alias to use template instance with default allocator
using MoveCommand =
  underground_world::msg::MoveCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MoveCommand_<ContainerAllocator>::UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MoveCommand_<ContainerAllocator>::DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MoveCommand_<ContainerAllocator>::LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MoveCommand_<ContainerAllocator>::RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__MOVE_COMMAND__STRUCT_HPP_
