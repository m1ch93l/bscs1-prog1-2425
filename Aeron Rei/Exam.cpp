#include <iostream>
#include <string>
using namespace std;

int main() {

    string firstName, lastName;
    int birthYear, prelim, midterm, prefinal, finalGrade;
    double average;


    cout << "This was a Prelim Exam!" << endl;
    cout << "" << endl;
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Birth Year: ";
    cin >> birthYear;


    int age = 2024 - birthYear;
    cout << "Hi, " << firstName << " " << lastName << ", you are " << age << " years old today." << endl;
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

    average = (prelim + midterm + prefinal + finalGrade) / 4.0;


    cout << "Your average is: " << average << endl;
    cout << "" << endl;

    string letterGrade;
    int gradePoint;
    
    if (average >= 50 && average <= 100){
        cout << "CONGRATULATIONS! You passed" <<endl;
    }else {  
        cout << "Sorry You Failed" <<endl;
    }    
    
    if (average >= 96 && average <= 100) {
        gradePoint = 1.00;
        letterGrade = "Excellent";
    } else if (average >= 91 && average <= 95) {
        gradePoint = 1.25;
        letterGrade = "Very Good";
    } else if (average >= 86 && average <= 90) {
        gradePoint = 1.50;
        letterGrade = "Very Good";
    } else if (average >= 81 && average <= 85) {
        gradePoint = 1.75;
        letterGrade = "Good";
    } else if (average >= 75 && average <= 80) {
        gradePoint = 2.00;
        letterGrade = "Good";
    } else if (average >= 69 && average <= 74) {
        gradePoint = 2.25;
        letterGrade = "Good";
    } else if (average >= 63 && average <= 68) {
        gradePoint = 2.50;
        letterGrade = "Fair";
    } else if (average >= 57 && average <= 62) {
        gradePoint = 2.75;
        letterGrade = "Fair";
    } else if (average >= 50 && average <= 56) {
        gradePoint = 3.00;
        letterGrade = "Fair";
    } else {
        gradePoint = 5.00;
        letterGrade = "Failed";
    }

    cout << "You got a " << gradePoint << " Grade Point (" << letterGrade << ")!" << endl;

    return 0;
}
