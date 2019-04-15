#ifndef LABA_6_ALIVE_H
#define LABA_6_ALIVE_H

#include <string>
class Alive{
private:
    bool alive;
    void move();
public:
    bool isAlive() const;
    void setAlive(bool alive);
};

class Bird: public Alive{
private:
    std::string name;
    void fly();
public:
    const std::string &getName() const;
    void setName(const std::string &name);
};

class Fish: public Alive {
private:
    std::string name;
    void swim();
public:
    const std::string &getName() const;
    void setName(const std::string &name);
};

class Animal: public Alive {
private:
    void eat();
    void make_noise();
};

class Dog: public Animal{
private:
    std::string name;
    void bark();
public:
    const std::string &getName() const;
    void setName(const std::string &name);
};

class Cat: public Animal{
private:
    std::string name;
    void meow();
};
#endif //LABA_6_ALIVE_H
