#ifndef LABA_8_STUDENT_H
#define LABA_8_STUDENT_H

#include <string>
#include <ostream>


class Student {
private:
    std::string name;
    std::string surname;
    int number;
public:
    Student(const std::string &name = "None", const std::string &surname = "None", int number = 0);

    friend std::ostream &operator<<(std::ostream &os, const Student &student);
};


#endif //LABA_8_STUDENT_H
