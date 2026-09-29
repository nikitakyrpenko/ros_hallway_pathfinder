// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from underground_world:srv/PayloadTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/srv/payload_trigger.hpp"


#ifndef UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__BUILDER_HPP_
#define UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "underground_world/srv/detail/payload_trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace underground_world
{

namespace srv
{

namespace builder
{

class Init_PayloadTrigger_Request_y
{
public:
  explicit Init_PayloadTrigger_Request_y(::underground_world::srv::PayloadTrigger_Request & msg)
  : msg_(msg)
  {}
  ::underground_world::srv::PayloadTrigger_Request y(::underground_world::srv::PayloadTrigger_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::srv::PayloadTrigger_Request msg_;
};

class Init_PayloadTrigger_Request_x
{
public:
  explicit Init_PayloadTrigger_Request_x(::underground_world::srv::PayloadTrigger_Request & msg)
  : msg_(msg)
  {}
  Init_PayloadTrigger_Request_y x(::underground_world::srv::PayloadTrigger_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PayloadTrigger_Request_y(msg_);
  }

private:
  ::underground_world::srv::PayloadTrigger_Request msg_;
};

class Init_PayloadTrigger_Request_contact_id
{
public:
  Init_PayloadTrigger_Request_contact_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadTrigger_Request_x contact_id(::underground_world::srv::PayloadTrigger_Request::_contact_id_type arg)
  {
    msg_.contact_id = std::move(arg);
    return Init_PayloadTrigger_Request_x(msg_);
  }

private:
  ::underground_world::srv::PayloadTrigger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::srv::PayloadTrigger_Request>()
{
  return underground_world::srv::builder::Init_PayloadTrigger_Request_contact_id();
}

}  // namespace underground_world


namespace underground_world
{

namespace srv
{

namespace builder
{

class Init_PayloadTrigger_Response_reason
{
public:
  explicit Init_PayloadTrigger_Response_reason(::underground_world::srv::PayloadTrigger_Response & msg)
  : msg_(msg)
  {}
  ::underground_world::srv::PayloadTrigger_Response reason(::underground_world::srv::PayloadTrigger_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::srv::PayloadTrigger_Response msg_;
};

class Init_PayloadTrigger_Response_accepted
{
public:
  Init_PayloadTrigger_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadTrigger_Response_reason accepted(::underground_world::srv::PayloadTrigger_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PayloadTrigger_Response_reason(msg_);
  }

private:
  ::underground_world::srv::PayloadTrigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::srv::PayloadTrigger_Response>()
{
  return underground_world::srv::builder::Init_PayloadTrigger_Response_accepted();
}

}  // namespace underground_world


namespace underground_world
{

namespace srv
{

namespace builder
{

class Init_PayloadTrigger_Event_response
{
public:
  explicit Init_PayloadTrigger_Event_response(::underground_world::srv::PayloadTrigger_Event & msg)
  : msg_(msg)
  {}
  ::underground_world::srv::PayloadTrigger_Event response(::underground_world::srv::PayloadTrigger_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::underground_world::srv::PayloadTrigger_Event msg_;
};

class Init_PayloadTrigger_Event_request
{
public:
  explicit Init_PayloadTrigger_Event_request(::underground_world::srv::PayloadTrigger_Event & msg)
  : msg_(msg)
  {}
  Init_PayloadTrigger_Event_response request(::underground_world::srv::PayloadTrigger_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PayloadTrigger_Event_response(msg_);
  }

private:
  ::underground_world::srv::PayloadTrigger_Event msg_;
};

class Init_PayloadTrigger_Event_info
{
public:
  Init_PayloadTrigger_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadTrigger_Event_request info(::underground_world::srv::PayloadTrigger_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PayloadTrigger_Event_request(msg_);
  }

private:
  ::underground_world::srv::PayloadTrigger_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::underground_world::srv::PayloadTrigger_Event>()
{
  return underground_world::srv::builder::Init_PayloadTrigger_Event_info();
}

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__BUILDER_HPP_
