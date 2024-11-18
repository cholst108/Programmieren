cmake_minimum_required(VERSION 3.4)
project(ncurses_test)

set(SHARED_FLAGS "-Wall -g -lncurses")
#set(CMAKE_C_FLAGS "-std=c11 ${SHARED_FLAGS}")
#set(CMAKE_CXX_FLAGS "-std=c++11 ${SHARED_FLAGS}")

include_directories(include)

add_executable(app main.c)

#// SOLUTION - MISSING LINE
target_link_libraries(app ncurses)
