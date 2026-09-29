// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice

#include "underground_world/msg/detail/local_scan__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__msg__LocalScan__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0x71, 0x67, 0xab, 0xb5, 0xbb, 0xe7, 0xb0,
      0xc0, 0x77, 0x4a, 0xad, 0xf0, 0xf5, 0x0f, 0xea,
      0x6b, 0x36, 0xfa, 0xbe, 0x7a, 0x57, 0x91, 0x05,
      0x5f, 0x4e, 0x33, 0x73, 0xda, 0x46, 0xb2, 0xd2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "underground_world/msg/detail/cell_observation__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t underground_world__msg__CellObservation__EXPECTED_HASH = {1, {
    0xe2, 0x70, 0xa0, 0x15, 0x8d, 0x7d, 0x88, 0xaf,
    0x03, 0x84, 0xf9, 0x1c, 0x73, 0x39, 0x8c, 0x66,
    0x56, 0x5b, 0x7e, 0x6a, 0x3b, 0x3f, 0xbc, 0x2f,
    0x85, 0x20, 0x5e, 0x3d, 0x3a, 0x2c, 0x70, 0x70,
  }};
#endif

static char underground_world__msg__LocalScan__TYPE_NAME[] = "underground_world/msg/LocalScan";
static char underground_world__msg__CellObservation__TYPE_NAME[] = "underground_world/msg/CellObservation";

// Define type names, field names, and default values
static char underground_world__msg__LocalScan__FIELD_NAME__scenario_name[] = "scenario_name";
static char underground_world__msg__LocalScan__FIELD_NAME__robot_x[] = "robot_x";
static char underground_world__msg__LocalScan__FIELD_NAME__robot_y[] = "robot_y";
static char underground_world__msg__LocalScan__FIELD_NAME__cells[] = "cells";

static rosidl_runtime_c__type_description__Field underground_world__msg__LocalScan__FIELDS[] = {
  {
    {underground_world__msg__LocalScan__FIELD_NAME__scenario_name, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__LocalScan__FIELD_NAME__robot_x, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__LocalScan__FIELD_NAME__robot_y, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__LocalScan__FIELD_NAME__cells, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {underground_world__msg__CellObservation__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription underground_world__msg__LocalScan__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {underground_world__msg__CellObservation__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__msg__LocalScan__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__msg__LocalScan__TYPE_NAME, 31, 31},
      {underground_world__msg__LocalScan__FIELDS, 4, 4},
    },
    {underground_world__msg__LocalScan__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&underground_world__msg__CellObservation__EXPECTED_HASH, underground_world__msg__CellObservation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = underground_world__msg__CellObservation__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string scenario_name\n"
  "int32 robot_x\n"
  "int32 robot_y\n"
  "CellObservation[] cells";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
underground_world__msg__LocalScan__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__msg__LocalScan__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 73, 73},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__msg__LocalScan__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__msg__LocalScan__get_individual_type_description_source(NULL),
    sources[1] = *underground_world__msg__CellObservation__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
