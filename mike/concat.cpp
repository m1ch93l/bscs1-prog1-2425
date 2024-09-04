// this line is used to import the iostream standard library, which provides input-output functions, such as cin and cout.
#include <iostream>
// this line is used to import the endl function, which is used to print a newline character.
using namespace std;
// this line is used to define the main function.
int main() {
    // this line is used to declare and initialize the variables with the first name, middle name, and last name.
  string firstName = "michael";
  string middleName = "bolo";
  string lastName = "bañaria";
  // this line is used to declare a variable that will be used to store the full name.
  string fullName;
  // this line is used to concatenate the first name, middle name, and last name, and store it in the fullName variable.
  fullName = firstName + " " + middleName + " " + lastName;
  // this line is used to print the full name to the console.
  cout << fullName << endl;
  // this line is used to return 0 from the main function.
  return 0;
}


