// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from underground_world:srv/PayloadTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/srv/payload_trigger.hpp"


#ifndef UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__TRAITS_HPP_
#define UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "underground_world/srv/detail/payload_trigger__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace underground_world
{

namespace srv
{

inline void to_flow_style_yaml(
  const PayloadTrigger_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: contact_id
  {
    out << "contact_id: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_id, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PayloadTrigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: contact_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_id: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_id, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PayloadTrigger_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace underground_world

namespace rosidl_generator_traits
{

[[deprecated("use underground_world::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const underground_world::srv::PayloadTrigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::srv::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::srv::PayloadTrigger_Request & msg)
{
  return underground_world::srv::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::srv::PayloadTrigger_Request>()
{
  return "underground_world::srv::PayloadTrigger_Request";
}

template<>
inline const char * name<underground_world::srv::PayloadTrigger_Request>()
{
  return "underground_world/srv/PayloadTrigger_Request";
}

template<>
struct has_fixed_size<underground_world::srv::PayloadTrigger_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<underground_world::srv::PayloadTrigger_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<underground_world::srv::PayloadTrigger_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace underground_world
{

namespace srv
{

inline void to_flow_style_yaml(
  const PayloadTrigger_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PayloadTrigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PayloadTrigger_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace underground_world

namespace rosidl_generator_traits
{

[[deprecated("use underground_world::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const underground_world::srv::PayloadTrigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::srv::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::srv::PayloadTrigger_Response & msg)
{
  return underground_world::srv::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::srv::PayloadTrigger_Response>()
{
  return "underground_world::srv::PayloadTrigger_Response";
}

template<>
inline const char * name<underground_world::srv::PayloadTrigger_Response>()
{
  return "underground_world/srv/PayloadTrigger_Response";
}

template<>
struct has_fixed_size<underground_world::srv::PayloadTrigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<underground_world::srv::PayloadTrigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<underground_world::srv::PayloadTrigger_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace underground_world
{

namespace srv
{

inline void to_flow_style_yaml(
  const PayloadTrigger_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PayloadTrigger_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PayloadTrigger_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace underground_world

namespace rosidl_generator_traits
{

[[deprecated("use underground_world::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const underground_world::srv::PayloadTrigger_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  underground_world::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use underground_world::srv::to_yaml() instead")]]
inline std::string to_yaml(const underground_world::srv::PayloadTrigger_Event & msg)
{
  return underground_world::srv::to_yaml(msg);
}

template<>
inline const char * data_type<underground_world::srv::PayloadTrigger_Event>()
{
  return "underground_world::srv::PayloadTrigger_Event";
}

template<>
inline const char * name<underground_world::srv::PayloadTrigger_Event>()
{
  return "underground_world/srv/PayloadTrigger_Event";
}

template<>
struct has_fixed_size<underground_world::srv::PayloadTrigger_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<underground_world::srv::PayloadTrigger_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<underground_world::srv::PayloadTrigger_Request>::value && has_bounded_size<underground_world::srv::PayloadTrigger_Response>::value> {};

template<>
struct is_message<underground_world::srv::PayloadTrigger_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<underground_world::srv::PayloadTrigger>()
{
  return "underground_world::srv::PayloadTrigger";
}

template<>
inline const char * name<underground_world::srv::PayloadTrigger>()
{
  return "underground_world/srv/PayloadTrigger";
}

template<>
struct has_fixed_size<underground_world::srv::PayloadTrigger>
  : std::integral_constant<
    bool,
    has_fixed_size<underground_world::srv::PayloadTrigger_Request>::value &&
    has_fixed_size<underground_world::srv::PayloadTrigger_Response>::value
  >
{
};

template<>
struct has_bounded_size<underground_world::srv::PayloadTrigger>
  : std::integral_constant<
    bool,
    has_bounded_size<underground_world::srv::PayloadTrigger_Request>::value &&
    has_bounded_size<underground_world::srv::PayloadTrigger_Response>::value
  >
{
};

template<>
struct is_service<underground_world::srv::PayloadTrigger>
  : std::true_type
{
};

template<>
struct is_service_request<underground_world::srv::PayloadTrigger_Request>
  : std::true_type
{
};

template<>
struct is_service_response<underground_world::srv::PayloadTrigger_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UNDERGROUND_WORLD__SRV__DETAIL__PAYLOAD_TRIGGER__TRAITS_HPP_
