include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter 1st Num: ";
    cin >> num1;

    cout << "Enter 2nd Num: ";
    cin >> num2;

    int sum = num1 + num2;
    int subtract = num1 - num2;
    int multiply = num1 * num2;
    int quotient = num1 / num2;

    cout << "\nOutput:\n";
    cout << "Sum: " << sum << endl;
    cout << "Subtract: " << subtract << endl;
    cout << "Multiply: " << multiply << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
