#include <iostream>
#include "scalar.h"

int main(int argc, const char *argv[])
{
  std::cout << "test" << std::endl;

  Scalar s;
  Scalar c1(10.1f);

  std::cout << s << std::endl;
  std::cout << c1 << std::endl;

  Scalar c2 = s + c1;
  std::cout << c2 << std::endl;
  bool r = c2 ==  c1;
  std::cout << r << std::endl;

  std::cout << s+c1 << std::endl;
  std::cout << (s - c1) << std::endl;
  std::cout << (s == c1) << std::endl;

  std::cout << s * 100 << std::endl;
  std::cout << c1 * 100 << std::endl;
  std::cout << c1 / 100 << std::endl;
  return 0;
}
