#include <iostream>
using namespace std;

 class person {
       public:
        string name;
        int age;
 };

 class car {
       public:
        string name;
        
};

     
int main() {

    person person1;
    person1.name = "jayjay tirol";
    person1.age = 18;

    car car1;
    car1.name = "My car is a 2024 BMW 2 Series Gran Coupe";
    
    cout << person1.name << " is " << person1.age << " years old. " << endl;
    cout << car1.name << endl;
    return 0;
}
