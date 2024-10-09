#include <iostream>
using namespace std;

int main(){

    cout << "This was a Prelim exam 1! " << endl;
    cout << " " << endl;
    
    string First = "Angelo ";
    string Last = "Foliente ";
    int year = 2004;
    
    cout << " " << endl;
    cout << "First Name: " << First <<endl;
    cout << "Last Name: " << Last << endl;
    cout << "Birth Year: " << year <<endl;
    
    cout << " " <<endl;
    
    string greet = "Hi,";
    string name = "Angelo Foliente,";
    string word = "you are 19 years old today";
    
    string greetings;
    greetings = greet+" "+name+" "+word;
    
    cout << greetings << endl;
    
 double prelim, midterm, prefinal, final;
 
  cout << "_________________________________________" <<endl;
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
           cout << "CONGRATULATIONS! You Passed!" << endl;
      } else {
           cout << "CONGRATULATIONS YOU DID YOUR BEST! BUT YOU FAILED!" << endl;     
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
          cout << "EXCELLENT!😲👏" << endl;
      } else if (num2 >= 91 && num2 <= 95){
          cout << "VERY GOOD!💪👏" << endl;
      } else if (num2 >= 86 && num2 <= 90){
          cout << "VERY GOOD!💪👏" << endl;
      } else if (num2 >= 81 && num2 <= 85){
          cout << "GOOD!👍" << endl;
      } else if (num2 >= 75 && num2 <= 80){
          cout << "GOOD!👍" << endl;
      } else if (num2 >= 69 && num2 <= 74) {
          cout << "GOOD!👍" << endl;
      } else if (num2 >= 63 && num2 <= 68){
          cout << "FAIR!🤏" << endl;
      } else if (num2 >= 57 && num2 <= 62){
          cout << "FAIR!🤏" << endl;
      } else if (num2 >= 50 && num2 <= 56){
          cout << "FAIR!🤏" << endl;
      } else {  
          cout << "FAILED!👀👎" << endl;
      }
      
      
 return 0;
 }