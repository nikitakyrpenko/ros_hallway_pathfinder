// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef UNDERGROUND_WORLD__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define UNDERGROUND_WORLD__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_underground_world __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_underground_world __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_underground_world __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_underground_world __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_underground_world
    #define ROSIDL_GENERATOR_CPP_PUBLIC_underground_world ROSIDL_GENERATOR_CPP_EXPORT_underground_world
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_underground_world ROSIDL_GENERATOR_CPP_IMPORT_underground_world
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_underground_world __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_underground_world
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_underground_world __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_underground_world
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // UNDERGROUND_WORLD__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
