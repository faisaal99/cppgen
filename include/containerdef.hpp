#pragma once

#include <vector>
#include <memory>
#include <stack>


template <typename T>
using Vec = std::vector<T>;

template <typename T>
using Unq = std::unique_ptr<T>;

template <typename T>
using Rc = std::shared_ptr<T>;

template <typename T>
using Stack = std::stack<T>;
