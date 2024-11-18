#include <iostream>
using namespace std;

void add(int a, int b) {
  cout << "Sum: " << a+b << endl;
}

void subtract(int a, int b) {
  cout << "Difference: " << a-b << endl;
}

void multiply(int a, int b) {
  cout << "Product: " << a*b << endl;
}

void division(int a, int b) {
    cout << "Quotient: " << a/b << endl;
}

int main() {
  int num1, num2;

  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  
  cout << "" << endl;

  add(num1, num2);
  subtract(num1, num2);
  multiply(num1, num2);
  division(num1, num2);

  return 0;
}
