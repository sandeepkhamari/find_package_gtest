cmake_minimum_required(VERSION 3.15)
project(gtest_find_package)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(GTest REQUIRED)
if(GTest)
  # This doesnt work.
  message(STATUS "GTest_INCLUDE_DIRS: ${GTest_INCLUDE_DIRS}")
  message(STATUS "GTest_LIBRARIES: ${GTest_LIBRARIES}")
  set(GTest_Enabled ON)
else()
  message(STATUS "Failed to find googletest package.")
endif()

message(STATUS "GTest_Enabled: ${GTest_Enabled}")

enable_testing()
include(CTest)

add_subdirectory(src)
add_subdirectory(test)
