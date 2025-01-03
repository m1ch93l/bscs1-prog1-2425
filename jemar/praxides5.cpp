#include <iostream>
using namespace std;

int main() {
        
    string firstName;
    string middleName;
    string lastName;

    cout << "Activity 1" << endl;
    cout << "" << endl;

    cout << "firstName: ";
    cin >> firstName;

    cout << "middleName: ";
    cin >> middleName;

    cout << "lastName: ";
    cin >> lastName;

    string fullName = firstName + " " + middleName + " " + lastName;

    cout << "FullName: " << fullName;
    cout << "" << endl;
  
  double prelim;
  double midterm;
  double prefinal;
  double final;
    
  cout << "Activity 2" << endl;
  cout << "" << endl;
  
  cout << "My Grades" << endl;
  
  cout << "Prelim: ";
  cin >> prelim;
  
  cout << "Midterm: ";
  cin >> midterm;
  
  cout << "Prefinal: ";
  cin >> prefinal;
  
  cout << "Final: ";
  cin >> final;
  
  double add = prelim + midterm + prefinal + final;
  double divide = add / 4;
  
  cout << "" << endl;
  cout << "Average: " << divide << endl;
  cout << "" << endl;
    
    return 0;
}
