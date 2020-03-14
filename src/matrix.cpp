#include "matrix.h"
#include "scalar.h"
#include "vector.h"

Matrix::Matrix() {
  m_m = 0;
  m_n = 0;

  m_elements = nullptr;
};

Matrix::Matrix(size_t m, size_t n) {
  m_m = m;
  m_n = n;

  m_elements = new float[m * n];
  for (int i = 0; i < this->size(); i++) {
    m_elements[i] = 0;
  }
};

Matrix::Matrix(size_t m, size_t n, const float fill) {
  m_m = m;
  m_n = n;

  m_elements = new float[m * n];
  for (int i = 0; i < this->size(); i++) {
    m_elements[i] = fill;
  }
};

Matrix::~Matrix() {
  if(m_elements != nullptr) {
    delete[] m_elements;
  }
};


Matrix Matrix::operator+(const Matrix& other){
  Matrix m(other.M(), other.N());
  for (int i = 0; i < other.M(); i++) {
    for (int j = 0; j < other.N(); j++) {
      m.set(i, j, this->at(i, j) + other.at(i, j));
    }
  }
  return m;
};

Matrix Matrix::operator-(const Matrix& other){
  Matrix m(other.M(), other.N());
  for (int i = 0; i < other.M(); i++) {
    for (int j = 0; j < other.N(); j++) {
      m.set(i, j, this->at(i, j) - other.at(i, j));
    }
  }
  return m;
};

Matrix Matrix::operator+(const Scalar& other){
  Matrix m(this->M(), this->N());
  for (int i = 0; i < this->M(); i++) {
    for (int j = 0; j < this->N(); j++) {
      m.set(i, j, this->at(i, j) * other.value());
    }
  }
  return m;
};

Matrix Matrix::operator-(const Scalar& other){
  Matrix m(this->M(), this->N());
  for (int i = 0; i < this->M(); i++) {
    for (int j = 0; j < this->N(); j++) {
      m.set(i, j, this->at(i, j) - other.value());
    }
  }
  return m;
};

Matrix Matrix::operator*(const Scalar& other){
  Matrix m(this->M(), this->N());
  for (int i = 0; i < this->M(); i++) {
    for (int j = 0; j < this->N(); j++) {
      m.set(i, j, this->at(i, j) * other.value());
    }
  }
  return m;
};
