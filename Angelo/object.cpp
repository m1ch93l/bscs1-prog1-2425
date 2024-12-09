#include<iostream>
using namespace std;

class Person { 
      public:
          string name;
          string middle;
          string lastN;
          int age;
     };
 class Car {
      public:
          string c1;
          string c2;  
     };
     
     int main() {
     
        Person person1;
        person1.name = "Angelo";
        person1.middle = " O.";
        person1.lastN = " Foliente";
        person1.age = 20;
        
        Car c1;
        c1.c1 = " Lamborghini Aventador";
        c1.c2 = " Black";
        
        cout << person1.name << person1.middle << person1.lastN << " is " << person1.age << " year old" << endl;
        cout << endl;
        cout << "My dream Car is" << c1.c1 << " color" << c1.c2 << endl;
    return 0;
    }         
          