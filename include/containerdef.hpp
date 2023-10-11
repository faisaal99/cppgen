#pragma once

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