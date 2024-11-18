#include <iostream>
#include "annex.cpp"
using namespace std;

class Car {
    public:
        string brand;
        string model;
};

int main() {

    Person person1;
    Car car;

    cout << "What is your name: ";
    cin >> person1.name;
    cout << "Age: ";
    cin >> person1.age;
    cout << "Car Brand: ";
    cin >> car.brand;
    cout << "Model: ";
    cin >> car.model;

    cout << person1.name << " at " << person1.age << " has a " << car.brand << " " << car.model << " model.";
}
