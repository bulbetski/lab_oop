#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

double Complex::getRe() const {
    return Re;
}

double Complex::getIm() const {
    return Im;
}

Complex::Complex(double re, double im) : Re(re), Im(im) {}

Complex &Complex::operator=(Complex const &rhs) {
    cout << "After overloaded = is called." << endl;
    this -> Re = rhs.Re;
    this -> Im = rhs.Im;
    return *this;
}

Complex &Complex::operator++() {
    cout << "After overloaded ++ operator is called." << endl;
    this -> Re++;
    this -> Im++;
    return *this;
}

Complex &Complex::operator--(int) {
    cout << "After overloaded -- is called." << endl;
    this -> Re--;
    this -> Im--;
    return *this;
}

bool Complex::operator==(Complex const &rhs) {
    return this -> Re == rhs.Re && this -> Im == rhs.Im;
}

bool Complex::operator!=(Complex const &rhs) {
    return !(this -> Re == rhs.Re & this -> Im == rhs.Im);
}

std::ostream &operator<<(std::ostream &os, const Complex &complex) {
    os << "Re: " << complex.Re << " Im: " << complex.Im << endl;
    return os;
}

std::istream &operator>>(std::istream &is, Complex &complex) {
    cout << "Type in real part: ";
    is >> complex.Re;
    cout << "Type in imaginary part: ";
    is >> complex.Im;
    return is;
}





