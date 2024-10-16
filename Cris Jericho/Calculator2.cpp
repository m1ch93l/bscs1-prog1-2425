
#include <iostream>
using namespace std;

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 == 0) {
        cout << "Error: Cannot divide by zero" << endl;
        return 0;
    }
    return num1 / num2;
}

int main() {
    char operation;
    double num1, num2, result;

    cout << "Calculating Mantra" << endl;

    do {
        cout << "Enter operation (+, -, *, /) or 'e' to exit: ";
        cin >> operation;

        if (operation == 'e') {
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch(operation) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            default:
                cout << "Invalid operation. Please try again." << endl;
                continue;
        }

        cout << "Result: " << result << endl;

    } while (true);

    return 0;
}
