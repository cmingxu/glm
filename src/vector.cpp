#include "vector.h"
#include <iostream>

Vector::Vector() {
  m_elements = nullptr;
};

Vector::~Vector() {
  if(m_elements != nullptr) {
    std::cout << "vector desctructor" << std::endl;
    delete[] m_elements;
  }
};

std::ostream& operator<<(std::ostream &out, const Vector& v) {
  out << "<";
  for (int i = 0; i < v.size(); i++) {
    out << v.m_elements[i];
    out << ",";
  }
  out << ">";
  return out;
}
