#include "Vector.h"

void Vector::set_Vector(int size) {
    double inp;
    for (int i = 0; i < size; i++){
        cin >> inp;
        coord.push_back(inp);
    }
}
void Vector::get_Vector() {
    for (int i = 0; i < coord.size(); i++)
        cout << "Coord_" << i+1 << ": " << coord.at(i) << endl;
}