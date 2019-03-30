#include "classes.h"


int main() {
    //3_1
    Child your_Child;
    your_Child.set_Child();
    your_Child.get_Child();
    cout << endl;

    //3_2
    Tiles p1;
    p1.brand = "Great Tiles";
    p1.size_h = 500;
    p1.size_w = 500;
    p1.price = 2500;
    p1.get_Data();
    cout << endl;

    //3_3
    auto *c1 = new Complex;
    c1->set_Complex();
    c1->get_Complex();
    cout << endl;
    delete c1;

    //3_4
    Vector v1;
    int size;
    cout << "Number of coordinates: ";
    cin >> size;
    v1.set_Vector(size);
    v1.get_Vector();

    return 0;
}