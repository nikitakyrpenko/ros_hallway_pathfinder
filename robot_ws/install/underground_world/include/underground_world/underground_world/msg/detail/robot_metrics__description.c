// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from underground_world:msg/RobotMetrics.idl
// generated code does not contain a copyright notice

#include "underground_world/msg/detail/robot_metrics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__msg__RobotMetrics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xd3, 0xc5, 0x75, 0x7d, 0x26, 0xb2, 0xa2,
      0x0b, 0xbe, 0xae, 0xc4, 0x4a, 0x3b, 0xd3, 0x78,
      0x68, 0x41, 0xf5, 0xb5, 0xad, 0x5e, 0xfc, 0xfc,
      0xa4, 0xa1, 0x58, 0x17, 0xe5, 0x14, 0x39, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char underground_world__msg__RobotMetrics__TYPE_NAME[] = "underground_world/msg/RobotMetrics";

// Define type names, field names, and default values
static char underground_world__msg__RobotMetrics__FIELD_NAME__scenario_name[] = "scenario_name";
static char underground_world__msg__RobotMetrics__FIELD_NAME__steps_taken[] = "steps_taken";
static char underground_world__msg__RobotMetrics__FIELD_NAME__invalid_moves[] = "invalid_moves";
static char underground_world__msg__RobotMetrics__FIELD_NAME__contacts_seen[] = "contacts_seen";
static char underground_world__msg__RobotMetrics__FIELD_NAME__contacts_down[] = "contacts_down";
static char underground_world__msg__RobotMetrics__FIELD_NAME__invalid_triggers[] = "invalid_triggers";
static char underground_world__msg__RobotMetrics__FIELD_NAME__duplicate_triggers[] = "duplicate_triggers";
static char underground_world__msg__RobotMetrics__FIELD_NAME__unique_cells_seen[] = "unique_cells_seen";
static char underground_world__msg__RobotMetrics__FIELD_NAME__map_coverage_percent[] = "map_coverage_percent";

static rosidl_runtime_c__type_description__Field underground_world__msg__RobotMetrics__FIELDS[] = {
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__scenario_name, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__steps_taken, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__invalid_moves, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__contacts_seen, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__contacts_down, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__invalid_triggers, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__duplicate_triggers, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__unique_cells_seen, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotMetrics__FIELD_NAME__map_coverage_percent, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__msg__RobotMetrics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__msg__RobotMetrics__TYPE_NAME, 34, 34},
      {underground_world__msg__RobotMetrics__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string scenario_name\n"
  "uint32 steps_taken\n"
  "uint32 invalid_moves\n"
  "uint32 contacts_seen\n"
  "uint32 contacts_down\n"
  "uint32 invalid_triggers\n"
  "uint32 duplicate_triggers\n"
  "uint32 unique_cells_seen\n"
  "float32 map_coverage_percent";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
underground_world__msg__RobotMetrics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__msg__RobotMetrics__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 207, 207},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__msg__RobotMetrics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__msg__RobotMetrics__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
