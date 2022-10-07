//
// Created by yuumo on 2022/08/02.
//

#include "iter.hpp"

template<typename T>
void printElems(const T &elem) {
  std::cout << elem << std::endl;
}

template<typename T>
void incrementElems(T &elem) {
  elem++;
}

int main() {
  {
    std::cout << "+++++TEST+++++" << std::endl;
    std::cout << "arr = {1, 2, 3}" << std::endl;

    int arr[3] = {1, 2, 3};
    iter(arr, 3, printElems);
    iter(arr, 3, incrementElems);
    std::cout << "***" << std::endl;
    iter(arr, 3, printElems);
  }
  {
    std::cout << "+++++TEST+++++" << std::endl;
    std::cout << "const int arr = {1, 2, 3}" << std::endl;

    const int arr[3] = {1, 2, 3};
    iter(arr, 3, printElems);
  }
  {
    std::cout << "+++++TEST+++++" << std::endl;
    std::cout << "double arr = {1, 2, 3}" << std::endl;
    double arr[3] = {1.0, 2.0, 3.0};
    iter(arr, 3, printElems);
    iter(arr, 3, incrementElems);
    std::cout << "***" << std::endl;
    iter(arr, 3, printElems);
  }
  {
    std::cout << "+++++TEST+++++" << std::endl;
    std::cout << "std::string arr = {1, 2, 3}" << std::endl;
    std::string arr[3] = {"a", "b", "c"};
    iter(arr, 3, printElems);
  }
//  {
//    std::cout << "+++++TEST+++++" << std::endl;
//    std::cout << "std::string arr = {1, 2, 3}, parameter is wrong" << std::endl;
//    std::string arr[3] = {"a", "b", "c"};
//    iter(arr, 5, printElems); // undefined
//  }

  return 0;
}