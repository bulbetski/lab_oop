#include "pf.h"



int main() {

    int arr[] = {1, -1, -2, -3, -4};
    void (*bar)(int[], int) = foo(arr, 5);
    bar(arr, 5);
}