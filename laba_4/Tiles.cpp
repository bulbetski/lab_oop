#include "Tiles.h"

void Tiles::get_Data() {
    cout << "Brand: " << brand << endl
         << "Height: " << size_h << endl
         << "Width: " << size_w << endl
         << "Price: " << price << endl;
}

Tiles::Tiles(const std::string &brand, double size_h, double size_w, double price) : brand(brand), size_h(size_h),
                                                                                     size_w(size_w), price(price) {}

Tiles::Tiles(const Tiles &source): brand(source.brand), size_h(source.size_h), size_w(source.size_w), price(source.price){}