cmake_minimum_required(VERSION 3.17)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithm main.cpp SortTestHelper.h QuickSort.h QuickSort3Ways.h)
