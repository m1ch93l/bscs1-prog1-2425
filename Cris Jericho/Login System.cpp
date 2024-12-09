#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string username;
    string password;
    string usertype;

public:
    User(string uname, string psword, string utype) {
        username = uname;
        password = psword;
        usertype = utype;
    }

    bool login(string uname, string psword) {
        return (username == uname && password == psword);
    }

    void displayRole() {
        cout << "Welcome, " << usertype << "!" << endl;
    }
};

int main() {

    
    User student1("student1", "pass123", "Student");
    User student2("student2", "pass456", "Student");
    User student3("student3", "pass789", "Student");

    User faculty1("faculty1", "teach123", "Faculty");
    User faculty2("faculty2", "teach456", "Faculty");
    User faculty3("faculty3", "teach789", "Faculty");

    User admin1("admin1", "admin123", "Administrator");
    User admin2("admin2", "admin456", "Administrator");
    User admin3("admin3", "admin789", "Administrator");

    string uname, psword;

    cout << "Enter Username: ";
    cin >> uname;
    cout << "Enter Password: ";
    cin >> psword;

    
    if (student1.login(uname, psword)) {
        student1.displayRole();
    } 
    else if (student2.login(uname, psword)) {
        student2.displayRole();
    }
    else if (student3.login(uname, psword)) {
        student3.displayRole();
    }
    else if (faculty1.login(uname, psword)) {
        faculty1.displayRole();
    } 
    else if (faculty2.login(uname, psword)) {
        faculty2.displayRole();
    }
    else if (faculty3.login(uname, psword)) {
        faculty3.displayRole();
    } 
    else if (admin1.login(uname, psword)) {
        admin1.displayRole();
    } 
    else if (admin2.login(uname, psword)) {
        admin2.displayRole();
    }
    else if (admin3.login(uname, psword)) {
        admin3.displayRole();
    } 
    else {
        cout << "Invalid Username or Password." << endl;
    }

    return 0;
}
