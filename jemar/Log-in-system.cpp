#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string username;
    string password;
    string userType;
    string name;

public:
    User(string uname, string pword, string name, string utype) 
        : username(uname), password(pword), userType(utype), name(name) {}

    bool login(const string& uname, const string& pword) const {
        return (username == uname && password == pword);
    }

    void displayRole() const {
        cout << "\nWelcome, " << name << "!\n";
        cout << "User Type: " << userType << endl;
    }
};

int main() {
    const int SIZE = 3;

    User students[SIZE] = {
        User("student1", "pass1", "Jemar", "Student"),
        User("student2", "pass2", "Kahlil", "Student"),
        User("student3", "pass3", "Shane", "Student")
    };

    User faculties[SIZE] = {
        User("faculty1", "teach1", "Jemar", "Faculty"),
        User("faculty2", "teach2", "Kahlil", "Faculty"),
        User("faculty3", "teach3", "Shane", "Faculty")
    };

    User admin = User("admin1", "admin1", "Michael", "Administrator");

    string uname, password;
    bool logIn = false;

    cout << "Enter username: ";
    cin >> uname;
    cout << "Enter password: ";
    cin >> password;

    // Check student logins
    for (const auto& student : students) {
        if (student.login(uname, password)) {
            student.displayRole();
            logIn = true;
            break;
        }
    }

    // Check faculty logins
    if (!logIn) {
        for (const auto& faculty : faculties) {
            if (faculty.login(uname, password)) {
                faculty.displayRole();
                logIn = true;
                break;
            }
        }
    }

    // Check admin login
    if (!logIn && admin.login(uname, password)) {
        admin.displayRole();
        logIn = true;
    }

    // Display error message
    if (!logIn) {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}
