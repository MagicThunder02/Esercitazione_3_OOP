#include "ComplexNumber.hpp"
#include <iostream>

int main() {
    using namespace std;
    ComplexNumber a = ComplexNumber(1.1,-2.1);
    std::cout << a << endl;

    ComplexNumber b = ComplexNumber(3,4);
    ComplexNumber c;
    c = a+b;
    std::cout << c<< endl<<endl;

    if(a == c) {
        std::cout << a;
        std::cout << " e' uguale a ";
        std::cout << c<< endl;
        std::cout << std::endl;
    }
    else {
        std::cout << a;
        std::cout << " non e' uguale a ";
        std::cout << c<< endl;
        std::cout << std::endl;
    }

    std::cout << "Il coniugato di ";
    std::cout << a;
    std::cout << " e': ";
    ComplexNumber con= ComplexNumber(0,0);
    con = coniugate(a);
    std::cout << con<< endl;
    std::cout << std::endl;


}
