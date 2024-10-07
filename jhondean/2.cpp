#include <iostream>
using namespace std;
int main(){

    string stringText = "Jhondean Cana Monte";
    string course = "BSCS-1";

    cout << "Activities: (September 9 2024)" << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "Activity 1: Name & Course" << endl;
    cout << "                           " << endl;
    cout << "Fullname:" << stringText << endl;
    cout << "Course:" << course << endl;
    cout << "________________________________"<< endl;
    cout << "                           " << endl;

    string firstname = "Jhondean";
    string middlename = "Cana";
    string lastname = "Monte";

    string fullname;

fullname = firstname + " " + middlename + " " + lastname;

    cout << "Activity 2: Concat " << endl;
    cout << "                                            " << endl;
    cout << fullname << endl;

    int number1 = 2;
    int number2 = 8;
    int number3 = number1+number2;

    cout << "________________________________"<< endl;
    cout << "                           " << endl;
    cout << "Activity3: Combination/Addition" << endl;
    cout << "                           " << endl;
    cout << "Number1:" << number1 << endl;
    cout << "Number2:" << number2 << endl;
    cout << "Results:" << number3 << endl; 

    int num1 = 80;
    int num2 = 90;
    int num3 = 95;
    int num4 = 85;
    int num5 = num1+num2+num3+num4;
    float add = 4;

    float Avg = num5/add;

    cout << "________________________________"<< endl;
    cout << "                           " << endl;
    cout << "Activity 4: Computing Semister Average" << endl;
    cout << "                           " << endl;
    cout << "Prelim:" << num1 << endl;
    cout << "Midterm:" << num2 << endl;
    cout << "Prefinal:" << num3 << endl;
    cout << "Final:" << num4 << endl;
    cout << "Average:" << Avg << endl;


    return 0;
}
