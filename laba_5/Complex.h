#ifndef LABA_5_COMPLEX_H
#define LABA_5_COMPLEX_H


#include <ostream>

class Complex {
private:
    double Re;
    double Im;
public:
    double getRe() const;
    double getIm() const;

    Complex(double re = 0, double im = 0);
    Complex &operator=(Complex const &rhs);
    Complex &operator++();
    Complex &operator--(int);
    bool operator==(Complex const &rhs);
    bool operator!=(Complex const &rhs);

    friend std::ostream &operator<<(std::ostream &os, const Complex &complex);
    friend std::istream &operator>>(std::istream &is, Complex &complex);
};

void display(Complex &c);

#endif //LABA_5_COMPLEX_H
