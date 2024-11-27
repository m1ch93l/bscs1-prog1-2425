//Activity 2
//November 18, 2024


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
                     string color;
  };
  
  
  int main() {
  
  Person person1;
  Car cars;
  
  cout << "What is your name: ";
  cin >> person1.name;
  cout << "Age: " ;
  cin >> person1.age;
  cout << "Car Brand: " ;
  cin >> cars.c1;
  cout << "Color: ";
  cin >> cars.color;
  
  cout << endl;
  
  cout << person1.name << " at " << person1.age << " years old has a " << cars.color << " " << cars.c1 << endl;
  
  
  return 0;
  }
