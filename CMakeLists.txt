cmake_minimum_required(VERSION 3.20.0)
project(of_core_cheap VERSION 1.0.1 DESCRIPTION "OpenFiles Core C Heap")

include_directories(
        ${of_core_SOURCE_DIR}/include
)

set(SRCS
        src/cheap.c
        )

add_library(of_core_cheap STATIC ${SRCS})

set_target_properties(of_core_cheap PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(of_core_cheap PROPERTIES SOVERSION 1)

