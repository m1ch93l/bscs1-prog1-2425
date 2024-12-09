#include <iostream>
using namespace std;

class person {
public:
 string name = "jayjay tirol";
 int age = 18;

};

class car {
public:
string brand = "Bmw";
string model = "2024";


};

int main () {
    person person1;
    car car;

    cout << "what is your name: "; 
    cin >> person1.name;
    cout << "age:";
    cin >> person1.age;
    cout << "car brand:";
    cin >> car.brand;
    cout << "model:";
    cin >> car.model;

    cout << person1.name << " at " << person1.age << " has a " << car.brand << " " << car.model << " model. ";
}
