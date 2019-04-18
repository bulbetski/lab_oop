#ifndef LABA_7_HUMAN_H
#define LABA_7_HUMAN_H

#include <string>
#include <iostream>
class Human {
private:
    std::string surname;
    std::string name;
    std::string midname;
    int age;
public:
    Human() {};

    Human(const std::string &surname, const std::string &name, const std::string &midname, int age);
    virtual void print() {std::cout << "human" << std::endl;};
    ~Human(){};
};


#endif //LABA_7_HUMAN_H
