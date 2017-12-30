
set( CMAKE_INCLUDE_PATH "/usr/include")
set( CMAKE_LIBRARY_PATH "/usr/lib/x86_64-linux-gnu/libncurses.so")

set(CMAKE_CXX_FLAGS "-lncurses -std=c++11")

project(test)




set(TEST_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/src")

include_directories(HEADER_FILES)



add_executable(testcard
  test.cpp
  ${TEST_INCLUDE_DIR})

add_executable(nctest
  nctest.cpp
  )

target_link_libraries(nctest ncurses)


target_include_directories(testcard PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


