#include <ostream>

#ifndef SCALAR_H
#define SCALAR_H


class Scalar
{
  public:
    Scalar();
    Scalar(const float scalar);
    virtual ~Scalar();

    friend inline bool operator== (const Scalar& scalar, const Scalar& other) {
      return scalar.m_scalar == other.m_scalar;
    }

    friend inline Scalar operator+ (const Scalar& scalar,const Scalar& other) {
      Scalar t(scalar.m_scalar + other.m_scalar);
      return t;
    }

    friend inline Scalar operator- (const Scalar& scalar, const Scalar& other) {
      Scalar t(scalar.m_scalar - other.m_scalar);
      return t;
    }

    friend inline Scalar operator* (const Scalar& scalar, const float multiplier) {
      Scalar t(scalar.m_scalar * multiplier);
      return t;
    }


    friend inline Scalar operator/ (const Scalar& scalar, const float divider) {
      Scalar t(scalar.m_scalar / divider);
      return t;
    }

    friend std::ostream& operator<<(std::ostream& out, const Scalar& scalar);

    inline float value() const{
      return m_scalar;
    }
  protected:
    float m_scalar;
};
#endif /* end of include guard: SCALAR_H */
