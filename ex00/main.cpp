//
// Created by yuumo on 2022/08/02.
//

#include <iostream>

#include "whatever.hpp"

int main() {
  {
    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
  }
  {
    std::cout << "***TEST***" << std::endl;
    std::cout << "int" << std::endl;
	int a = 24;
	int b = 42;

	std::cout << "init ************" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	::swap(a, b);
	std::cout << "swap ************" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max *************" << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << "min *************" << std::endl;
	std::cout << min(a, b) << std::endl;
  }
  {
    std::cout << "***TEST***" << std::endl;
    std::cout << "float" << std::endl;
	float c = -1.7f;
	float d = 4.2f;

	std::cout << "init ************" << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	swap(c, d);
	std::cout << "swap ************" << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "max *************" << std::endl;
	std::cout << max(c, d) << std::endl;
	std::cout << "min *************" << std::endl;
	std::cout << min(c, d) << std::endl;
  }
  {
    std::cout << "***TEST***" << std::endl;
    std::cout << "char" << std::endl;
	char e = 'a';
	char f = 'z';

	std::cout << "init ************" << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	swap(e, f);
	std::cout << "swap ************" << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "max *************" << std::endl;
	std::cout << max(e, f) << std::endl;
	std::cout << "min *************" << std::endl;
	std::cout << min(e, f) << std::endl;
  }
  {
    std::cout << "***TEST***" << std::endl;
    std::cout << "The two of argument are equal" << std::endl;
    int a = 1;
    int b = 1;

    std::cout << &a << std::endl;
    std::cout << &b << std::endl;
    std::cout << &max(a, b) << std::endl;
  }
//  { // compile error
//    std::string str1 = "abc";
//    int a = 100;
//    std::cout << max(str1, a) << std::endl;
//  }

  return 0;
}