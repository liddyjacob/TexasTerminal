
set(CMAKE_CXX_FLAGS "-std=c++11")
project(test)


set(TEST_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/src")

include_directories(HEADER_FILES)



add_executable(testcard
  test.cpp
  ${TEST_INCLUDE_DIR})

target_include_directories(testcard PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


