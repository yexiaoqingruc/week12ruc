#include "complex.h"

int main(){
    complex a, b(3,5), z;
    a = complex(2,1);

    z = a + b;
    cout <<"a+b=" << z << endl;

    z = a * b;
    cout <<"a*b=" << z << endl;
    
    return 0;
}
