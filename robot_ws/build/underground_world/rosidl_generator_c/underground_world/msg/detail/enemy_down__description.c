// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from underground_world:msg/EnemyDown.idl
// generated code does not contain a copyright notice

#include "underground_world/msg/detail/enemy_down__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__msg__EnemyDown__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x64, 0x00, 0x0d, 0x3c, 0x1c, 0xfa, 0xcd,
      0x4d, 0xb4, 0x36, 0x5e, 0x76, 0xab, 0x78, 0x72,
      0xd8, 0x51, 0xa4, 0x01, 0xc5, 0x64, 0xca, 0x4b,
      0x44, 0x11, 0x04, 0x3f, 0x1e, 0x56, 0xde, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char underground_world__msg__EnemyDown__TYPE_NAME[] = "underground_world/msg/EnemyDown";

// Define type names, field names, and default values
static char underground_world__msg__EnemyDown__FIELD_NAME__contact_id[] = "contact_id";
static char underground_world__msg__EnemyDown__FIELD_NAME__x[] = "x";
static char underground_world__msg__EnemyDown__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field underground_world__msg__EnemyDown__FIELDS[] = {
  {
    {underground_world__msg__EnemyDown__FIELD_NAME__contact_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__EnemyDown__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__msg__EnemyDown__FIELD_NAME__y, 1, 1},
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
underground_world__msg__EnemyDown__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__msg__EnemyDown__TYPE_NAME, 31, 31},
      {underground_world__msg__EnemyDown__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 contact_id\n"
  "int32 x\n"
  "int32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
underground_world__msg__EnemyDown__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__msg__EnemyDown__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__msg__EnemyDown__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__msg__EnemyDown__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
