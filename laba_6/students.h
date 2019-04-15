#ifndef LABA_6_STUDENTS_H
#define LABA_6_STUDENTS_H
#include <string>

class Student {
private:
    std::string name;
    std::string surname;
    std::string group;
public:
    const std::string &getName() const;
    void setName(const std::string &name);

    const std::string &getSurname() const;
    void setSurname(const std::string &surname);

    const std::string &getGroup() const;
    void setGroup(const std::string &group);
};

class Headman: public Student {
private:
    std::string mail;
    std::string phone_number;
public:
    const std::string &getMail() const;
    void setMail(const std::string &mail);

    const std::string &getPhoneNumber() const;
    void setPhoneNumber(const std::string &phoneNumber);
};

#endif //LABA_6_STUDENTS_H
