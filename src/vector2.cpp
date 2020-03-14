#include "vector.h"

Vector2::Vector2(const float e1, const float e2) {
  m_elements = new float[2];
  m_elements[0] = e1;
  m_elements[1] = e2;
};
