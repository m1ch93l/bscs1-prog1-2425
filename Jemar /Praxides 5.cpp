#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, middleName, lastName;
    int birthYear, prelim, midterm, prefinal, final;
    int average;

    cout << "This is was prelim exam.\n";

    cout << "First Name: ";
    cin >> firstName;

    cout << "Middle Name: ";
    cin >> middleName;

    cout << "Last Name: ";
    cin >> lastName;

    cout << "Birth Year: ";
    cin >> birthYear;

    int currentYear = 2024;
    int age = currentYear - birthYear;

    cout << "\nHi, " << firstName << " " << middleName << " " << lastName << ", you are " << age << " years old today\n\n";

    cout << "Please Enter your Grades\n";

    cout << "-----------------------------\n";

    cout << "Prelim: ";
    cin >> prelim;

    cout << "Midterm: ";
    cin >> midterm;

    cout << "Prefinal: ";
    cin >> prefinal;

    cout << "Final: ";
    cin >> final;

    average = (prelim + midterm + prefinal + final) / 4;

    cout << "\nAverage: " << average << endl;

    if (average >= 75) {
        cout << "\nCONGRATULATIONS! You Passed! You got a 1.50 Grade Point! Very Good\n";
    } else {
        cout << "\nUnfortunately, you failed. Please try harder next time.\n";
    }

    return 0;
}
    
