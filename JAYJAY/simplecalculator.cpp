#include <iostream>

using namespace std;

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2;
    char operation;
    
    cout << " Welcome to JAYJAY'S SIMPLE CALCULATOR!" << endl;
    cout << " JAYJAY TIROL FROM ACT-1" << endl;
 
    while (true) {
        cout << "Enter first number: ";
        cin >> num1;
    
        cout << "Enter second number: ";
        cin >> num2;
    
        cout << "Choose operation: " << endl;
        cout << "(+) ADDTION" << endl;
        cout << "(*) MULTIPLY" << endl;
        cout << "(/) DIVIDE" << endl;
        cout << "(-) SUBTRACT" << endl;
        cout << "Enter an operation: ";
        cin >> operation;

        float result;

        
        if (operation == '+') {
            result = add(num1, num2);
            cout << num1 << " + " << num2 << " = " << result << endl;
        } else if (operation == '-') {
            result = subtract(num1, num2);
            cout << num1 << " - " << num2 << " = " << result << endl;
        } else if (operation == '*') {
            result = multiply(num1, num2);
            cout << num1 << " * " << num2 << " = " << result << endl;
        } else if (operation == '/') {
            if (num2 != 0) {
                result = divide(num1, num2);
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
        } else {
            cout << "Invalid operation!" << endl;
        }

        cout << "The Result is: " << result << endl;
        }
    return 0;
    }


    float add(float a, float b) {
    return a + b;
    }

    float subtract(float a, float b) {
    return a - b;
    }

    float multiply(float a, float b) {
    return a * b;
    }

    float divide(float a, float b) {
    return a / b;
    }
