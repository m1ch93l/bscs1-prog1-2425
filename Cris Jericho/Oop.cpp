#include<iostream>
using namespace std;

class Person {
    public:
    string name;
    int age;
    string game;

};

int main() {

    Person person1;
    person1.name = "Cris";
    person1.age = 19;
    person1.game = "Deepwoken";

cout << person1.name << " Is " << person1.age << " years old and he plays " << person1.game << endl;

return 0;
}

