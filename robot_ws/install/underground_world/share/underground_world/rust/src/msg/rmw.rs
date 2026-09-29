#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__CellObservation() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__msg__CellObservation__init(msg: *mut CellObservation) -> bool;
    fn underground_world__msg__CellObservation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CellObservation>, size: usize) -> bool;
    fn underground_world__msg__CellObservation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CellObservation>);
    fn underground_world__msg__CellObservation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CellObservation>, out_seq: *mut rosidl_runtime_rs::Sequence<CellObservation>) -> bool;
}

// Corresponds to underground_world__msg__CellObservation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CellObservation {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cell_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_id: i32,

}



impl Default for CellObservation {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__msg__CellObservation__init(&mut msg as *mut _) {
        panic!("Call to underground_world__msg__CellObservation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CellObservation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__CellObservation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__CellObservation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__CellObservation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CellObservation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CellObservation where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/msg/CellObservation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__CellObservation() }
  }
}


#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__LocalScan() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__msg__LocalScan__init(msg: *mut LocalScan) -> bool;
    fn underground_world__msg__LocalScan__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LocalScan>, size: usize) -> bool;
    fn underground_world__msg__LocalScan__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LocalScan>);
    fn underground_world__msg__LocalScan__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LocalScan>, out_seq: *mut rosidl_runtime_rs::Sequence<LocalScan>) -> bool;
}

// Corresponds to underground_world__msg__LocalScan
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LocalScan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub scenario_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cells: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CellObservation>,

}



impl Default for LocalScan {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__msg__LocalScan__init(&mut msg as *mut _) {
        panic!("Call to underground_world__msg__LocalScan__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LocalScan {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__LocalScan__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__LocalScan__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__LocalScan__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LocalScan {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LocalScan where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/msg/LocalScan";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__LocalScan() }
  }
}


#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__MoveCommand() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__msg__MoveCommand__init(msg: *mut MoveCommand) -> bool;
    fn underground_world__msg__MoveCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCommand>, size: usize) -> bool;
    fn underground_world__msg__MoveCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCommand>);
    fn underground_world__msg__MoveCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCommand>) -> bool;
}

// Corresponds to underground_world__msg__MoveCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub direction: u8,

}

impl MoveCommand {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UP: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOWN: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEFT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RIGHT: u8 = 3;

}


impl Default for MoveCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__msg__MoveCommand__init(&mut msg as *mut _) {
        panic!("Call to underground_world__msg__MoveCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__MoveCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__MoveCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__MoveCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCommand where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/msg/MoveCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__MoveCommand() }
  }
}


#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__EnemyDown() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__msg__EnemyDown__init(msg: *mut EnemyDown) -> bool;
    fn underground_world__msg__EnemyDown__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnemyDown>, size: usize) -> bool;
    fn underground_world__msg__EnemyDown__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnemyDown>);
    fn underground_world__msg__EnemyDown__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnemyDown>, out_seq: *mut rosidl_runtime_rs::Sequence<EnemyDown>) -> bool;
}

// Corresponds to underground_world__msg__EnemyDown
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnemyDown {

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



impl Default for EnemyDown {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__msg__EnemyDown__init(&mut msg as *mut _) {
        panic!("Call to underground_world__msg__EnemyDown__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnemyDown {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__EnemyDown__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__EnemyDown__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__EnemyDown__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnemyDown {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnemyDown where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/msg/EnemyDown";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__EnemyDown() }
  }
}


#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__RobotMetrics() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__msg__RobotMetrics__init(msg: *mut RobotMetrics) -> bool;
    fn underground_world__msg__RobotMetrics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotMetrics>, size: usize) -> bool;
    fn underground_world__msg__RobotMetrics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotMetrics>);
    fn underground_world__msg__RobotMetrics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotMetrics>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotMetrics>) -> bool;
}

// Corresponds to underground_world__msg__RobotMetrics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMetrics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub scenario_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steps_taken: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub invalid_moves: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contacts_seen: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contacts_down: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub invalid_triggers: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duplicate_triggers: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unique_cells_seen: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_coverage_percent: f32,

}



impl Default for RobotMetrics {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__msg__RobotMetrics__init(&mut msg as *mut _) {
        panic!("Call to underground_world__msg__RobotMetrics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotMetrics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__RobotMetrics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__RobotMetrics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__RobotMetrics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotMetrics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotMetrics where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/msg/RobotMetrics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__RobotMetrics() }
  }
}


#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__RobotResult() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__msg__RobotResult__init(msg: *mut RobotResult) -> bool;
    fn underground_world__msg__RobotResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotResult>, size: usize) -> bool;
    fn underground_world__msg__RobotResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotResult>);
    fn underground_world__msg__RobotResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotResult>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotResult>) -> bool;
}

// Corresponds to underground_world__msg__RobotResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub scenario_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_result: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steps_taken: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_steps: u32,

}



impl Default for RobotResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__msg__RobotResult__init(&mut msg as *mut _) {
        panic!("Call to underground_world__msg__RobotResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__RobotResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__RobotResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__RobotResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotResult where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/msg/RobotResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__RobotResult() }
  }
}


#[link(name = "underground_world__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__StudentStatus() -> *const std::ffi::c_void;
}

#[link(name = "underground_world__rosidl_generator_c")]
extern "C" {
    fn underground_world__msg__StudentStatus__init(msg: *mut StudentStatus) -> bool;
    fn underground_world__msg__StudentStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StudentStatus>, size: usize) -> bool;
    fn underground_world__msg__StudentStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StudentStatus>);
    fn underground_world__msg__StudentStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StudentStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<StudentStatus>) -> bool;
}

// Corresponds to underground_world__msg__StudentStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StudentStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,

}

impl StudentStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EXPLORING: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ENGAGING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RETURNING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DONE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: u8 = 4;

}


impl Default for StudentStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !underground_world__msg__StudentStatus__init(&mut msg as *mut _) {
        panic!("Call to underground_world__msg__StudentStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StudentStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__StudentStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__StudentStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { underground_world__msg__StudentStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StudentStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StudentStatus where Self: Sized {
  const TYPE_NAME: &'static str = "underground_world/msg/StudentStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__underground_world__msg__StudentStatus() }
  }
}


