#include "Car.h"

const std::string &Car::getBrand() const {
    return brand;
}

Car::Car(const std::string &brand) : brand(brand) {}
