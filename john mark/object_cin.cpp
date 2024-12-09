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
        Car car;
        
        cout << "What is your name: ";
        cin >> person1.name;
        cout << "Age: ";
        cin >> person1.age;
        cout << "Dream Car: ";
        cin >> car.car1;
        cout << "Color: ";
        cin >> car.car2;
        
        cout << person1.name << " is a " << person1.age << " years old boy who is dreaming an " << car.car1 << " car with a black color." << endl;

    return 0;
    
}    