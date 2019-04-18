#ifndef LABA_7_BOSS_H
#define LABA_7_BOSS_H

#include "human.h"

class Boss: public Human {
private:
    int number_of_workers;
public:
    Boss() {};
    Boss(const std::string &surname, const std::string &name, const std::string &midname, int age, int numberOfWorkers);
    void print(){std::cout << "boss" << std::endl;};
    ~Boss(){};
};


#endif //LABA_7_BOSS_H
