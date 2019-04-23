#ifndef LABA_8_CAR_H
#define LABA_8_CAR_H

#include <string>

class Car {
private:
    std::string brand;
public:
    Car(const std::string &brand = "None");
    const std::string &getBrand() const;
};


#endif //LABA_8_CAR_H
