//
// Created by prose on 16.03.2019.
//
#include "pf.h"
void output(int array[], int size){
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
//2_1
int sum(int array[], int size){
    int total = 0;
    for (int i = 0; i < size; i++)
        total += array[i];
    return total;
}

int product(int array[], int size){
    int total = 1;
    for (int i = 0; i < size; i++)
        total *= array[i];
    return total;
}

//2_2
void invert(int array[], int size){
    int temp[size];
    for (int i = 0; i < size; i++)
        temp[i] = array[size-i-1];
    for (int i = 0; i < size; i++){
        array[i] = temp[i];
        cout << array[i];
    }
}

void increase(int array[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    output(array, size);
}

void decrease(int array[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] < array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    output(array, size);
}

void (*foo(int array[], int size))(int[], int){
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    if (sum == array[0])
        return &invert;
    else if (sum > array[0])
        return &increase;
    else
        return &decrease;
}
