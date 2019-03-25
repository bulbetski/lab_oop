//
// Created by prose on 21.03.2019.
//
#ifndef LABA_3_CLASSES_H
#define LABA_3_CLASSES_H
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

//3_1
class Child{
private:
    std::string name;
    std::string surname;
    int age;
public:
    void set_Child();
    void get_Child();
};

//3_2
class Tiles{
public:
    std::string brand;
    double size_h;
    double size_w;
    double price;
    void get_Data();
};

//3_3
class Complex {
private:
    double Re;
    double Im;
public:
    void set_Complex();
    void get_Complex();
};

//3_4
class Vector{
public:
    std::vector<double> coord;
    void set_Vector(int size);
    void get_Vector();
};
#endif //LABA_3_CLASSES_H
