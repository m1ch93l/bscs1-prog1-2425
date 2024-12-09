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
Car car1;

std::cout << "What's your name?";
std::cin >> person1.name;

std::cout << "What's your age? ";
std::cin >> person1.age;

std::cout << "Where do you live? ";
std::cin >> person1.address;

std::cout << "What brand is your car? ";
std::cin >> car1.brand;

std::cout << "What model is your car? ";
std::cin >> car1.model;

std::cout << "Your name is: " << person1.name << " His age is: " << person1.age << "\nHe lives in: " << person1.address << "\nHe owns a: " << car1.brand << "Model: " << car1.model;

return 0;
}
