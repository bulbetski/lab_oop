#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    int operation;
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

    cout << "Type in the number of operation you want to use: " << endl;
    cout << "[1] for addition\n[2] for subtraction\n[3] for production\n[4] for division\n";
    cin >> operation;
    switch (operation){
        case 1:{
            add(c1, c2);
            break;
        }
        case 2:{
            sub(c1, c2);
            break;
        }
        case 3:{
            product(c1, c2);
            break;
        }
        case 4:{
            division(c1, c2);
            break;
        }
        default:{
            break;
        }
    }

    cout << "---------------------------------------" << endl;


    cin.get(); cin.get();
    return 0;
}
