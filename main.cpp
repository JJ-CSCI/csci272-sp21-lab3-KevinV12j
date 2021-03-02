//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
using namespace std;
//------------------------------

// Put the assignment code here

class Quaternion {
  public: double a, b, c, d;
  Quaternion(double w, double x, double y, double z)
  {
    a = w;
    b = x;
    c = y;
    d = z;
  }
  bool operator==(const Quaternion w)
  {
    if ((w.a==this->a)&&(w.b==this->b)&&(w.c==this->c)&&(w.d==this->d))
    return true;
    return false;
  } 
Quaternion operator+(const Quaternion w)
{
  Quaternion y;
  y.a=w.a+this->a;
  y.b=w.b+this->b;
  y.c=w.c+this->c;
  y.d=w.d+this->d;
  return y;
}
Quaternion operator-(const Quaternion w)
{
  Quaternion y;
  y.a=w.a-this->a;
  y.b=w.b-this->b;
  y.c=w.c-this->c;
  y.d=w.d-this->d;
  return y;
}
Quaternion operator*(double z)
{
  Quaternion w;
  w.a=z*this->a;
  w.b=z*this->a;
  w.c=z*this->a;
  w.d=z*this->a;
  return w;
}
};
int main(){
  Quaternion x(1.0, 2.0,3.0,4.0);
  Quaternion w(1.0,2.0,3.0,4.0);
  bool b = w==x;
  return 0;
}




//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
