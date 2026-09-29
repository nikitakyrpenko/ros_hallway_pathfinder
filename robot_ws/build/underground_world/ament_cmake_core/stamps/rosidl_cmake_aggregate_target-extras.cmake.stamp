# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target underground_world::underground_world
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${underground_world_TARGETS}.
if(underground_world_TARGETS AND NOT TARGET underground_world::underground_world)
  add_library(underground_world::underground_world INTERFACE IMPORTED)
  set_target_properties(underground_world::underground_world PROPERTIES
    INTERFACE_LINK_LIBRARIES "${underground_world_TARGETS}")
endif()
