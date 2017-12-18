#include "complex.h"

complex::complex(){
    r = 0;
    i = 0;
}

complex::complex(double r_, double i_){
    r = r_;
    i = i_;
}

complex complex::operator+(const complex & p){
    complex z;
    z.r = r + p.r;
    z.i = i + p.i;
    return z;
}


complex complex::operator*(const complex & p){
    complex z;
    z.r = r * p.r - i * p.i;
    z.i = r * p.i + i * p.r;
    return z;
}

double complex::norm(){
    double n;
    n = r*r + i*i;
    return n;
}



ostream& operator<<(ostream & os, const complex& p){
    os <<p.r;
    if(p.i>=0)
	os<<"+";
    else
	os<<"-";
    os <<p.i<< "i";
    return os;
}


