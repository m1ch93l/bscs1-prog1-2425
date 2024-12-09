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
    User student[] = {
        User("student1", "pass123", "Student"),
        User("student2", "pass456", "Student"),
        User("student3", "pass789", "Student")
        };

    User faculty[] = {
        User("faculty1", "teach123", "Faculty"),
        User("faculty2", "teach456", "Faculty"),
        User("faculty3", "teach789", "Faculty")
        };

    User admin[] = {
        User("admin1", "admin123", "Administrator"),
        User("admin2", "admin456", "Administrator"),
        User("admin3", "admin789", "Administrator")
        };

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