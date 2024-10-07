#include <iostream>

using namespace std;

int main() {
    
  int intNum = 8;
  float floatNum = 100.5;
  double doubleNum = 100.5;
  char charLetter = 'J';
  bool boolValue = true;
  string stringText = "Hello, Jemar! 114456110015";
  string firstName = "jemar";
  string middleName = "parco";
  string lastName = "praxides";

    string fullName;
  
  fullName = firstName + " " + middleName + " " + lastName;
  
  cout << "Integer: " << intNum << endl;
  cout << "Float: " << floatNum << endl;
  cout << "Double: " << doubleNum << endl;
  cout << "Character: " << charLetter << endl;
  cout << "Boolean: " << boolValue << endl;
  cout << "String: " << stringText << endl;
  cout << fullName << endl;
  
  return 0;
}
