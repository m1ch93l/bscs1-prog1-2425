#include <iostream>
using namespace std;

void add(double a, double b) {
  cout << "Addition: " << a+b << endl;
}

void subtract(double a, double b) {
  cout << "Subtraction: " << a-b << endl;
}

void multiply(double a, double b) {
  cout << "Multiplication: " << a*b << endl;
}

void division(double a, double b) {
    cout << "Division: " << a/b << endl;
}

int main() {
  double numb1, numb2;

  cout << "Enter first number: ";
  cin >> numb1;
  cout << "Enter second number: ";
  cin >> numb2;
  
  cout << "" << endl;
  cout << "" << endl;

  add(numb1, numb2);
  subtract(numb1, numb2);
  multiply(numb1, numb2);
  division(numb1, numb2);

  return 0;
}
