#include <iostream>
using namespace std;

  class Person {
          public:
             string name;
             string middle;
             string lastname;
             int age;
  };
  
  class Car {
          public: 
             string c1;
             string c2;
  };
  
  
  int main() {
  
  Person person1;
  person1.name = "Lance";
  person1.middle = " B.";
  person1.lastname = " Llaban";
  person1.age = 18;
  
  Car cars;
  cars.c1 = "LAMBORGHINI";
  cars.c2 = "FERRARI";
  
  cout << person1.name << person1.middle << person1.lastname << " is " << person1.age << " years old" << endl;
  
  cout << endl;
  
  cout << "My first car is " << cars.c1 << " and my second car is " << cars.c2 << endl;
  
  return 0;
  }