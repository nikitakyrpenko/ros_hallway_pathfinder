// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/cell_observation.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__STRUCT_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__underground_world__msg__CellObservation __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__msg__CellObservation __declspec(deprecated)
#endif

namespace underground_world
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CellObservation_
{
  using Type = CellObservation_<ContainerAllocator>;

  explicit CellObservation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->cell_type = "";
      this->contact_id = 0l;
    }
  }

  explicit CellObservation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cell_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->cell_type = "";
      this->contact_id = 0l;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _cell_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cell_type_type cell_type;
  using _contact_id_type =
    int32_t;
  _contact_id_type contact_id;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__cell_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cell_type = _arg;
    return *this;
  }
  Type & set__contact_id(
    const int32_t & _arg)
  {
    this->contact_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    underground_world::msg::CellObservation_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::msg::CellObservation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::msg::CellObservation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::msg::CellObservation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::CellObservation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::CellObservation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::CellObservation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::CellObservation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::msg::CellObservation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::msg::CellObservation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__msg__CellObservation
    std::shared_ptr<underground_world::msg::CellObservation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__msg__CellObservation
    std::shared_ptr<underground_world::msg::CellObservation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CellObservation_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->cell_type != other.cell_type) {
      return false;
    }
    if (this->contact_id != other.contact_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CellObservation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CellObservation_

// alias to use template instance with default allocator
using CellObservation =
  underground_world::msg::CellObservation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__CELL_OBSERVATION__STRUCT_HPP_
