#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string username;
    string password;
    string userType;
    string MyName;
    

public:
    User(string uname, string pword, string name, string utype) {
        username = uname;
        password = pword;
        userType = utype;
        MyName = name;
        
    }

    bool login(string uname, string pword) {
        return (username == uname && password == pword);
    }

    void displayRole() {
        cout << endl;
        cout << "Welcome, " << MyName << "!" << endl;
        cout << "User Type: " << userType << endl;
    }
};

int main() {
    // Declare and initialize an array of User objects
    User student[] = {
        User("student1", "pass1","Lance", "Student"),
        User("student2", "pass2","Angelo", "Student"),
        User("student3", "pass3","John Mark", "Student")
    };
    User faculty[] = {
        User("faculty1", "teach1","Lance", "Faculty"),
        User("faculty2", "teach2","Angelo", "Faculty"),
        User("faculty3", "teach3","John Mark", "Faculty")
    };
    User admin[] = {
        User("admin1", "admin1","Michael", "Administrator")
    };

    string uname, password;
    
    // Pang array and login check
    int size = 3;
    bool logIn = false;

    // Input username and password
    cout << "Enter username: ";
    cin >> uname;
    cout << "Enter password: ";
    cin >> password;

    // Check login for each user
    for (int i = 0; i < size; i++) {
        if (student[i].login(uname, password)) {
            student[i].displayRole();
            logIn = true;
            break;
        }
    }

    if (!logIn) {
        for (int i = 0; i < size; i++) {
            if (faculty[i].login(uname, password)) {
                faculty[i].displayRole();
                logIn = true;
                break;
            }
        }
    }

    if (!logIn) {
        for (int i = 0; i < size; i++) {
            if (admin[i].login(uname, password)) {
                admin[i].displayRole();
                logIn = true;
                break;
            } 
        }
    }

    // Display error message if login fails
    if (!logIn) {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}