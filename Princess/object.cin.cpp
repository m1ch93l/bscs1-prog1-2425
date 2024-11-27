#include <iostream>
using namespace std;

class Person {
    public:
       string name;
       int age;
       string address;

  };
class Car {
    public:
       string name1;
};

int main () {

    Person person1;
    Car car1;

    cout << "Please enter you Name: ";
    cin >> person1.name;

    cout << "Please enter your Address: ";
    cin >> person1. address;

    cout << "Please enter your Age: ";
    cin >> person1.age;

    cout << "Please enter the COLOR of your favorite Car: ";
    cin >> car1.name1;

    cout << person1.name << " is from " << person1.address << " ,and already " << person1.age << " years old. " << car1.name1 << " is the color of his/her favorite car. " << endl;

    

    return 0;
}
