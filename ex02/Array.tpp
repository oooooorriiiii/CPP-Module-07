#include "Array.hpp"

template<typename T>
Array<T>::Array(unsigned int n) :  _n(n), _arr(new T[_n]) {}

template<typename T>
Array<T>::Array(const Array &array) : _n(array._n), _arr(new T[array._n]) {
  for (unsigned int i = 0; i < _n; i++) {
    _arr[i] = array._arr[i];
  }
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs) {
  if (this == &rhs) {
    return *this;
  }
  delete[] _arr;
  _n = rhs._n;
  _arr = new T[_n];
  for (size_t i = 0; i < _n; i++)
    _arr[i] = rhs._arr[i];
  return *this;
}

template<typename T>
Array<T>::~Array() {
  delete[] _arr;
}

template<typename T>
T &Array<T>::operator[](unsigned int index) {
  if (index >= _n)
    throw std::out_of_range("Index is out of range");
  return _arr[index];
}

template<typename T>
const T &Array<T>::operator[](unsigned int index) const {
  if (index >= _n)
    throw std::out_of_range("Index is out of range");
  return _arr[index];
}

template<typename T>
unsigned int  Array<T>::size() const {
  return getN();
}


/*
 * Getter
 */

template<typename T>
unsigned int  Array<T>::getN() const {
  return _n;
}
