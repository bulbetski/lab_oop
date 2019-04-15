#include "students.h"

const std::string &Student::getName() const {
    return name;
}

void Student::setName(const std::string &name) {
    Student::name = name;
}

const std::string &Student::getSurname() const {
    return surname;
}

void Student::setSurname(const std::string &surname) {
    Student::surname = surname;
}

const std::string &Student::getGroup() const {
    return group;
}

void Student::setGroup(const std::string &group) {
    Student::group = group;
}

const std::string &Headman::getMail() const {
    return mail;
}

void Headman::setMail(const std::string &mail) {
    Headman::mail = mail;
}

const std::string &Headman::getPhoneNumber() const {
    return phone_number;
}

void Headman::setPhoneNumber(const std::string &phoneNumber) {
    phone_number = phoneNumber;
}
