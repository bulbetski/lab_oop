#ifndef LABA_3_VECTOR_H
#define LABA_3_VECTOR_H

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

class Vector{
public:
    std::vector<double> coord;
    void set_Vector(int size);
    void get_Vector();
};

#endif //LABA_3_VECTOR_H
