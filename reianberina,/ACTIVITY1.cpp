
#include <iostream>
using namespace std;

int main(){

 string firstname, middlename, lastname;
 
 cout << "ACTIVITY 1 " << endl;
 cout << " " << endl;
 
 cout << "First Name: ";
 cin >> firstname;
 
 cout << "Middle Name: ";
 cin >> middlename;
 
 cout << "Last Name: ";
 cin >> lastname;
 
 string fullname;
 fullname = firstname+" "+middlename+" "+lastname;
 
 cout << "My Fullname is: " << fullname << endl;
 
 return 0;
 }
