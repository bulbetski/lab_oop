#include <iostream>
#include "Complex.h"
#include "Vector.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    //5_1
    Complex c1;
    Complex c2;

    cin >> c1;

    cout << "c2 before: " << c2;

    c2 = c1;
    cout << c2;

    ++c2;
    cout << c2;

    c2--;
    cout << c2;

    cout << "c1 == c2: " << (c1 == c2) << endl;
    cout << "c1 != c2: " << (c1 != c2) << endl;
    //5_2

    Vector v1;
    Vector v2;
    cin >> v1;
    cout << "v2 before: " << v2;

    v2 = v1;
    cout << v2;

    cout << "v1 == v2: " << (v1 == v2) << endl;
    cout << "v1 != v2: " << (v1 != v2) << endl;

    return 0;
}