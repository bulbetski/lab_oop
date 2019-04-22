//
// Created by prose on 03.03.2019.
//
#include <iostream>
#include "complex_file.h"
#include <fstream>
#include <math.h>
//#include <string>

using std::cout;
using std::cin;
using std::endl;
/*

double input(){
    std::string inp;
    cin >> inp;

    while (true){
        bool wrong_input = false;
        if (inp[0] == 45){
            if (inp.size() == 1)
                wrong_input = true;
            else{
                for (int i = 1; i < inp.size(); i++){
                    if (inp[i] < '0' || inp[i] > '9')
                        wrong_input = true;
                }
            }
        }
        else {
            for (auto num: inp){
                if (num < '0' || num > '9')
                    wrong_input = true;
            }
        }
        if (wrong_input){
            inp = "";
            cout << "The input is wrong, please try again: ";
            cin >> inp;
        }
        else
            break;
    }
    return std::stod(inp);
}
void file_input(){
    int n;
    double re;
    double im;

    cout << "---------------------------------------" << endl;
    cout << "Amount of complex numbers: ";
    cin >> n;
    cout << endl;

    std::ofstream File("complex.txt", std::ios_base::app);
    //File.open("complex.txt", std::ios_base::app);
    for (int i = 0; i < n; i++){
        cout << "Number " << i+1 << ": " << endl;
        cout << "Real part: ";
        re = input();
        cout << "Imaginary part: ";
        im = input();
        cout << "---------------------------------------" << endl;
        File << re;
        im >= 0 ? File << "+" : File << "";
        File << im << "i" << endl;
    }
    File.close();
}

*/

int vector_fill(std::vector<Complex> &array) {
    int sign = 0;
    bool minus = false;
    int k = 0;
    std::string num;
    std::string temp;
    double re;
    double im;

    std::ifstream File("complex.txt");
    while (getline(File, num)) {
        for (int i = 1; i < num.size(); i++) {
            if (num[i] == '-' || num[i] == '+'){
                sign = i;
                if (num[i] == '-')
                    minus = true;
            }
        }


        for (int i = 0; i < sign; i++)
            temp[i] = num[i];
        re = std::stod(temp);

        for (int i = sign + 2; i < num.size(); i++)
            temp[i - sign - 2] = num[i];
        im = std::stod(temp);
        if (minus)
            im *= -1;

        temp = "";

        array.emplace_back(re, im);
        k++;
        minus = false;
    }
    File.close();
    return k;
}
void complex_max_length(std::vector<Complex>&array, int num){
    double max_len = -1;
    for (int i = 0; i < num; i++){
        double z = sqrt(array[i].Re*array[i].Re + array[i].Im*array[i].Im);
        if (z > max_len)
            max_len = z;
    }
    cout << "The largest modulus of listed complex numbers is " << max_len << endl;
}

