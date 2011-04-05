cmake_minimum_required (VERSION 2.6)
project (poptmx)
set(VERSION 0.5.2)

add_library(poptmx SHARED poptmx.cpp)

install(TARGETS poptmx
    LIBRARY DESTINATION lib
)

install(FILES poptmx.h
    DESTINATION include
)


