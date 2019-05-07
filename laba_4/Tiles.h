#ifndef LABA_3_TILES_H
#define LABA_3_TILES_H

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

class Tiles{
public:
    std::string brand;
    double size_h;
    double size_w;
    double price;
    void get_Data();
    Tiles(const std::string &brand = "None", double size_h = 0, double size_w = 0, double price = 0);
    Tiles(const Tiles &source);
    ~Tiles() {}
};

#endif //LABA_3_TILES_H
