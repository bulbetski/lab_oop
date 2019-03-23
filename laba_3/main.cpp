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
    Complex *c1 = new Complex;
    c1 -> output();
    cout << endl;

    //3_4
    Vector v1;
    int size;
    cout << "Number of coordinates: ";
    cin >> size;
    v1.vfill(size);
    v1.vdisplay();


    getchar(); getchar();
    return 0;
}