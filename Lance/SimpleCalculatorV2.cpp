//Take home activity
// October 10,2024

#include <iostream>
using namespace std;


void add(double a, double b) {
  cout << "Result: " << a+b << endl;
}

void subtract(double a, double b) {
  cout << "Result: " << a-b << endl;
}

void multiply(double a, double b) {
  cout << "Result: " << a*b << endl;
}

void division(double a, double b) {
    cout << "Result: " << a/b << endl;
}


int main() {

    double num1,num2;
    int choose;
    string cont = "yes";
    
    while(cont == "yes" || cont == "Yes" || cont == "y") {
    cout << "----- Choose an operation: Add[1] Subtraction[2] Multiplication[3] Division[4] -----" << endl;
    cout << "Enter a number: ";
    cin >> choose;
    
    cout << endl;

    switch(choose) {
        case 1:
            cout << "[ADDITION]" << endl;
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            add(num1, num2);
            cout << endl;
            break;
            
            
        case 2:
             cout << "[SUBTRACTION]" << endl;
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            subtract(num1,num2);
            cout << endl;
            break;
            
        case 3:
            cout << "[MULTIPLICATION]" << endl;
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            multiply(num1,num2);
            cout << endl;
            break;
            
        case 4:
            cout << "[DIVISION]" << endl;
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            division(num1,num2);
            cout << endl;
            break;
            
         }
            cout << "Do you want to perform another operation? [yes/no]: ";
            cin >> cont;
            cout << endl;
    }
          cout << "Sayonara/Goodbye!" << endl;

    return 0;
  }