#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string username;
    string password;
    string userType;

public:
    User(string uname, string pword, string utype) {
        username = uname;
        password = pword;
        userType = utype;
    }

    bool login(string uname, string pword) {
        return (username == uname && password == pword);
    }

    void displayRole() {
        cout << "Welcome, " << userType << "!" << endl;
    }
};

int main() {

    // Create user objects
    User student("student1", "pass123", "Student");
    User faculty("faculty1", "teach456", "Faculty");
    User admin("admin1", "admin789", "Administrator");

    string uname, password;

    // Input username and password
    cout << "Enter username: ";
    cin >> uname;
    cout << "Enter password: ";
    cin >> password;

    // Check login for each user
    if (student.login(uname, password)) {
        student.displayRole();
    } else if (faculty.login(uname, password)) {
        faculty.displayRole();
    } else if (admin.login(uname, password)) {
        admin.displayRole();
    } else {
        cout << "Invalid username or password!" << endl;
    }

    return 0;
}