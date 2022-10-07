//
// Created by yuumo on 2022/08/10.
//

#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include "Array.tpp"

#define MAX_VAL 750


int test(std::string testName) {
  std::cout << "+++++TEST+++++" << std::endl;
  std::cout << testName << std::endl;
  std::cout << "++++++++++++++" << std::endl;

  return 0;
}

int main() {
  {
    test("Subject main.cpp");
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
      const int value = rand();
      numbers[i] = value;
      mirror[i] = value;
    }
    //SCOPE
    {
      Array<int> tmp = numbers;
      Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
      if (mirror[i] != numbers[i])
      {
        std::cerr << "didn't save the same value!!" << std::endl;
        return 1;
      }
    }
    try
    {
      numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    try
    {
      numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
      numbers[i] = rand();
    }
    delete [] mirror;//
  }
  {
    test("subject test");

    Array<int> arrInt(5);
    try {
      for (int i = 0; i < 5; i++)
        arrInt[i] = i;
      for (int i = 0; i < 5; i++)
        std::cout << arrInt[i] << std::endl;
    }
    catch (const std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }

  return 0;
}