#ifndef LABA_3_CHILD_H
#define LABA_3_CHILD_H
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
class Child{
private:
    std::string name;
    std::string surname;
    int age;
public:
    Child(const std::string &name = "None", const std::string &surname = "None", int age = 0);
    Child(const Child &source);
    ~Child() {}
    void set_Child();
    void get_Child();
};


#endif //LABA_3_CHILD_H
