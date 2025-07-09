cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)

project("calcDev")

#include path
include_directories(inc)

#add library

add_library(mylib src/simplecalc.cpp)

#main application

add_executable(Myapp src/main.cpp)
target_link_libraries(Myapp mylib)

#Unit test
enable_testing()
#add_executable(MyTests tests/test_add01.cpp)
#target_link_libraries(MyTests mylib)
#add_test(NAME RunMyTests COMMAND MyTests)

macro(add_calc_test name)
add_executable(${name} tests/${name}.cpp)
target_link_libraries(${name} mylib)
add_test(NAME ${name} COMMAND ${name})
endmacro()

#add test case

add_calc_test(test_add)
add_calc_test(test_sub)
add_calc_test(test_mul)
add_calc_test(test_div)