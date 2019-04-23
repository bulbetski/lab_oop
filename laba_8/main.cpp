#include <iostream>
#include "Student.h"
#include "Complex.h"
#include "Car.h"
#include <vector>
#include <list>
#include <queue>

using std::cout;
using std::endl;

int main() {
    //8_1
    std::vector<Student> vec(1, Student());
    vec.emplace_back("Zakhar", "Proselkov", 12345);
    vec.push_back(Student("Misha", "Efremov", 12345));

    for (auto student: vec)
        cout << student << endl;

    //8_2
    std::list<Complex> myList(1, Complex(5, 5));
    myList.emplace_back(1,1);
    myList.push_back(Complex());

    for (auto i = myList.begin(); i != myList.end(); i++){ //for (std::list<Complex>::iterator .....
        cout << *i << endl;
    }
    cout << endl;

    //8_3
    std::queue<Car> myQueue;

    myQueue.push(Car("Lada"));
    myQueue.emplace("Ferrari");


    while (!myQueue.empty()){
        cout << myQueue.front().getBrand() << " has been washed." << endl;
        myQueue.pop();
    }
    cout << "There is no car in the queue." << endl;
    return 0;
}