#ifndef LABA_8_COMPLEX_H
#define LABA_8_COMPLEX_H


#include <ostream>

class Complex {
private:
    double re;
    double im;
public:
    Complex(double re = 0, double im = 0);

    friend std::ostream &operator<<(std::ostream &os, const Complex &complex);
};


#endif //LABA_8_COMPLEX_H
