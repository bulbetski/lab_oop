//
// Created by prose on 01.03.2019.
//
#ifndef LABA_1_COMPLEX_H
#define LABA_1_COMPLEX_H

#include <string>


struct Complex{
    double Re;
    double Im;
    //double input();
    void output();
};

double input();
void add(struct Complex c1, struct Complex c2);
void sub(struct Complex c1, struct Complex c2);
void product(struct Complex c1, struct Complex c2);
void division(struct Complex c1, struct Complex c2);

#endif //LABA_1_COMPLEX_H
