cmake_minimum_required(VERSION 3.25)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)

add_executable(HelloWorld main.cpp utils/greet.cpp utils/test.cpp)
