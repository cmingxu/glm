#include <ostream>
#include "scalar.h"

#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
  public:
    Vector();
    ~Vector();

    unsigned size() const {
      return sizeof(m_elements) / sizeof(float);
    };


    inline float operator[](unsigned index) const{
      if(index >= 0 && index < this->size()){
        return m_elements[index];
      }

      return -1;
    };

    friend std::ostream& operator<<(std::ostream& out, const Vector& v);

  protected:
    float *m_elements;
};

// vector with 2 element
class Vector2 : public Vector{
  public:
    static Vector2 zero();
    static Vector2 ones();

    Vector2(const float e1, const float e2);

    Vector2 operator+(const Vector2& other);
    Vector2 operator-(const Vector2& other);

    Vector2 operator+(const Scalar& other);
    Vector2 operator-(const Scalar& other);
    Vector2 operator*(const Scalar& scalar);
};

// vector with 3 element
class Vector3 : public Vector{
  public:
    Vector3(const float e1, const float e2, const float e3);
};

// vector with 4 element
class Vector4 : public Vector{
  public:
    Vector4(const float e1, const float e2, const float e3, const float e4);
};
#endif /* end of include guard: VECTOR_H */
