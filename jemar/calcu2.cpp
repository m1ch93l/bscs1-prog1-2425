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

    double num1,num2;
    int choose;
    string cont = "yes";
    
    while(cont == "yes" || cont == "Yes") {
    cout << "" << endl;
    cout << "Choose: Add[1] Subtraction[2] Multiplication[3] Division[4]" << endl;
    cout << "" <<endl;
    cout << "Enter a number: ";
    cin >> choose;
    
    cout << endl;

    switch(choose) {
        case 1:
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            add(num1, num2);
            break;
            
            
        case 2:
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            subtract(num1,num2);
            break;
            
        case 3:
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            multiply(num1,num2);
            break;
            
        case 4:
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            division(num1,num2);
            break;
        }    
    }

    return 0;
  }
