//
// Created by prose on 21.03.2019.
//

#include "classes.h"
#include <math.h>
//3_1
void Child::output(){
    cout << "Name: " << name << endl
         << "Surname: " << surname << endl
         << "Age: " << age << endl;
};

//3_2
void Tiles::getData() {
    cout << "Brand: " << brand << endl
         << "Height: " << size_h << endl
         << "Width: " << size_w << endl
         << "Price: " << price << endl;
}

//3_3
void Complex::output() {
    cout << "Re: " << Re << endl
         << "Im: " << Im << endl
         << "Module: " << sqrt(Re*Re + Im*Im) << endl;
}

//3_4
void Vector::vfill(int size) {
    double inp;
    for (int i = 0; i < size; i++){
        cin >> inp;
        coord.push_back(inp);
    }
}

void Vector::vdisplay() {
    for (int i = 0; i < coord.size(); i++)
        cout << "Coord_" << i+1 << ": " << coord.at(i) << endl;
}
