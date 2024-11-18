cmake_minimum_required(VERSION 2.4)
#wo die header files liegen...
include_directories(${PROJECT_SOURCE_DIR})
#initiiert cmake mit neuem projekt
project(pointer_test)
#welche source files gehören dazu?
add_executable(app main.c)

