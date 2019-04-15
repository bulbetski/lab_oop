#include "alive.h"
#include <iostream>

using std::cout;
using std::endl;

bool Alive::isAlive() const {
    return alive;
}

void Alive::setAlive(bool alive) {
    Alive::alive = alive;
}

void Alive::move() {
    cout << "It moves." << endl;
}

void Bird::fly() {
    cout << "It flies." << endl;
}

const std::string &Bird::getName() const {
    return name;
}

void Bird::setName(const std::string &name) {
    Bird::name = name;
}

void Fish::swim() {
    cout << "It swims." << endl;
}

const std::string &Fish::getName() const {
    return name;
}

void Fish::setName(const std::string &name) {
    Fish::name = name;
}

void Animal::eat() {
    cout << "It eats." << endl;
}

void Animal::make_noise() {
    cout << "It makes some noise." << endl;
}

void Dog::bark() {
    cout << "It barks." << endl;
}

const std::string &Dog::getName() const {
    return name;
}

void Dog::setName(const std::string &name) {
    Dog::name = name;
}

void Cat::meow() {
    cout << "It meows." << endl;
}
