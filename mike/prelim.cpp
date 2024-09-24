#include <iostream>
using namespace std;
int main() {

    string fname, lname, fullname;
    int birthyear, age, prelim, midterm, prefinal, final, average;

    cout << "This was a Prelim Exam!" << endl;

    cout << "First Name: ";
    getline(cin, fname);

    cout << "Last Name: ";
    getline(cin, lname);

    cout << "Birth Year: ";
    cin >> birthyear;

    fullname = fname + " " + lname;
    age = 2024 - birthyear;

    cout << "Hi, " + fullname + ", you are " + to_string(age) + " years old today." << endl;
    cout << "Please enter your Grades!" << endl;

    cout << "Prelim: ";
    cin >> prelim;

    cout << "Midterm: ";
    cin >> midterm;

    cout << "Prefinal: ";
    cin >> prefinal;

    cout << "Final: ";
    cin >> final;

    average = (prelim + midterm + prefinal + final) / 4;

    cout << "Your average is: " + to_string(average) << endl;

    if (average >= 50) {

        cout << "Congratulations! You passed!" << endl;
        
        if (average >= 96 && average <= 100) {
            cout << "You got a 1.0 Grade Point!" << endl;
            cout << "Excellent" << endl;
        }else if (average >= 91 && average <= 95) {
            cout << "You got a 1.25 Grade Point!" << endl;
            cout << "Very Good" << endl;
        }else if (average >= 86 && average <= 90) {
            cout << "You got a 1.50 Grade Point!" << endl;
            cout << "Very Good" << endl;
        }else if (average >= 81 && average <= 85) {
            cout << "You got a 1.75 Grade Point!" << endl;
            cout << "Good" << endl;
        }else if (average >= 75 && average <= 80) {
            cout << "You got a 2.00 Grade Point!" << endl;
            cout << "Good" << endl;
        }else if (average >= 69 && average <= 74) {
            cout << "You got a 2.25 Grade Point!" << endl;
            cout << "Good" << endl;
        }else if (average >= 63 && average <= 68) {
            cout << "You got a 2.50 Grade Point!" << endl;
            cout << "Fair" << endl;
        }else if (average >= 57 && average <= 62) {
            cout << "You got a 2.75 Grade Point!" << endl;
            cout << "Fair" << endl;
        }else if (average >= 50 && average <= 56) {
            cout << "You got a 3.00 Grade Point!" << endl;
            cout << "Fair" << endl;
        }else{
            cout << "You got a 5.00 Grade Point!" << endl;
            cout << "Failed" << endl;
        }

    } else {
        cout << "I'm sorry, You failed!" << endl;
    }

    return 0;
}