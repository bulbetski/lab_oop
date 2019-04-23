#include "Complex.h"
#include <iostream>
using std::endl;

Complex::Complex(double re, double im) : re(re), im(im) {}

std::ostream &operator<<(std::ostream &os, const Complex &complex) {
    os << "Re: " << complex.re << " Im: " << complex.im;
    return os;
}
