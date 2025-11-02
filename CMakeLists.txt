cmake_minimum_required(VERSION 3.15)
project(gtest_find_package)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# This name should match the library name in the following location:
# /usr/lib/x86_64_gnu_linux/cmake/GTest/
# contains the following files:
# 1. GTestConfig.cmake
# 2. GTestConfigVersion.cmake
# 3. GTestTargets-none.cmake
# 4. GTestTargets.cmake

# For googletest, CMakeCache.txt contains
# //The directory containing a CMake configuration file for GTest.
# 1. GTest_DIR:PATH=/usr/lib/x86_64-linux-gnu/cmake/GTest
# 2. FIND_PACKAGE_MESSAGE_DETAILS_GTest:INTERNAL=[/usr/lib/x86_64-linux-gnu/cmake/GTest/GTestConfig.cmake][c ][v1.14.0()] 


# For Boost, CMakeCache.txt contains
# For Boost, not this /usr/lib/x86_64_gnu_linux/cmake/Boost/
# 1. Boost_DIR:PATH=/usr/lib/x86_64-linux-gnu/cmake/Boost-1.83.0
# //Path to a file.
# 2. Boost_INCLUDE_DIR:PATH=/usr/include
# 3. Boost_UNIT_TEST_FRAMEWORK_LIBRARY_RELEASE:STRING=/usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so.1.83.0
# //Details about finding Boost
# 4. FIND_PACKAGE_MESSAGE_DETAILS_Boost:INTERNAL=[/usr/lib/x86_64-linux-gnu/cmake/Boost-1.83.0/BoostConfig.cmake][cfound components: unit_test_framework ][v1.83.0()]

# rather, /usr/lib/x86_64-linux-gnu/cmake/Boost-1.83.0/
# contains the following files:
# 1. BoostConfig.cmake
# 2. BoostConfigVersion.cmake 
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
