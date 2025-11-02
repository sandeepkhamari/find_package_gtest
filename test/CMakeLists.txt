# configuration for TARGET: test_cgpa_calc
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

# configurations for TARGET: test_main
add_executable(test_main 
	       test_main.cpp
       )

target_link_libraries(test_main
	                PRIVATE
			cgpa_calc
	)

target_include_directories(test_main
	                   PRIVATE
	                   ${CMAKE_SOURCE_DIR}/include
       )
target_link_libraries(test_main
	              PRIVATE
		      GTest::gtest
       )

enable_testing()
include(CTest)

include(GoogleTest)
gtest_discover_tests(test_cgpa_calc)
