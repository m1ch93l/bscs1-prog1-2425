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
    person1.name = "Princess Estimo";
    person1.age = 18;
    person1.address = " Iriga City ";
    Car car1;
    car1.name1 = "Jew";
    
    cout << person1.name << " is already " << person1.age << " years old,";
    
    cout << " from " << person1.address << endl;

    cout << "My car name is " << car1.name1 << endl;
    return 0;
}
