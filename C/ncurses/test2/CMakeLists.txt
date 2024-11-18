cmake_minimum_required(VERSION 2.4)
#wo die header files liegen...
include_directories(${PROJECT_SOURCE_DIR})
#initiiert cmake mit neuem projekt
project(ncurses_test2)
# verwende die ncurese lib
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lncurses -lm")

add_executable(app main.c)
