//
// Created by prose on 03.03.2019.
//
#ifndef LABA_1_2_COMPLEX_FILE_H
#define LABA_1_2_COMPLEX_FILE_H

#include <vector>
#include <string>


struct Complex {
    double Re;
    double Im;
    Complex(double Re, double Im) : Re(Re), Im(Im) {};
};
//double input();
//double file_input();
int vector_fill(std::vector<Complex> &array);
void complex_max_length(std::vector<Complex>&array, int num);

#endif //LABA_1_2_COMPLEX_FILE_H



