#include <iostream>

using namespace std;

int main () {

cout<< "This was a Prelim Exam!" << endl;
cout << "______________________________________________" << endl;

 string firstname,lastname;
 int birthyear;
 
 cout << "FIRST NAME: ";
getline(cin,firstname);
 
 cout << "LAST NAME: ";
 cin >> lastname;
 
 cout << "BIRTH YEAR: ";
 cin >> birthyear;
 
int currentyear =2024;
int yearold = currentyear - birthyear;

string greet1 = "Hi!";
string greet2 = "you are";
string greet3 = "years old today";


cout <<"" << endl;
string full = greet1+ " " +firstname+ " " +lastname+ " " +greet2+ " " + to_string(yearold)+ " " +greet3;
cout << full << endl;

cout << "______________________________________________" << endl;
cout << "" << endl;
cout << "Please Enter Your Grades!" << endl;
cout << "" << endl;

int prelim;
int midterm;
int prefinal;
int final;

cout << "Prelim: ";
cin >> prelim;

cout << "Midterm: ";
cin >> midterm;

cout << "Prefinal: ";
cin >> prefinal;

cout << "Final: ";
cin >> final;

double add = prelim+midterm+prefinal+final;
double divide = add/4;

cout << "" << endl;
cout << "Your Average is: " << divide << endl;

cout << "" << endl;
if (divide <= 50){cout << "Sorry, You failed" << endl << "You got a 5.00 Grade Point" << endl << "Failed" << endl;}
if (divide > 50) if (divide <= 56){cout << "Congratulations! You passed!" << endl << "You got a 3.00 Grade Point" << endl << "Fair" << endl;}
if (divide > 57) if (divide <= 62){cout << "Congratulations! You passed!" << endl << "You got a 2.75 Grade Point" << endl << "Fair" << endl;}
if (divide > 63) if (divide <= 68){cout << "Congratulations! You passed!" << endl << "You got a 2.50 Grade Point" << endl << "Fair" << endl;}
if (divide > 69) if (divide <= 74){cout << "Congratulations! You passed!" << endl << "You got a 2.25 Grade Point" << endl << "Good" << endl;}
if (divide == 75) if (divide >= 80){cout << "Congratulations! You passed!" << endl << "You got a 2.00 Grade Point" << endl << "Good" << endl;}
if (divide > 81) if (divide <= 85){cout << "Congratulations! You passed!" << endl << "You got a 1.75 Grade Point" << endl << "Good" << endl;}
if (divide > 86) if (divide <= 90){cout << "Congratulations! You passed!" << endl << "You got a 1.50 Grade Point" << endl << "Very Good!" << endl;}
if (divide > 91) if (divide <= 95){cout << "Congratulations! You passed!" << endl << "You got a 1.25 Grade Point" << endl << "Very Good!" << endl;}
else if (divide > 96) if (divide <=100){cout << "Congratulations! You passed!" << endl << "You got a 1.00 Grade Point" << endl << "EXCELLENT!" << endl;}
return 0; 
}