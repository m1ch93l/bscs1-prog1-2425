#include<iostream>
using namespace std;

 int main(){

    string First = "Angelo ";
    string Middle = "O.";
    string Last = " Foliente ";
    string course= "BSCS-";
    int intNum = 1;
 
    string fullname;
 
    fullname = First+Middle+Last;
    
    cout << "CONCAT" << endl;
    cout << "Name:" << fullname <<endl;
    cout << "Course:" << course;
    cout << intNum <<endl;

return 0;
}