#pragma once

#include <cstdio>

#include "typedef.hpp"


#ifdef DEBUG
# define PRINTLN(fmt) printf(fmt NL)
# define PRINTLNA(fmt, ...) printf(fmt NL, __VA_ARGS__)
#else
# define PRINTLN(fmt) ;
# define PRINTLNA(fmt, ...) ;
#endif
