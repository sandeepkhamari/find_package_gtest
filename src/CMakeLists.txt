add_library(cgpa_calc STATIC cgpa_calc.cpp)
target_include_directories(cgpa_calc PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_compile_definitions(cgpa_calc PRIVATE CGPA_CALC_LIB_MACRO)
target_compile_options(cgpa_calc PRIVATE -Wall -Wextra -O2)

add_executable(cgpa_calc_exe main.cpp)
target_include_directories(cgpa_calc_exe PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(cgpa_calc_exe PRIVATE cgpa_calc)

message(STATUS "GTest_INCLUDE_DIRS: ${GTest_INCLUDE_DIRS} ")
