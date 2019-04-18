#include "boss.h"

Boss::Boss(const std::string &surname, const std::string &name, const std::string &midname, int age,
           int numberOfWorkers) : Human(surname, name, midname, age), number_of_workers(numberOfWorkers) {}
