#include <iostream>
using namespace std;

int main() {
  cout << "September 12, 2024" << endl;
  cout << "---------" << endl;
  cout << "Activity 1" << endl;
  cout << "---------" << endl;
  string firstname;
  string lastname;
  cout << "Enter your firstname: ";
  cin >> firstname;
  cout << "Enter your lastname: ";
  cin >> lastname;
  cout << "FullName: " << firstname << " " << lastname << endl;
  cout << "---------" << endl;
  cout << "---------" << endl;
  int prelim, midterm, prefinal, final;
  cout << "Activity 2" << endl;
  cout << "---------" << endl;
  cout << "Grades-----" << endl;
  cout << "Prelim: ";
  cin >> prelim;
  cout << "Midterm: ";
  cin >> midterm;
  cout << "Pre-Final: ";
  cin >> prefinal;
  cout << "Final: ";
  cin >> final;
  double add = prelim + midterm + prefinal + final;
  double devide = add/4;

  cout << "" << endl;
  cout << "Average;" << devide << endl;

  return 0;
}