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

    if (1 <= average && average <= 49) {
        cout << "\nUnfortunately, you failed. your score 5.00 Please try harder next time.\n";
    } else {
        cout << "\nCongratulations 👏🏻👏🏻🎉\n";
    }
   
   cout << "-----------------------------\n";
    
    if (50 <= average && average <= 56){ 
    cout << " Congratulations you passed!, fair! ";
    cout << " 3.00 ";
    cout << " C- ";
    }
    
    if (57 <= average && average <= 62){ 
    cout << " Congratulations you passed!, fair! ";
    cout << " 2.75 ";
    cout << " C ";
    }
    
    if (63 <= average && average <= 68){
    cout << " Congratulations you passed!, fair! ";
    cout << " 2.50 ";
    cout << " C+ ";
    }
    
    if (68 <= average && average <= 74){
    cout << " Congratulations you passed!, Good! ";
    cout << " 2.25 ";
    cout << " B- ";
    
    }
    
    if (75 <= average && average <= 80){
    cout << " Congratulations you passed!, Good! ";
    cout << " 2.00 ";
    cout << " B ";
    }
    
    if (81 <= average && average <= 85){
    cout << " Congratulations you passed!, Good! ";
    cout << " 1.75 ";
    cout << " B+ ";
    }
    
    if (86 <= average && average <= 90){
    cout << " Congratulations you passed!, Very good! ";
    cout << " 1.50 ";
    cout << " A- ";
    }
    
    if (91 <= average && average <= 95){
    cout << " Congratulations you passed!, Very good!";
    cout << " 1.25";
    cout << " A ";
    }
    
    if (96 <= average && average <= 100){
    cout << " Congratulations you passed!, Excellent!";
    cout << " 1.00 ";
    cout << " A+ ";
    }
    
    return 0;
}
