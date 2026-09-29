#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to underground_world__msg__CellObservation

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub cell_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_id: i32,

}



impl Default for CellObservation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CellObservation::default())
  }
}

impl rosidl_runtime_rs::Message for CellObservation {
  type RmwMsg = super::msg::rmw::CellObservation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        cell_type: msg.cell_type.as_str().into(),
        contact_id: msg.contact_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
        cell_type: msg.cell_type.as_str().into(),
      contact_id: msg.contact_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      cell_type: msg.cell_type.to_string(),
      contact_id: msg.contact_id,
    }
  }
}


// Corresponds to underground_world__msg__LocalScan

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LocalScan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub scenario_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cells: Vec<super::msg::CellObservation>,

}



impl Default for LocalScan {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LocalScan::default())
  }
}

impl rosidl_runtime_rs::Message for LocalScan {
  type RmwMsg = super::msg::rmw::LocalScan;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scenario_name: msg.scenario_name.as_str().into(),
        robot_x: msg.robot_x,
        robot_y: msg.robot_y,
        cells: msg.cells
          .into_iter()
          .map(|elem| super::msg::CellObservation::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scenario_name: msg.scenario_name.as_str().into(),
      robot_x: msg.robot_x,
      robot_y: msg.robot_y,
        cells: msg.cells
          .iter()
          .map(|elem| super::msg::CellObservation::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      scenario_name: msg.scenario_name.to_string(),
      robot_x: msg.robot_x,
      robot_y: msg.robot_y,
      cells: msg.cells
          .into_iter()
          .map(super::msg::CellObservation::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to underground_world__msg__MoveCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MoveCommand::default())
  }
}

impl rosidl_runtime_rs::Message for MoveCommand {
  type RmwMsg = super::msg::rmw::MoveCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        direction: msg.direction,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      direction: msg.direction,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      direction: msg.direction,
    }
  }
}


// Corresponds to underground_world__msg__EnemyDown

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnemyDown::default())
  }
}

impl rosidl_runtime_rs::Message for EnemyDown {
  type RmwMsg = super::msg::rmw::EnemyDown;

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


// Corresponds to underground_world__msg__RobotMetrics

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMetrics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub scenario_name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotMetrics::default())
  }
}

impl rosidl_runtime_rs::Message for RobotMetrics {
  type RmwMsg = super::msg::rmw::RobotMetrics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scenario_name: msg.scenario_name.as_str().into(),
        steps_taken: msg.steps_taken,
        invalid_moves: msg.invalid_moves,
        contacts_seen: msg.contacts_seen,
        contacts_down: msg.contacts_down,
        invalid_triggers: msg.invalid_triggers,
        duplicate_triggers: msg.duplicate_triggers,
        unique_cells_seen: msg.unique_cells_seen,
        map_coverage_percent: msg.map_coverage_percent,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scenario_name: msg.scenario_name.as_str().into(),
      steps_taken: msg.steps_taken,
      invalid_moves: msg.invalid_moves,
      contacts_seen: msg.contacts_seen,
      contacts_down: msg.contacts_down,
      invalid_triggers: msg.invalid_triggers,
      duplicate_triggers: msg.duplicate_triggers,
      unique_cells_seen: msg.unique_cells_seen,
      map_coverage_percent: msg.map_coverage_percent,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      scenario_name: msg.scenario_name.to_string(),
      steps_taken: msg.steps_taken,
      invalid_moves: msg.invalid_moves,
      contacts_seen: msg.contacts_seen,
      contacts_down: msg.contacts_down,
      invalid_triggers: msg.invalid_triggers,
      duplicate_triggers: msg.duplicate_triggers,
      unique_cells_seen: msg.unique_cells_seen,
      map_coverage_percent: msg.map_coverage_percent,
    }
  }
}


// Corresponds to underground_world__msg__RobotResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub scenario_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_result: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steps_taken: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_steps: u32,

}



impl Default for RobotResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotResult::default())
  }
}

impl rosidl_runtime_rs::Message for RobotResult {
  type RmwMsg = super::msg::rmw::RobotResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scenario_name: msg.scenario_name.as_str().into(),
        mission_result: msg.mission_result.as_str().into(),
        reason: msg.reason.as_str().into(),
        steps_taken: msg.steps_taken,
        max_steps: msg.max_steps,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scenario_name: msg.scenario_name.as_str().into(),
        mission_result: msg.mission_result.as_str().into(),
        reason: msg.reason.as_str().into(),
      steps_taken: msg.steps_taken,
      max_steps: msg.max_steps,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      scenario_name: msg.scenario_name.to_string(),
      mission_result: msg.mission_result.to_string(),
      reason: msg.reason.to_string(),
      steps_taken: msg.steps_taken,
      max_steps: msg.max_steps,
    }
  }
}


// Corresponds to underground_world__msg__StudentStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StudentStatus::default())
  }
}

impl rosidl_runtime_rs::Message for StudentStatus {
  type RmwMsg = super::msg::rmw::StudentStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state,
    }
  }
}


