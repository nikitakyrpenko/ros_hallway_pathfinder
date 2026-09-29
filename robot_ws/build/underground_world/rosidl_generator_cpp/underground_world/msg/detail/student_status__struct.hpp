// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from underground_world:msg/StudentStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/student_status.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__STRUCT_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__underground_world__msg__StudentStatus __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__msg__StudentStatus __declspec(deprecated)
#endif

namespace underground_world
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StudentStatus_
{
  using Type = StudentStatus_<ContainerAllocator>;

  explicit StudentStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit StudentStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EXPLORING =
    0u;
  static constexpr uint8_t ENGAGING =
    1u;
  static constexpr uint8_t RETURNING =
    2u;
  static constexpr uint8_t DONE =
    3u;
  static constexpr uint8_t FAILED =
    4u;

  // pointer types
  using RawPtr =
    underground_world::msg::StudentStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::msg::StudentStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::msg::StudentStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::msg::StudentStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::StudentStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::StudentStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::StudentStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::StudentStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::msg::StudentStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::msg::StudentStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__msg__StudentStatus
    std::shared_ptr<underground_world::msg::StudentStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__msg__StudentStatus
    std::shared_ptr<underground_world::msg::StudentStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StudentStatus_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const StudentStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StudentStatus_

// alias to use template instance with default allocator
using StudentStatus =
  underground_world::msg::StudentStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StudentStatus_<ContainerAllocator>::EXPLORING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StudentStatus_<ContainerAllocator>::ENGAGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StudentStatus_<ContainerAllocator>::RETURNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StudentStatus_<ContainerAllocator>::DONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StudentStatus_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__STUDENT_STATUS__STRUCT_HPP_
