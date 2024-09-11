#include<iostream>
using namespace std;

int main()
{
   int A;
   int B;
   int C;
   int D; 
   string name;
  


  cout << "USERNAME:";
  cin >>name;
  cout << "GRADES" << endl;
  cout << "Prelim: " << "";
  cin >>A;
  cout << "Midterm: " << "";
  cin >>B;
  cout << "Prefinal: " << "";
  cin >>C;
  cout << "Final: " << "";
  cin >>D;
  cout << "------------------" << endl;
  int add = A+B+C+D;
  cout << "Total: " << add << endl;
  float division = 4;
  float Result = add / division;
  cout << "Average: " << Result << endl; 









    return 0;
}
