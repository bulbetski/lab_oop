#include "classes.h"


int main() {
    //4_1

    Child c1("Zalhar", "Proselkov", 18);
    Child c2 = c1;
    c2.get_Child();

    //4_2

    Tiles t1("Tiles", 1, 1, 1);
    Tiles t2 = t1;
    t1.get_Data();

    //4_3

    Complex n1(1,1);
    Complex n2 = n1;
    n1.get_Complex();

    //4_4
    int n;
    cout << "Type in the number of coordinates: ";
    cin >> n;
    Vector v1(n);
    v1.set_Vector();
    Vector v2 = v1;
    v2.get_Vector();

    return 0;
}