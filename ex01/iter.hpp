//
// Created by yuumo on 2022/08/10.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, std::size_t arrLen, void (func)(T &)) {
  if (!arr || !func)
    return ;
  for (std::size_t i = 0; i < arrLen; i++)
    func(arr[i]);
}

template<typename T>
void iter(const T *arr, std::size_t arrLen, void (func)(const T &)) {
  if (!arr || !func)
    return ;
  for (std::size_t i = 0; i < arrLen; i++)
    func(arr[i]);
}

#endif //EX01_ITER_HPP
