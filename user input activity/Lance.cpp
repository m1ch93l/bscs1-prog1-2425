#include <iostream>  

int main() {
    using namespace std;
 
 cout << "September 12, 2024" << endl;
 cout << "------------" << endl;
 cout << "Activity 1" << endl;
 cout << "" << endl;

  string firstname;
  string lastname;        
    
    cout << "Enter your name: ";
    cin >> firstname;
    cout << "Enter your lastname: ";
    cin >> lastname;
    cout << "FullName: " << firstname << lastname << endl;
    
cout << "" << endl;
cout << "------------" << endl;


int prelim,midterm,prefinal,final;

cout << "Activity 2" << endl;
cout << "" << endl;
cout << "Grades------ " << endl;

cout << "Prelim: ";
cin >> prelim;
cout << "Midterm: ";
cin >> midterm;
cout << "Pre-Final: ";
cin >> prefinal;
cout << "Final: ";
cin >> final;

double add = prelim+midterm+prefinal+final;
double devide = add/4;

cout << "" << endl;
cout << "Average: " << devide << endl;

return 0;

}
