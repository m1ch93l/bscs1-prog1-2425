#include <iostream>
using namespace std;
int main() {

  int number; // explicit variable
  int number = 2; // implicit variable
  int x = number + 1; //anonymous variable

  int intNum = 1;
  float floatNum = 10.5;
  double doubleNum = 10.4;
  char charLetter = 'A';
  bool boolValue = false;
  string stringText = "Hello, world! 3897428974";
  
  cout << "Integer: " << intNum << endl;
  cout << "Float: " << floatNum << endl;
  cout << "Double: " << doubleNum << endl;
  cout << "Character: " << charLetter << endl;
  cout << "Boolean: " << boolValue << endl;
  cout << "String: " << stringText << endl;

  return 0;
}