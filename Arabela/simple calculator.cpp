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
  double num1, num2;

  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  
  cout << endl;

  add(num1, num2);
  subtract(num1, num2);
  multiply(num1, num2);
  division(num1, num2);

  return 0;
}
