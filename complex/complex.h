
#include <iostream>
using namespace std;

class complex{
 private:
    // real and imaginary part
    double r,i;
 public:
    complex();
    complex(double, double);
    complex operator+(const complex&);
    complex operator*(const complex&);
    double norm();
    friend ostream& operator<<(ostream & os, const complex&);
};








