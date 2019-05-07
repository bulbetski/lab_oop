#ifndef LABA_3_COMPLEX_H
#define LABA_3_COMPLEX_H

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

class Complex {
private:
    double Re;
    double Im;
public:
    void set_Complex();
    void get_Complex();
    Complex(double Re = 0, double Im = 0);
    Complex(const Complex &source);
    ~Complex() {}
};

#endif //LABA_3_COMPLEX_H
