cmake_minimum_required(VERSION 3.17)
project(cpp_test)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
        #        test000.cpp
        map.cpp
        #        for_each.cpp

        )

add_executable(cpp_test ${SOURCE_FILES})