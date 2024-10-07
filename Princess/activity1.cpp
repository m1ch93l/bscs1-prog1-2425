#include <iostream>
using namespace std;
int main(){

    string Firstname;
    string Middlename;
    string Lastname;

    cout << "FirstName: ";
    cin >> Firstname;

    cout << "MiddleName: ";
    cin >> Middlename;

    cout << "LastName: ";
    cin >> Lastname;

    string Fullname = Firstname+" "+Middlename+" "+Lastname;
    
    cout << "Fullname: " << Fullname << endl;
    
    
    return 0;
}
