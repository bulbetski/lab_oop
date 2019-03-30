#include "pf.h"



int main() {
    int arr[] = {1, -1, -2, -3, -4};
    //2_1
    int (*p1)(int[], int) = &sum;
    int (*p2)(int[], int) = &product;
    cout << "Sum of array elements: " << p1(arr, 5) << endl;
    cout << "Product of array elements: " << p2(arr, 5) << endl;
    //2_2
    void (*bar)(int[], int) = foo(arr, 5);
    bar(arr, 5);
}