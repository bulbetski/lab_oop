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
    Child(const std::string &name, const std::string &surname, int age) : name(name), surname(surname), age(age) {}
    void output();
};

//3_2
class Tiles{
public:
    std::string brand;
    double size_h;
    double size_w;
    double price;
    Tiles(const std::string &brand, double size_h, double size_w, double price) : brand(brand), size_h(size_h), size_w(size_w), price(price) {}
    void getData();
};

//3_3
class Complex {
public:
    double Re;
    double Im;
    Complex(double Re = 0, double Im = 0) : Re(Re), Im(Im) {}
    void output();
};

//3_4
class Vector{
public:
    std::vector<double> coord;
    void vfill(int size);
    void vdisplay();
};
#endif //LABA_3_CLASSES_H
