#include <iostream>

using namespace std;

int main() {
  // Define the grades as variables
  int prelim = 80;
  int midterm = 90;
  int prefinal = 95;
  int final = 85;

  // Calculate the average
  double average = (prelim + midterm + prefinal + final) / 4.0;

  // Display the results
  cout << "Grades:" << endl;
  cout << "Prelim: " << prelim << endl;
  cout << "Midterm: " << midterm << endl;
  cout << "Prefinal: " << prefinal << endl;
  cout << "Final: " << final << endl;
  cout << "Average: " << average << endl;

  return 0;
}