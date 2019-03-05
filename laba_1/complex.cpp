//
// Created by prose on 01.03.2019.
//
#include <iostream>
#include "complex.h"
#include <string>
#include <iomanip>

using namespace std;

double input(){
    std::string inp;
    cin >> inp;

    while (true){
        bool wrong_input = false;
        int number_of_dots = 0;
        int number_of_minuses = 0;
        for (auto c: inp){
            if (c == '.')
                number_of_dots++;
            if (c == '-')
                number_of_minuses++;
        }

        if (inp[0] == '-'){
            if (inp.size() == 1)
                wrong_input = true;
            else{
                if (number_of_dots > 1 || number_of_minuses > 1)
                    wrong_input = true;
                else {
                    if (inp[1] == '.' || inp[inp.size()-1] == '.')
                        wrong_input = true;
                    else {
                        for (int i = 1; i < inp.size(); i++){
                            if ((inp[i] < '0' || inp[i] > '9') && inp[i] != '.')
                                wrong_input = true;
                        }
                    }
                }
            }
        }
        else {
            if (inp[0] == '.')
                wrong_input = true;
            else{
                if (number_of_dots > 1)
                    wrong_input = true;
                else{
                    if (inp[0] == '.' || inp[inp.size()-1] == '.')
                        wrong_input = true;
                    else {
                        for (auto c: inp){
                            if ((c < '0' || c > '9') && c != '.')
                                wrong_input = true;
                        }
                    }
                }
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
void Complex::output(){
    cout << Re;
    Im >= 0 ? cout << "+" : cout << "";
    cout << Im << "i";
}
void add(struct Complex c1, struct Complex c2) {
    cout << "Addition: " << endl;
    c1.output();
    cout << " + ";
    c2.output();
    cout << " = ";
    cout << c1.Re + c2.Re;
    c1.Im + c2.Im >= 0 ? cout << "+" : cout << "";
    cout << c1.Im + c2.Im << "i" << endl << endl;
}
void sub(struct Complex c1, struct Complex c2){
    cout << "Substraction: " << endl;
    c1.output();
    cout << " - ";
    c2.output();
    cout << " = ";
    cout << c1.Re - c2.Re;
    c1.Im - c2.Im >= 0 ? cout << "+" : cout << "";
    cout << c1.Im - c2.Im << "i" << endl << endl;
}
void product(struct Complex c1, struct Complex c2){
    double re = c1.Re*c2.Re - c1.Im*c2.Im;
    double im = c1.Re*c2.Im + c1.Im*c2.Re;
    cout << "Production: " << endl;
    c1.output();
    cout << " * ";
    c2.output();
    cout << " = ";
    cout << re;
    im >= 0 ? cout << "+" : cout << "";
    cout << im << "i" << endl << endl;
}
void division(struct Complex c1, struct Complex c2){
    double re = (c1.Re*c2.Re - c1.Im*-c2.Im)/(c2.Re*c2.Re + c2.Im*c2.Im);
    double im = (c1.Re*-c2.Im + c1.Im*c2.Re)/(c2.Re*c2.Re + c2.Im*c2.Im);
    cout << "Division: " << endl;
    c1.output();
    cout << " / ";
    c2.output();
    cout << " = ";
    cout<<fixed<<setprecision(4);
    cout << re;
    im >= 0 ? cout << "+" : cout << "";
    cout << im << "i" << endl;
}
