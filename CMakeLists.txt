cmake_minimum_required(VERSION 3.10)

project(cppgen)

set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED True)

include_directories(
    ${PROJECT_SOURCE_DIR}/include,
    ${PROJECT_SOURCE_DIR}/src
)

file(
    GLOB_RECURSE

    SOURCES

    **.cpp
)

add_executable(
    cppgen

    ${SOURCES}
)
