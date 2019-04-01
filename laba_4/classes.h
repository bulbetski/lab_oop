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
    Child(const std::string &name = "None", const std::string &surname = "None", int age = 0);
    Child(const Child &source);
    ~Child() {}
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

    Tiles(const std::string &brand = "None", double size_h = 0, double size_w = 0, double price = 0);
    Tiles(const Tiles &source);
    ~Tiles() {}
    void get_Data();
};

//3_3
class Complex {
private:
    double Re;
    double Im;
public:
    Complex(double Re = 0, double Im = 0);
    Complex(const Complex &source);
    ~Complex() {}
    void set_Complex();
    void get_Complex();
};

//3_4
class Vector{
private:
    std::vector<double> coord;
public:
    Vector(int size = 0);
    Vector(const Vector &source);
    ~Vector() {}
    void set_Vector();
    void get_Vector();
};
#endif //LABA_3_CLASSES_H
