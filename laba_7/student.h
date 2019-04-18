#ifndef LABA_7_STUDENT_H
#define LABA_7_STUDENT_H

#include "human.h"

class Student: public Human{
private:
    bool on_lesson;
public:
    Student() {};
    Student(const std::string &surname, const std::string &name, const std::string &midname, int age, bool onLesson);
    void print() {std::cout << "student" << std::endl;};
    ~Student(){};
};


#endif //LABA_7_STUDENT_H
