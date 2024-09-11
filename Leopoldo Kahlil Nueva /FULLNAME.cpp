#include<iostream>
using namespace std;

int main()
{
    string firstName;
    string middleName;
    string lastName;
    
    cout << "FirstName: ";
    cin >>firstName;
    
    cout << "MiddleName: ";
    cin >>middleName;
    
    cout << "LastName: ";
    cin >>lastName;
    
    string fullname = firstName+" "+middleName+" "+lastName;
    
    cout << "FullName: " << fullname << endl;
    
    
    
    return 0;
}
