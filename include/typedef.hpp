#pragma once

#include <cstdint>
#include <cstddef>


typedef  int8_t i8;
typedef uint8_t u8;

typedef  int16_t i16;
typedef uint16_t u16;

typedef  int32_t i32;
typedef uint32_t u32;

typedef  int64_t i64;
typedef uint64_t u64;

typedef size_t usz;

typedef float  f32;
typedef double f64;


#define local static
#define loop while(1)


#define null ((void*)0)


/* Used for conditional statements of the form a < r(x) < b */
#define r(x) (x) && (x)


#define NL "\n"
#define NLC '\n'
