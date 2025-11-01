add_executable(test_cgpa_calc test_cgpa_calc.cpp)
target_include_directories(test_cgpa_calc PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test_cgpa_calc PRIVATE cgpa_calc)

# dont use the following, this doesnt work with latest cmakes.
#target_include_directories(test_cgpa_calc PRIVATE ${GTest_INCLUDE_DIRS})
#target_link_libraries(test_cgpa_calc PRIVATE ${GTest_LIBRARIES})

# modern cmake uses the following.
target_link_libraries(test_cgpa_calc 
	              PRIVATE
		      GTest::gtest
		      GTest::gtest_main
	      )

enable_testing()
include(CTest)

include(GoogleTest)
gtest_discover_tests(test_cgpa_calc)
