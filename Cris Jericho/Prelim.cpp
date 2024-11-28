#include <iostream>
using namespace std;

int main(){

     // Personal Information Input
    string firstName, secondaryName, lastName;
    int birthYear, currentYear = 2024, age;

    cout << "This is a Prelim Exam!" << endl;
    cout << "Enter your first name: "; cin >> firstName;
    cout << "Enter your secondary name: "; cin >> secondaryName;
    cout << "Enter your last name: "; cin >> lastName;
    cout << "Enter your birth year: "; cin >> birthYear;

    // Calculate Age
    age = currentYear - birthYear;

    // Greeting Message
    cout << "Hi, " << firstName << " " << secondaryName << " " << lastName << ", you are " << age << " years old today." << endl;
    
 double prelim, midterm, prefinal, final;
 

  cout << " " <<endl;
  cout << " Please Enter your Grades " << endl;
  cout << " " << endl;
  
  cout << " Prelim: ";
  cin >> prelim;
  
  cout << " Midterm: ";
  cin >> midterm;
  
  cout << " Prefinal: ";
  cin >> prefinal;
  
  cout << " Final: ";
  cin >> final;
  
  double add = prelim + midterm + prefinal + final;
  double divide = add / 4;
  
  cout << " " << endl;
  cout << " Average: " << divide << endl;
  cout << " " <<endl;
  
   int num = (divide);
   int num1 = (num);
   float num2 = (num1);
   
   
      if (num >= 50 && num <= 100){
           cout << "Congratulations! You Passed!" << endl;
      } else {
           cout << "You Failed" << endl;     
      }
      
            if(num1 >= 96 && num1 <= 100){
                 cout << "You got a 1.00 Grade Point!" << endl;
            } else if(num1 >= 91 && num1 <= 95){
                 cout << "You got a 1.25 Grade Point!" << endl;
            } else if(num1 >= 86 && num1 <= 90){
                 cout << "You got a 1.50 Grade Point!" << endl;
            } else if(num1 >= 81 && num1 <= 85){
                 cout << "You got a 1.75 Grade Point!" << endl;
            } else if(num1 >= 75 && num1 <= 80){
                 cout << "You got a 2.00 Grade Point!" << endl;
            } else if(num1 >= 69 && num1 <= 74){
                 cout << "You got a 2.25 Grade Point!" << endl;   
            } else if(num1 >= 63 && num1 <= 68){
                 cout << "You got a 2.50 Grade Point!" << endl;
            } else if(num1 >= 57 && num1 <= 62){
                 cout << "You got a 2.75 Grade Point!" << endl;
            } else if(num1 >= 50 && num1 <= 56){
                 cout << "You got a 3.00 Grade Point!" << endl;
            } else { 
                 cout << "You got a 5.00 Grade Point!" << endl;
            }     
      
       
      cout << " " <<endl;
      
      if (num2 >= 96 && num2 <= 100){
          cout << "Excellent!" << endl;
      } else if (num2 >= 91 && num2 <= 95){
          cout << "Very Good!" << endl;
      } else if (num2 >= 86 && num2 <= 90){
          cout << "Very Good!" << endl;
      } else if (num2 >= 81 && num2 <= 85){
          cout << "Good!" << endl;
      } else if (num2 >= 75 && num2 <= 80){
          cout << "Good!" << endl;
      } else if (num2 >= 69 && num2 <= 74) {
          cout << "Good!" << endl;
      } else if (num2 >= 63 && num2 <= 68){
          cout << "Fair." << endl;
      } else if (num2 >= 57 && num2 <= 62){
          cout << "Fair." << endl;
      } else if (num2 >= 50 && num2 <= 56){
          cout << "Fair." << endl;
      } else {  
          cout << "Failed." << endl;
      }
      
      
 return 0;
 }
