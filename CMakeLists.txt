cmake_minimum_required(VERSION 3.26)
project(Arrays)

set(CMAKE_CXX_STANDARD 17)

add_executable(Arrays "Selection sort.cpp")

add_executable(bubble_sort "Bubble sort.cpp")
add_executable(insertion_sort
        "Insertion sort.cpp")
add_executable(binary_search
        "binary search.cpp")
