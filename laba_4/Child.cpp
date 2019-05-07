#include "Child.h"

void Child::set_Child() {
    cout << "Student's data: ";
    cin >> name;
    cin >> surname;
    cin >> age;
};
void Child::get_Child(){
    cout << "Name: " << name << endl
         << "Surname: " << surname << endl
         << "Age: " << age << endl;
}

Child::Child(const std::string &name, const std::string &surname, int age) : name(name), surname(surname), age(age) {}

Child::Child(const Child &source): name(source.name), surname(source.surname), age(source.age){}