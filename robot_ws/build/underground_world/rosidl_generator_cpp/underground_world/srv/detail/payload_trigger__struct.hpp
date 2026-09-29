// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from underground_world:srv/PayloadTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/srv/payload_trigger.hpp"


#ifndef UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__STRUCT_HPP_
#define UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__underground_world__srv__PayloadTrigger_Request __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__srv__PayloadTrigger_Request __declspec(deprecated)
#endif

namespace underground_world
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PayloadTrigger_Request_
{
  using Type = PayloadTrigger_Request_<ContainerAllocator>;

  explicit PayloadTrigger_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->contact_id = 0l;
      this->x = 0l;
      this->y = 0l;
    }
  }

  explicit PayloadTrigger_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->contact_id = 0l;
      this->x = 0l;
      this->y = 0l;
    }
  }

  // field types and members
  using _contact_id_type =
    int32_t;
  _contact_id_type contact_id;
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__contact_id(
    const int32_t & _arg)
  {
    this->contact_id = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    underground_world::srv::PayloadTrigger_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::srv::PayloadTrigger_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__srv__PayloadTrigger_Request
    std::shared_ptr<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__srv__PayloadTrigger_Request
    std::shared_ptr<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PayloadTrigger_Request_ & other) const
  {
    if (this->contact_id != other.contact_id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const PayloadTrigger_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PayloadTrigger_Request_

// alias to use template instance with default allocator
using PayloadTrigger_Request =
  underground_world::srv::PayloadTrigger_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace underground_world


#ifndef _WIN32
# define DEPRECATED__underground_world__srv__PayloadTrigger_Response __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__srv__PayloadTrigger_Response __declspec(deprecated)
#endif

namespace underground_world
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PayloadTrigger_Response_
{
  using Type = PayloadTrigger_Response_<ContainerAllocator>;

  explicit PayloadTrigger_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->reason = "";
    }
  }

  explicit PayloadTrigger_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->reason = "";
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    underground_world::srv::PayloadTrigger_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::srv::PayloadTrigger_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__srv__PayloadTrigger_Response
    std::shared_ptr<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__srv__PayloadTrigger_Response
    std::shared_ptr<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PayloadTrigger_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const PayloadTrigger_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PayloadTrigger_Response_

// alias to use template instance with default allocator
using PayloadTrigger_Response =
  underground_world::srv::PayloadTrigger_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace underground_world


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__underground_world__srv__PayloadTrigger_Event __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__srv__PayloadTrigger_Event __declspec(deprecated)
#endif

namespace underground_world
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PayloadTrigger_Event_
{
  using Type = PayloadTrigger_Event_<ContainerAllocator>;

  explicit PayloadTrigger_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PayloadTrigger_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<underground_world::srv::PayloadTrigger_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<underground_world::srv::PayloadTrigger_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    underground_world::srv::PayloadTrigger_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::srv::PayloadTrigger_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::srv::PayloadTrigger_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::srv::PayloadTrigger_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::srv::PayloadTrigger_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::srv::PayloadTrigger_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::srv::PayloadTrigger_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::srv::PayloadTrigger_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::srv::PayloadTrigger_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::srv::PayloadTrigger_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__srv__PayloadTrigger_Event
    std::shared_ptr<underground_world::srv::PayloadTrigger_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__srv__PayloadTrigger_Event
    std::shared_ptr<underground_world::srv::PayloadTrigger_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PayloadTrigger_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PayloadTrigger_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PayloadTrigger_Event_

// alias to use template instance with default allocator
using PayloadTrigger_Event =
  underground_world::srv::PayloadTrigger_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace underground_world

namespace underground_world
{

namespace srv
{

struct PayloadTrigger
{
  using Request = underground_world::srv::PayloadTrigger_Request;
  using Response = underground_world::srv::PayloadTrigger_Response;
  using Event = underground_world::srv::PayloadTrigger_Event;
};

}  // namespace srv

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__STRUCT_HPP_
