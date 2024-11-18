#include <iostream>

using namespace std;

float add(float y, float z);
float subtract(float y, float z);
float multiply(float y, float z);
float divide(float y, float z);

int main() {
    float num1, num2;
    char operation;
    
    cout << "Hello! My name is Princess Estimo from ACT-1. " << endl; 
    cout << "Welcome to my SIMPLE CALCULATOR!" << endl;
    
    while (true) {
        cout << "Enter 1st number: ";
        cin >> num1;
    
        cout << "Enter 2nd number: ";
        cin >> num2;
    
        cout << "Choose operation " << endl;
        cout << "(-) SUBTRACT" << endl;
        cout << "(*) MULTIPLY" << endl;
        cout << "(/) DIVIDE" << endl;
        cout << "(+) ADDITION" << endl;
        cout << "Enter operation: ";
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

        cout << "The Result: " << result << endl;
        }
    return 0;
    }


    float add(float y, float z) {
    return y + z;
    }

    float subtract(float y, float z) {
    return y - z;
    }

    float multiply(float y, float z) {
    return y * z;
    }

    float divide(float y, float z) {
    return y / z;
    }
