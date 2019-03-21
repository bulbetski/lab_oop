//
// Created by prose on 21.03.2019.
//

#include "classes.h"
#include <math.h>

void Child::output(){
    cout << "Name: " << name << endl
         << "Surname: " << surname << endl
         << "Age: " << age << endl;
};

void Tiles::getData() {
    cout << "Brand: " << brand << endl
         << "Height: " << size_h << endl
         << "Width: " << size_w << endl
         << "Price: " << price << endl;
}

void Complex::output() {
    cout << "Re: " << Re << endl
         << "Im: " << Im << endl
         << "Module: " << sqrt(Re*Re + Im*Im) << endl;
}
