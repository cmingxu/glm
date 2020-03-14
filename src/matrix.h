#include <ostream>
#include <iostream>

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
      return m_elements[m * m_m + n];
    };

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
      Matrix m;
      m.m_elements = new float[this->m_m * this->m_n];
      for (int i = 0; i < this->m_m; i++) {
        for (int j = 0; j < this->m_n; j++) {
          m.m_elements[j * this->m_n + i] = this->m_elements[i * this->m_m + j];
        }
      }
      return m;
    }

  protected:
    size_t m_m;
    size_t m_n;

    float *m_elements;
};
