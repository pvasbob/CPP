cmake_minimum_required(VERSION 3.25)
project(Part2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Part2 main.cpp
        utils/findtarget.cpp
        utils/bubble_sort_array.cpp
        utils/swap.cpp
        utils/print2Dmatrix.cpp
        utils/print_matrix2D.cpp
        utils/init_matrix2D.cpp)
