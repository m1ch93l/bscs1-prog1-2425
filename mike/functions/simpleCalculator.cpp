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

  add(5, 3);
  subtract(5, 3);
  multiply(5, 3);
  division(5, 3);

  return 0;

}