#include "vector.h"

Vector2::Vector2(const float e1, const float e2) {
  m_elements = new float[2];
  m_elements[0] = e1;
  m_elements[1] = e2;
};

Vector2 Vector2::operator+(const Vector2& other){
  return Vector2((*this)[0] + other[0], (*this)[1] + other[1]);
};

Vector2 Vector2::operator-(const Vector2& other){
  return Vector2((*this)[0] - other[0], (*this)[1] - other[1]);
};

Vector2 Vector2::operator+(const Scalar& other){
  return Vector2((*this)[0] + other.value(), (*this)[1] + other.value());
};

Vector2 Vector2::operator-(const Scalar& other){
  return Vector2((*this)[0] - other.value(), (*this)[1] - other.value());
};
Vector2 Vector2::operator*(const Scalar& other){
  return Vector2((*this)[0] * other.value(), (*this)[1] * other.value());
};
