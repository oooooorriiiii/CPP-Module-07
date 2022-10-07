//
// Created by yuumo on 2022/08/10.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
 public:
  Array(unsigned int n = 0);
  Array(const Array &array);
  Array &operator=(const Array &rhs);
  ~Array();

  T &operator[](unsigned int index);
  const T &operator[](unsigned int index) const;

  unsigned int  size() const;

  unsigned int  getN() const;

 private:
  unsigned int _n;
  T *_arr;
};

#endif //EX02_ARRAY_HPP
