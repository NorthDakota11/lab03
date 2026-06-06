cmake_minimum_required(VERSION 3.4)
project(solver)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(../formatter_ex_lib formatter_ex_build)
add_subdirectory(../solver_lib solver_lib_build)

add_executable(solver solver.cpp)
target_link_libraries(solver formatter_ex solver_lib)
