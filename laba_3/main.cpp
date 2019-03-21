#include "classes.h"


int main() {
    //3_1
    Child Sanya("Sasha", "Bondarenko", 9);
    Sanya.output();
    cout << endl;

    //3_2
    Tiles p1("Init", 200, 200, 500);
    p1.getData();
    cout << endl;

    //3_3
    Complex c1(1,1);
    c1.output();
    cout << endl;

    return 0;
}