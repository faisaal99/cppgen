#pragma once

#include <typedef.hpp>


local char const*
g_HELP_MESSAGE{
R"(usage: cppgen [options] <template> [<template>...]

Available templates:
  tdef - typedef.hpp    Generates a header-file with typedefs for integers,
                        floats and strings.
  cdef - containerdef.hpp
                        Generates a header-file with some typedefs for C++
                        STL-containers.

Available options:
  -c                    Output source-files more appropriate for C-files.
  -cpp, -c++            Output source-files more appropriate for C++-files.
  --print <template>    Print the contents of the specified template.
  --dir[f] <path>       Generate the templates in the directory specified by the
                        path. If the directory doesn't exist and the f-suffix is
                        supplied, create it.
  -o <template> <name>  Change the name of the generated source file from the
                        specified template.
)"
};
