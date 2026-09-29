#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__srv__PayloadTrigger_Request() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__srv__PayloadTrigger_Request__init(msg: *mut PayloadTrigger_Request) -> bool;
    fn underground_world__srv__PayloadTrigger_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadTrigger_Request>, size: usize) -> bool;
    fn underground_world__srv__PayloadTrigger_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadTrigger_Request>);
    fn underground_world__srv__PayloadTrigger_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadTrigger_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadTrigger_Request>) -> bool;
}

// Corresponds to underground_world__srv__PayloadTrigger_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__srv__PayloadTrigger_Request__init(&mut msg as *mut _) {
        panic!("Call to underground_world__srv__PayloadTrigger_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadTrigger_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__srv__PayloadTrigger_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__srv__PayloadTrigger_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__srv__PayloadTrigger_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadTrigger_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadTrigger_Request where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/srv/PayloadTrigger_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__srv__PayloadTrigger_Request() }
  }
}


#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__srv__PayloadTrigger_Response() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__srv__PayloadTrigger_Response__init(msg: *mut PayloadTrigger_Response) -> bool;
    fn underground_world__srv__PayloadTrigger_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadTrigger_Response>, size: usize) -> bool;
    fn underground_world__srv__PayloadTrigger_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadTrigger_Response>);
    fn underground_world__srv__PayloadTrigger_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadTrigger_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadTrigger_Response>) -> bool;
}

// Corresponds to underground_world__srv__PayloadTrigger_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadTrigger_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,

}



impl Default for PayloadTrigger_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__srv__PayloadTrigger_Response__init(&mut msg as *mut _) {
        panic!("Call to underground_world__srv__PayloadTrigger_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadTrigger_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__srv__PayloadTrigger_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__srv__PayloadTrigger_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__srv__PayloadTrigger_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadTrigger_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadTrigger_Response where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/srv/PayloadTrigger_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__srv__PayloadTrigger_Response() }
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


