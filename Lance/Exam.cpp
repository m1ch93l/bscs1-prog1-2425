//PrelimExam

#include <iostream>  
using namespace std;
int main() {

//September 18, 2024        

 cout << "This was a Prelim Exam!" << endl;
 cout << " " << endl;
 cout << "=====================" << endl;
 
 //Info
 string first,last;
 int byear;
 
 cout << "First Name: ";
 cin >> first;
 cout << "Last Name: ";
 cin >> last;
 cout << "Birth Year: ";
 cin >> byear;
 
 int currentyear = 2024;
 int yold = currentyear - byear;
 
 cout << " " << endl;
 
 cout << "Hi, " << first << " " << last << "," << " you are " << yold  << " years old today" << endl;

cout << " " << endl;

	
 cout << "=====================" << endl;
 
 
 //Computing
cout << "Please enter your Grades!" << endl;
cout << " " << endl;

int prelim,midterm,prefinal,final;

cout << "Prelim: ";
cin >> prelim;
cout << "Midterm: ";
cin >> midterm;
cout << "Pre-Final: ";
cin >> prefinal;
cout << "Final: ";
cin >> final;

double add = prelim+midterm+prefinal+final;
double divide = add/4;

cout << " " << endl;
cout << "Average: " << divide << endl;
cout << " " << endl;

//if and else
double result = divide; 
    
    if (result > 50){cout << "Congratulations! You passed!" << endl;}
    else {if (result < 50) cout << "Sorry, You Failed" << endl;}
    
    
    
    if (result <= 50) {cout << "You got a 5.00 Grade Point!" << endl; cout << "Failed" << endl;}
    if (result > 50)  if (result <= 56.9){cout << "You got a 3.00 Grade Point!" << endl; 
    cout << "Fair" << endl;}
    if (result >= 57) if (result <= 62.9){cout << "You got a 2.75 Grade Point!" << endl; 
    cout << "Fair" << endl;}
    if (result >= 63) if (result <= 68.9){cout << "You got a 2.50 Grade Point!" << endl; 
    cout << "Fair" << endl;}
    if (result >= 69) if (result <= 74.9){cout << "You got a 2.25 Grade Point!" << endl; 
    cout << "Good" << endl;}
    if (result >= 75) if (result <= 80.9){cout << "You got a 2.00 Grade Point!" << endl; 
    cout << "Good" << endl;}
    if (result >= 81) if (result <= 85.9){cout << "You got a 1.75 Grade Point!" << endl; 
    cout << "Good" << endl;}
    if (result >= 86) if (result <= 90.9){cout << "You got a 1.50 Grade Point!" << endl; 
    cout << "Very Good" << endl;}
    if (result >= 91) if (result <= 95.9){cout << "You got a 1.25 Grade Point!" << endl; 
    cout << "Very Good" << endl;}
    if (result >= 96) if (result <= 100){cout << "You got a 1.00 Grade Point!" << endl; 
    cout << "Exellent" << endl;}
    


return 0;

}
