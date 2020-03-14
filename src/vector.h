#include <ostream>

class Vector
{
  public:
    Vector();
    ~Vector();

    unsigned size() const {
      return sizeof(m_elements) / sizeof(float);
    };


    inline float operator[](unsigned index){
      if(index >= 0 && index < sizeof(m_elements)){
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
    Vector2(const float e1, const float e2);
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
