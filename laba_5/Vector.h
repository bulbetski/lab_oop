#ifndef LABA_5_VECTOR_H
#define LABA_5_VECTOR_H


#include <ostream>

class Vector {
private:
    double x;
    double y;
public:
    Vector(double x = 0, double y = 0);
    Vector &operator=(Vector const &rhs);
    bool operator==(Vector const &rhs);
    bool operator!=(Vector const &rhs);

    friend std::ostream &operator<<(std::ostream &os, const Vector &vector);
    friend std::istream &operator>>(std::istream &is, Vector &vector);
};


#endif //LABA_5_VECTOR_H
