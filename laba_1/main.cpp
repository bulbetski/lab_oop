#include <iostream>
#include "complex.h"
#include <string>

using namespace std;

int main()
{
    Complex c1;
    Complex c2;
    cout << "---------------------------------------" << endl;

    cout << "Type in your first complex number:" << endl;
    cout << "Real part: ";
    c1.Re = input();
    cout << "Imaginary part:";
    c1.Im = input();
    cout << "The first number is ";
    c1.output();
    cout << endl;
    cout << "---------------------------------------" << endl;

    cout << "Type in your second complex number:" << endl;
    cout << "Real part: ";
    c2.Re = input();
    cout << "Imaginary part:";
    c2.Im = input();
    cout << "The second number is ";
    c2.output();
    cout << endl;

    cout << "---------------------------------------" << endl;

    add(c1, c2);
    sub(c1, c2);
    product(c1, c2);
    division(c1, c2);

    cout << "---------------------------------------" << endl;


    cin.get(); cin.get();
    return 0;
}
