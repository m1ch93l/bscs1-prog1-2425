#include <iostream>
using namespace std;

void add(int a, int b) {
  cout << "Sum: " << a + b << endl;
}

void subtract(int a, int b) {
  cout << "Difference: " << a - b << endl;
}

void multiply(int a, int b) {
  cout << "Product: " << a * b << endl;
}

void division(int a, int b) {
  if (b != 0) {
    cout << "Quotient: " << a / b << endl;
  } else {
    cout << "Error: Division by zero is not allowed!" << endl;
  }
}

int main() {
  int num1, num2, choice;

  do {
    cout << "\nChoose an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
      cout << "Enter First number: ";
      cin >> num1;
      cout << "Enter Second number: ";
      cin >> num2;

      switch (choice) {
        case 1:
          add(num1, num2);
          break;
        case 2:
          subtract(num1, num2);
          break;
        case 3:
          multiply(num1, num2);
          break;
        case 4:
          division(num1, num2);
          break;
        default:
          cout << "Invalid choice!" << endl;
      }
    } else if (choice != 5) {
      cout << "Invalid choice, please try again." << endl;
    }

  } while (choice != 5);

  cout << "Goodbye!" << endl;
  return 0;
}
