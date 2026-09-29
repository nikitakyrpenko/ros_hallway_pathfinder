// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from underground_world:msg/MoveCommand.idl
// generated code does not contain a copyright notice

#include "underground_world/msg/detail/move_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__msg__MoveCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xf5, 0x01, 0x88, 0x2a, 0x4b, 0x1a, 0x0c,
      0x35, 0xed, 0x5f, 0x11, 0x05, 0x37, 0xf3, 0x30,
      0x83, 0xf0, 0xee, 0x87, 0x88, 0x64, 0x4a, 0x5b,
      0x85, 0xc4, 0xfb, 0xa1, 0xf9, 0x41, 0x6e, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char underground_world__msg__MoveCommand__TYPE_NAME[] = "underground_world/msg/MoveCommand";

// Define type names, field names, and default values
static char underground_world__msg__MoveCommand__FIELD_NAME__direction[] = "direction";

static rosidl_runtime_c__type_description__Field underground_world__msg__MoveCommand__FIELDS[] = {
  {
    {underground_world__msg__MoveCommand__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__msg__MoveCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__msg__MoveCommand__TYPE_NAME, 33, 33},
      {underground_world__msg__MoveCommand__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 UP=0\n"
  "uint8 DOWN=1\n"
  "uint8 LEFT=2\n"
  "uint8 RIGHT=3\n"
  "uint8 direction";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
underground_world__msg__MoveCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__msg__MoveCommand__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 67, 67},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__msg__MoveCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__msg__MoveCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
