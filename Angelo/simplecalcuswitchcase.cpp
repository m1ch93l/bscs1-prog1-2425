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
    cout << "Choose Operation: Add[1] Subtraction[2] Multiplication[3] Division[4]" << endl;
    cout << "Enter a number: ";
    cin >> choose;
    
    cout << endl;

    if (choose >= 1 && choose <= 4) {
    switch(choose) {
        case 1:
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            add(num1, num2);
            cout << endl;
            break;
            
            
        case 2:
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            subtract(num1,num2);
            cout << endl;
            break;
            
        case 3:
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            multiply(num1,num2);
            cout << endl;
            break;
            
        case 4:
            cout << "Enter the 1st number: ";
            cin >> num1;
            cout << "Enter the 2nd number: ";
            cin >> num2;
            
            division(num1,num2);
            cout << endl;
            break;
          }   
           
          } else {
             cout << "Invalid Choice! Please Select between 1 to 4 only!" << endl;
           } 
               
            cout << "Do you want to perform another operation? [yes/no]: ";
            cin >> cont;
            cout << endl;
    }
          cout << "Goodbye" << endl;

    return 0;
  }
