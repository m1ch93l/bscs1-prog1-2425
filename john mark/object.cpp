#include <iostream>
using namespace std;

class Person{
        public:
            string name;
            string middle;
            string lastname;
            int age;
            
     }; 
     
class Car{
        public:
        string car1;
        string car2;
             
};
int main () {

    Person person1;
    person1.name = "John Mark ";
    person1.middle = "Siguenza ";
    person1.lastname = "Saberola";
    person1.age = 18;
    
    Car car;
    car.car1 = "Porsche 911 GT3";
    car.car2 = "Black";
    
    
    cout << person1.name << person1.middle << person1.lastname << " is " << person1.age << " years old." << endl;
    cout << endl;
    cout << "My dream car is " << car.car1 << " " << car.car2 << " color" << endl;

    return 0;
    
}    