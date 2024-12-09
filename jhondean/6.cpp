
#include <iostream>

using namespace std;

int main () {

string firstname;
string secondname;
string middlename;
string lastname;
int birthyear, currentyear = 2024, age;

cout << "First Name: ";
cin >> firstname;

cin >> secondname;

cout << "Middle Name: ";
cin >> middlename;

cout << "Last Name: ";
cin >> lastname;

cout << "Birth Year: ";
cin >> birthyear;

age = currentyear - birthyear;
cout << "Hi! " << firstname << " " << secondname << " your age is " << age;

return 0;





}
