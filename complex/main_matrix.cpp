#include "matrix.h"
#include "complex.h"

int main(){
    matrix<double> A(2,2);
    matrix<double> B(2,2);
    matrix<double> C(2,2);

    A(0,0) = 1.5;
    A(1,0) = 2.2;
    A(0,1) = 3.3;
    A(1,1) = 1.5;

    B(0,0) = 1.1;
    B(1,0) = 2.3;
    B(0,1) = 2.3;
    B(1,1) = 1.2;

    C = A+B;
    cout<<C;

    matrix<complex> P(2,2);
    matrix<complex> Q(2,2);
    matrix<complex> R(2,2);

    P(0,0) = complex(3,1);
    P(1,0) = complex(3,5);
    P(0,1) = complex(3,9.1);
    P(1,1) = complex(3,2.0);

    Q(0,0) = complex(2,3);
    Q(1,0) = complex(3,2.5);
    Q(0,1) = complex(3,2.2);
    Q(1,1) = complex(3,2.1);

    R = P + Q;
    cout<< R;

    return 0;
    

}




