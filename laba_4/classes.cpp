//
// Created by prose on 21.03.2019.
//
#include "classes.h"
#include <math.h>
//3_1
void Child::set_Child() {
    cout << "Student's data: ";
    cin >> name;
    cin >> surname;
    cin >> age;
};
void Child::get_Child(){
    cout << "Name: " << name << endl
         << "Surname: " << surname << endl
         << "Age: " << age << endl << endl;
}

//3_2
void Tiles::get_Data() {
    cout << "Brand: " << brand << endl
         << "Height: " << size_h << endl
         << "Width: " << size_w << endl
         << "Price: " << price << endl << endl;
}

//3_3
void Complex::set_Complex() {
    cout << "Real part: ";
    cin >> Re;
    cout << "Imaginary part: ";
    cin >> Im;
}
void Complex::get_Complex() {
    cout << "Re: " << Re << endl
         << "Im: " << Im << endl
         << "Module: " << sqrt(Re*Re + Im*Im) << endl << endl;
}

//3_4
void Vector::set_Vector() {
    double inp;
    cout << "Type in your coordinates: ";
    for (int i = 0; i < coord.size(); i++){
        cin >> inp;
        coord.at(i) = inp;
    }
}
void Vector::get_Vector() {
    for (int i = 0; i < coord.size(); i++)
        cout << "Coord_" << i+1 << ": " << coord.at(i) << endl;
}

//4_1
Child::Child(const std::string &name, const std::string &surname, int age) : name(name), surname(surname), age(age) {}

Child::Child(const Child &source): name(source.name), surname(source.surname), age(source.age){}

//4_2
Tiles::Tiles(const std::string &brand, double size_h, double size_w, double price) : brand(brand), size_h(size_h),
                                                                                     size_w(size_w), price(price) {}

Tiles::Tiles(const Tiles &source): brand(source.brand), size_h(source.size_h), size_w(source.size_w), price(source.price){}

//4_3
Complex::Complex(double Re, double Im) : Re(Re), Im(Im) {}

Complex::Complex(const Complex &source): Re(source.Re), Im(source.Im) {}

//4_4
Vector::Vector(int size): coord(size, 0){}

Vector::Vector(const Vector &source): coord(source.coord) {}
