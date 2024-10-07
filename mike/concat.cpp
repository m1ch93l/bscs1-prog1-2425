#include <iostream>
using namespace std;

int main() {
    
  string firstName = "michael";
  string middleName = "bolo";
  string lastName = "banaria";

  string fullName;
  int number = 1;
  
  fullName = firstName + " " + middleName + " " + lastName + to_string(number);
  
  cout << fullName << endl;
  
  return 0;
}


