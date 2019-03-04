#include <iostream>
#include <fstream>
#include "complex_file.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    //file_input();
    int n;
    std::vector<Complex> arr;
    n = vector_fill(arr);
    complex_max_length(arr, n);

    cin.get(); cin.get();
    return 0;
}