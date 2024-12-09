#include <iostream>

class Person {
public:
std::string name;
int age;
std::string address;
};

class Car {
public:
std::string brand;
std::string model;
};

int main () {

Person person1;
person1.name = "Craig";
person1.age = 20;
person1.address = "La Opinion";

Car car1;
car1.brand = "Toyota";
car1.model = "Corolla";

std::cout << person1.name << " Is: " << person1.age << "\nHe lives in: " << person1.address << "\nHe owns a: " << car1.brand << car1.model;

return 0;
}
