#include "Vector.h"
#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

Vector::Vector(double x, double y): x(x), y(y) {}

Vector &Vector::operator=(Vector const &rhs) {
    cout << "After overloaded = is called." << endl;
    x = rhs.x;
    y = rhs.y;
    return *this;
}

bool Vector::operator==(Vector const &rhs) {
    cout << "After overloaded == is called." << endl;
    return ((x/rhs.x == y/rhs.y) && sqrt(x*x + y*y) == sqrt(rhs.x*rhs.x + rhs.y*rhs.y));
}

bool Vector::operator!=(Vector const &rhs) {
    cout << "After overloaded != is called." << endl;
    return !((x/rhs.x == y/rhs.y) && sqrt(x*x + y*y) == sqrt(rhs.x*rhs.x + rhs.y*rhs.y));
}

std::ostream &operator<<(std::ostream &os, const Vector &vector) {
    os << "x: " << vector.x << " y: " << vector.y << endl;
    return os;
}

std::istream &operator>>(std::istream &is, Vector &vector) {
    cout << "Type in x: ";
    cin >> vector.x;
    cout << "Type in y: ";
    cin >> vector.y;
    return is;
}

