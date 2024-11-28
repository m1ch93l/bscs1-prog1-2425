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
    cout << "What is your name: ";
    cin >> person1.name;
    cout << "Age: ";
    cin >> person1.age;
    cout << "Game: ";
    cin >> person1.game;

cout << person1.name << " Is " << person1.age << " years old and he plays " << person1.game << endl;
cout << "BUY DEEPWOKEN" << endl;

return 0;
}
