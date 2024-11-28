#include <iostream>
using namespace std;

class Person {
        public:
            string name;
            int age;
    };

int main() {

    Person person1;
    person1.name = "John";
    person1.age = 30;

    cout << person1.name << " is " << person1.age << " years old." << endl;

    return 0;
}