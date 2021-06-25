# cmake_minimum_required(VERSION <specify CMake version here>)
project(TestProjekt)

set(CMAKE_CXX_STANDARD 20)

add_executable(Hauptklasse main.cpp Test.cpp Test.h)
add_executable(TestProjekt main2.cpp)