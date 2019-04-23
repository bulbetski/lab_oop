#include "Student.h"
#include <iostream>
using std::endl;

Student::Student(const std::string &name, const std::string &surname, int number) : name(name), surname(surname),
                                                                                    number(number) {}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "Name: " << student.name << endl <<  "Surname: " <<  student.surname << endl << "Number: " << student.number << endl;
    return os;
}
