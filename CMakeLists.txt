cmake_minimum_required(VERSION 3.10)

project(cppgen)

set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED True)

include_directories(
    "include"
)

set(
    SOURCES

    src/main.cpp
)

add_executable(
    cppgen

    ${SOURCES}
)
