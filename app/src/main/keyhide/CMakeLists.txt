cmake_minimum_required(VERSION 3.4.1)

add_library(keyhide SHARED
            keyhide.c)

# Include libraries needed for lib
target_link_libraries(keyhide android)