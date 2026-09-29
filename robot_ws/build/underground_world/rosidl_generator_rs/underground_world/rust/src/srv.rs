#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to underground_world__srv__PayloadTrigger_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadTrigger_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: i32,

}



impl Default for PayloadTrigger_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PayloadTrigger_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadTrigger_Request {
  type RmwMsg = super::srv::rmw::PayloadTrigger_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        contact_id: msg.contact_id,
        x: msg.x,
        y: msg.y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      contact_id: msg.contact_id,
      x: msg.x,
      y: msg.y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      contact_id: msg.contact_id,
      x: msg.x,
      y: msg.y,
    }
  }
}


// Corresponds to underground_world__srv__PayloadTrigger_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadTrigger_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for PayloadTrigger_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PayloadTrigger_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadTrigger_Response {
  type RmwMsg = super::srv::rmw::PayloadTrigger_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      reason: msg.reason.to_string(),
    }
  }
}






#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__underground_world__srv__PayloadTrigger() -> *const std::ffi::c_void;
}

// Corresponds to underground_world__srv__PayloadTrigger
#[allow(missing_docs, non_camel_case_types)]
pub struct PayloadTrigger;

impl rosidl_runtime_rs::Service for PayloadTrigger {
    type Request = PayloadTrigger_Request;
    type Response = PayloadTrigger_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__underground_world__srv__PayloadTrigger() }
    }
}


