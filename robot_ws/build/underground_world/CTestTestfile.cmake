# CMake generated Testfile for 
# Source directory: /home/mickaborscha/ros_hallway_pathfinder/robot_ws/src/underground_world
# Build directory: /home/mickaborscha/ros_hallway_pathfinder/robot_ws/build/underground_world
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[provided_world_contract_test]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/mickaborscha/ros_hallway_pathfinder/robot_ws/build/underground_world/test_results/underground_world/provided_world_contract_test.gtest.xml" "--package-name" "underground_world" "--output-file" "/home/mickaborscha/ros_hallway_pathfinder/robot_ws/build/underground_world/ament_cmake_gtest/provided_world_contract_test.txt" "--command" "/home/mickaborscha/ros_hallway_pathfinder/robot_ws/build/underground_world/provided_world_contract_test" "--gtest_output=xml:/home/mickaborscha/ros_hallway_pathfinder/robot_ws/build/underground_world/test_results/underground_world/provided_world_contract_test.gtest.xml")
set_tests_properties([=[provided_world_contract_test]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/mickaborscha/ros_hallway_pathfinder/robot_ws/build/underground_world/provided_world_contract_test" TIMEOUT "60" WORKING_DIRECTORY "/home/mickaborscha/ros_hallway_pathfinder/robot_ws/build/underground_world" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/mickaborscha/ros_hallway_pathfinder/robot_ws/src/underground_world/CMakeLists.txt;52;ament_add_gtest;/home/mickaborscha/ros_hallway_pathfinder/robot_ws/src/underground_world/CMakeLists.txt;0;")
subdirs("underground_world__py")
subdirs("underground_world__rs")
subdirs("gtest")
