// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from underground_world:msg/RobotResult.idl
// generated code does not contain a copyright notice

#include "underground_world/msg/detail/robot_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__msg__RobotResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x93, 0x57, 0x2d, 0xea, 0x9e, 0x45, 0x53,
      0x03, 0x97, 0xcf, 0x57, 0x4b, 0x79, 0x32, 0x00,
      0x1c, 0x69, 0x04, 0x13, 0xc6, 0x52, 0xa3, 0xfc,
      0xbd, 0xa2, 0x84, 0x6a, 0xa5, 0x2c, 0x88, 0x48,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char underground_world__msg__RobotResult__TYPE_NAME[] = "underground_world/msg/RobotResult";

// Define type names, field names, and default values
static char underground_world__msg__RobotResult__FIELD_NAME__scenario_name[] = "scenario_name";
static char underground_world__msg__RobotResult__FIELD_NAME__mission_result[] = "mission_result";
static char underground_world__msg__RobotResult__FIELD_NAME__reason[] = "reason";
static char underground_world__msg__RobotResult__FIELD_NAME__steps_taken[] = "steps_taken";
static char underground_world__msg__RobotResult__FIELD_NAME__max_steps[] = "max_steps";

static rosidl_runtime_c__type_description__Field underground_world__msg__RobotResult__FIELDS[] = {
  {
    {underground_world__msg__RobotResult__FIELD_NAME__scenario_name, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotResult__FIELD_NAME__mission_result, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotResult__FIELD_NAME__reason, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotResult__FIELD_NAME__steps_taken, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__RobotResult__FIELD_NAME__max_steps, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__msg__RobotResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__msg__RobotResult__TYPE_NAME, 33, 33},
      {underground_world__msg__RobotResult__FIELDS, 5, 5},
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
  "string mission_result\n"
  "string reason\n"
  "uint32 steps_taken\n"
  "uint32 max_steps";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
underground_world__msg__RobotResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__msg__RobotResult__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 93, 93},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__msg__RobotResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__msg__RobotResult__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
