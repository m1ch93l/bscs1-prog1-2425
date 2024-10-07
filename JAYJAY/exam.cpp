#include <iostream>
using namespace std;

int main() {

    string FirstName, LastName;
    
    int BirthYear, prelim, midterm, prefinal, finalGrade;
    double average;


    cout << " This was a Prelim Exam!" << endl;
    cout << "" << endl;
    
    cout << "First Name: ";
    cin >> FirstName;
    
    cout << "Last Name: ";
    cin >> LastName;
    
    cout << "Birth Year: ";
    cin >> BirthYear;


    int age = 2024 - BirthYear;
    cout << "hi, " << FirstName << " " << LastName << ", you are " << age << " years old today." << endl;
    cout << "" << endl;


    cout << "Please enter your Grades!" << endl;
    cout << "" << endl;
    cout << "Prelim: ";
    cin >> prelim;
    cout << "Midterm: ";
    cin >> midterm;
    cout << "Prefinal: ";
    cin >> prefinal;
    cout << "Final: ";
    cin >> finalGrade;

