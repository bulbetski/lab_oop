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
         << "Age: " << age << endl;
}

//3_2
void Tiles::get_Data() {
    cout << "Brand: " << brand << endl
         << "Height: " << size_h << endl
         << "Width: " << size_w << endl
         << "Price: " << price << endl;
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
         << "Module: " << sqrt(Re*Re + Im*Im) << endl;
}

//3_4
void Vector::set_Vector(int size) {
    double inp;
    for (int i = 0; i < size; i++){
        cin >> inp;
        coord.push_back(inp);
    }
}
void Vector::get_Vector() {
    for (int i = 0; i < coord.size(); i++)
        cout << "Coord_" << i+1 << ": " << coord.at(i) << endl;
}
