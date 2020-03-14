#include <ostream>
#include <iostream>
#include "scalar.h"

class Matrix
{
  public:
    Matrix();
    Matrix(size_t m, size_t n);
    Matrix(size_t m, size_t n,const float fill);

    Matrix(const Matrix& origin);
    Matrix& operator=(const Matrix& origin);
    virtual ~Matrix();

    inline size_t size() const {
      return m_m * m_n;
    };

    inline float at(size_t m, size_t n) const {
      return m_elements[m * m_n + n];
    };

    inline void set(size_t m, size_t n, const float value) const {
      m_elements[m * this->m_n + n] = value;
    }

    inline size_t M() const {
      return m_m;
    };

    inline size_t N() const {
      return m_n;
    };

    friend std::ostream& operator<<(std::ostream &out, const Matrix &mat){
      out << "{" << std::endl;
      for (int i = 0; i < mat.M(); i++) {
        out << "{";
        for (int j = 0; j < mat.N(); j++) {
          std::cout << mat.at(i, j) << " ,";
        }
        out << "}" << std::endl;
      }
      out << "}";
      return out;
    }

    // matrix transpose
    Matrix transpose() {
      Matrix m(this->N(), this->M());
      for (int i = 0; i < m.M(); i++) {
        for (int j = 0; j < m.N(); j++) {
          m.set(i, j,  this->at(j, i));
        }
      }
      return m;
    }

    Matrix operator+(const Matrix& other);
    Matrix operator-(const Matrix& other);
    Matrix operator+(const Scalar& other);
    Matrix operator-(const Scalar& other);
    Matrix operator*(const Scalar& scalar);

    // static method
    //static Matrix translate(){};
    //static Matrix scale(){};
    //static Matrix rotate(){};
    //static Matrix perpective(){};
    //static Matrix orth(){};
    //static Matrix lookat(){};

  protected:
    size_t m_m;
    size_t m_n;

    float *m_elements;
};
