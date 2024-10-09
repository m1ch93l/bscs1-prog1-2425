#include<iostream>
using namespace std;

int main()
{
    int intNum = 6;
    float floatNum = 159.6;
    double doubleNum = 159.6;
    char charLetter = 'M';
    bool boolValue = true;
    string stringText = "Hello Mariel! 736392";
    string firstName = "mariel";
    string middleName = "tucay";
    string lastName = "garcia";
    
    string fullName;
    
0p    fullName = firstName + " " + middleName + " " + lastName;
    
    cout << "Integer" << intNum << endl;
    cout << "Float" << floatNum << endl;
    cout << "Double" << doubleNum << endl;
    cout << "Character" << charLetter << endl;
    cout << "Bollean" << boolValue << endl;
    cout << "String" << stringText << endl;
    cout << "fullname" << endl;
    
    return 0;
}
