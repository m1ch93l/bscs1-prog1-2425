#include <iostream>
using namespace std;

int main(){

  double prelim, midterm, prefinal, final;

  cout << " ACTIVITY 2 " << endl;
  cout << " " << endl;
  cout << " My Grades " << endl;

  cout << " Prelim: ";
  cin >> prelim;

  cout << " Midterm: ";
  cin >> midterm;

  cout << " Prefinal: ";
  cin >> prefinal;

  cout << " Final: ";
  cin >> final;

  double add = prelim + midterm + prefinal + final;
  double divide = add / 4;

  cout << " Average: " << divide << endl;

  return 0;
}
