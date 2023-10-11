#pragma once

#include <typedef.hpp>


local char const*
g_TYPEDEF_HPP{
R"(#pragma once

#include <cstdint>
#include <cstddef>


typedef uint8_t u8;
typedef  int8_t i8;

typedef uint16_t u16;
typedef  int16_t i16;

typedef uint32_t u32;
typedef  int32_t i32;

typedef uint64_t u64;
typedef  int64_t i64;

typedef size_t usz;

typedef float  f32;
typedef double f64;


#define local static
#define loop while(1)
#define NL "\n"
#define NLC '\n'
)"
};


local char const*
g_CONTAINERDEF_HPP{
R"(#pragma once

#include <vector>
#include <memory>
#include <stack>
#include <string>


template <typename T>
using Vec = std::vector<T>;

template <typename T>
using Box = std::unique_ptr<T>;

template <typename T>
using Rc = std::shared_ptr<T>;

template <typename T>
using Weak = std::weak_ptr<T>;

template <typename T>
using Stack = std::stack<T>;


typedef std::string String;
)"
};
