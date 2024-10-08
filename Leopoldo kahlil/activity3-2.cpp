#include<iostream>
using namespace std;

int main()
{
    string Firstname, Secondname, Middlename, Lastname;

    cout << "ACTIVITY 1:" << endl;
    cout << "" << endl;

    cout << "First Name: ";
    cin >> Firstname;
    cin >> Secondname;

    cout << "Middle Name: ";
    cin >> Middlename;

    cout << "Last Name: ";
    cin >> Lastname;

    string fullname;
    fullname = Firstname+ " "+Secondname+" " +Middlename+ " " +Lastname;

    cout << "" << endl;
    cout << "FULL NAME: " << fullname << endl;
    cout << "" << endl;


    double prelim, midterm, prefinal, final;

    cout << "ACTIVITY 2:" << endl;
    cout << "" << endl;

    cout << "Grades" << endl;
    cout << "" << endl;

    cout << "Prelim: ";
    cin >> prelim;

    cout << "Midterm: ";
    cin >> midterm;

    cout << "Prefinal: ";
    cin >> prefinal;

    cout << "Final: ";
    cin >> final;

    double addition = prelim+midterm+prefinal+final;
    double division = addition/4;

    cout << "" << endl;
    cout << "TOTAL AVERAGE: " << division << endl;

    return 0;




}
