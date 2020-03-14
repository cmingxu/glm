#include <iostream>
#include "scalar.h"
#include "vector.h"
#include "matrix.h"

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

  Vector2 v2(1,2);
  std::cout << v2.size() << std::endl;
  std::cout << v2[0] << std::endl;
  std::cout << v2[1] << std::endl;
  std::cout << v2 << std::endl;

  Vector2 secondV2(2, 3);
  std::cout << secondV2 << std::endl;

  std::cout << (secondV2 + v2) << std::endl;
  std::cout << (secondV2 - v2) << std::endl;

  std::cout << (v2 * c1) << std::endl;
  std::cout << (v2 - c1) << std::endl;

  Matrix m(2, 3, 10);
  std::cout << m << std::endl;
  return 0;
}
