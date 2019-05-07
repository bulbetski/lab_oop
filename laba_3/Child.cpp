#include "Child.h"

void Child::set_Child() {
    cout << "Student's data: ";
    cin >> name;
    cin >> surname;
    cin >> age;
};
void Child::get_Child(){
    cout << "Name: " << name << endl
         << "Surname: " << surname << endl
         << "Age: " << age << endl;
}