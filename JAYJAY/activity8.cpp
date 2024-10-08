#include<iostream>
 using namespace std;

  int main(){

    string name = "Jayjay";
    char middle = 'M';
    string last = "Tirol";
    int age = 18;
    bool boolvalue = true;
    double height = 180;
    float weight = 56;
    
    cout << "Name:" << name << endl;
    cout << "MiddleName:" << middle << endl;
    cout << "LastName:" << last << endl;
    cout << "Age:" << age << endl;
    cout << "Male:" << boolvalue << endl;
    cout << "Height(cm):" << height << endl;
    cout << "Weight(kg):" << weight << endl;
    
    cout << "_____________________" <<endl;
    
    string firstname = "Jayjay";
    string middlename = "M.";
    string lastname = "Tirol";

    string full;

    full = firstname +" "+ middlename +" "+ lastname;

    cout << "ACTIVITY 1" <<endl;
    cout << "CONCAT" <<endl;
    cout << "Name:" << full <<endl;

    cout << "_____________________" <<endl;

    string First = "Jayjay ";
    string Middle = "M.";
    string Last = " Tirol ";
    string course= "ACT-";
    int intNum = 1;
 
    string fullname;
 
    fullname = First+Middle+Last;
    
    cout << "ACTIVITY 2" << endl;
    cout << "NAME AND COURSE" << endl;
    cout << "Name:" << fullname <<endl;
    cout << "Course:" << course;
    cout << intNum <<endl;

   cout << "_____________________" <<endl;
   
   int num1 = 2;
   int num2 = 8;
   int results = num1+num2;
   
   cout << "ACTIVITY 3" <<endl;
   cout << "COMBINATION" <<endl;
   cout << "Number1:"  << num1 <<endl;
   cout << "Number2:" << num2 <<endl;
   cout << "Results:" << results <<endl;
   
   cout << "_____________________" <<endl;
   
  int prelim = 80;
  int midterm = 90;
  int prefinal = 95;
  int final = 85;
  int average = prelim+midterm+prefinal+final;
  float divide = 4;
  float result = average/divide;
  
    cout << "ACTIVITY 4" <<endl;
    cout << "Grades" <<endl;
    cout << "Prelim:" << prelim << endl;
    cout << "Midterm:" << midterm << endl;
    cout << "Prefinal:" << prefinal << endl;
    cout << "Final:" << final << endl;   
    cout << "Average:" << result << endl;
  
      
    return 0;
    }
        
