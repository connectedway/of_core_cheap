cmake_minimum_required(VERSION 3.20.0)
project(of_core_cheap VERSION 1.0.1 DESCRIPTION "OpenFiles Core C Heap")

include_directories(
        ${of_core_SOURCE_DIR}/include
)

set(SRCS
        src/cheap.c
        )

add_library(of_core_cheap OBJECT ${SRCS})
set_property(TARGET of_core_cheap PROPERTY POSITION_INDEPENDENT_CODE ON)

