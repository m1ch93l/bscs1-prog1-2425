#include <iostream>
using namespace std;
 

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2;
    char operation;

    cout << "Simple Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    float result;

    switch (operation) {
        case '+':
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = divide(num1, num2);
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            break;
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
