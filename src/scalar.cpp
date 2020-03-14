#include "scalar.h"

Scalar::Scalar(){
  m_scalar = 0;
}

Scalar::Scalar(const float scalar){
  m_scalar = scalar;
}

Scalar::~Scalar(){}

std::ostream& operator<<(std::ostream& out, const Scalar& scalar){
  out << scalar.m_scalar;
  return out;
}
