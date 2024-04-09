#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

ostream& operator<<(ostream& os, ComplexNumber& n){
    if (n.imaginary > 0)  {
        os<< n.real << "+" << n.imaginary << "i";
    }
    else if (n.imaginary == 0){
        os<< n.real;
    }
    else{
        os<< n.real << n.imaginary << "i" ;
    }
    return os;
}

ComplexNumber operator+ (ComplexNumber x,ComplexNumber y){
    ComplexNumber result;
    result.real = x.real + y.real;
    result.imaginary = x.imaginary + y.imaginary;
    return result;

}

bool operator== (ComplexNumber x, ComplexNumber y){
    double tol = 0.000000001;
    if (abs(x.real - y.real) < tol && abs(x.imaginary - y.imaginary) < tol) {
        return true;
    }
    else {
        return false;
    }

}

ComplexNumber coniugate(ComplexNumber z) {
    ComplexNumber result(z.real, -z.imaginary);
    return result;
}


