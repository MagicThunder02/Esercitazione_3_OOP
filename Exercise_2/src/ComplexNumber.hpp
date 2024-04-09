#include <iostream>

class ComplexNumber {
public:
    double real;
    double imaginary;

    ComplexNumber(double a = 0, double b = 0){
        real = a;
        imaginary = b;
    }
};

using namespace std;
ComplexNumber operator+ (ComplexNumber x, ComplexNumber y);

ostream& operator<<(ostream& os, ComplexNumber& c);

bool operator== (ComplexNumber x,ComplexNumber y);

ComplexNumber coniugate(ComplexNumber z);

