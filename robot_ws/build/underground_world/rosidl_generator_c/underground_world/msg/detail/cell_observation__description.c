// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice

#include "underground_world/msg/detail/cell_observation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__msg__CellObservation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0x70, 0xa0, 0x15, 0x8d, 0x7d, 0x88, 0xaf,
      0x03, 0x84, 0xf9, 0x1c, 0x73, 0x39, 0x8c, 0x66,
      0x56, 0x5b, 0x7e, 0x6a, 0x3b, 0x3f, 0xbc, 0x2f,
      0x85, 0x20, 0x5e, 0x3d, 0x3a, 0x2c, 0x70, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char underground_world__msg__CellObservation__TYPE_NAME[] = "underground_world/msg/CellObservation";

// Define type names, field names, and default values
static char underground_world__msg__CellObservation__FIELD_NAME__x[] = "x";
static char underground_world__msg__CellObservation__FIELD_NAME__y[] = "y";
static char underground_world__msg__CellObservation__FIELD_NAME__cell_type[] = "cell_type";
static char underground_world__msg__CellObservation__FIELD_NAME__contact_id[] = "contact_id";

static rosidl_runtime_c__type_description__Field underground_world__msg__CellObservation__FIELDS[] = {
  {
    {underground_world__msg__CellObservation__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__CellObservation__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__CellObservation__FIELD_NAME__cell_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__CellObservation__FIELD_NAME__contact_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__msg__CellObservation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__msg__CellObservation__TYPE_NAME, 37, 37},
      {underground_world__msg__CellObservation__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 x\n"
  "int32 y\n"
  "string cell_type\n"
  "int32 contact_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
underground_world__msg__CellObservation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__msg__CellObservation__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__msg__CellObservation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__msg__CellObservation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
