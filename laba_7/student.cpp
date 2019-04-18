#include "student.h"


Student::Student(const std::string &surname, const std::string &name, const std::string &midname, int age,
                 bool onLesson) : Human(surname, name, midname, age), on_lesson(onLesson) {}
