#include "matrix.h"

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


