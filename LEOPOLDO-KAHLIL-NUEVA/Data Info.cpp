#include <iostream>
#include <string>
using namespace std;

int main() {

    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;
    string stringVar;

    string name;
    integerVar = 19;
    floatVar = 5.8f;
    doubleVar = 2.71828;
    charVar = 'K';
    stringVar = "LEOPOLDO KAHLIL NUEVA";

    cout << "USERNAME: ";
    cin >>name;
    cout << "Age: " << integerVar << endl;
    cout << "Height: " << floatVar << endl;
    cout << "Code: " << doubleVar << endl;
    cout << "First letter: " << charVar << endl;
    cout << "Full name: " << stringVar << endl;

    return 0;
}
