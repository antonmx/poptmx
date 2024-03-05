cmake_minimum_required (VERSION 3.5)
project (poptmx)
set(VERSION 0.5.2)

add_library(poptmx SHARED poptmx.cpp)
set_target_properties(poptmx PROPERTIES PUBLIC_HEADER poptmx.h)
target_sources(poptmx PRIVATE poptmx.h)
install(TARGETS poptmx
  LIBRARY DESTINATION lib
  PUBLIC_HEADER DESTINATION include
)


