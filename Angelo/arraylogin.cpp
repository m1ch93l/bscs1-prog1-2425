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
    User student[] = {
        User("student1", "pass1","Student", "Student"),
      
    };
    User faculty[] = {
        User("faculty1", "teach1","Teacher", "Faculty"),
     
    };
    User admin[] = {
        User("admin1", "admin1","Admin", "Administrator")
    };

    string uname, password;
    
    int size = 3;
    bool logIn = false;

    cout << "Enter username: ";
    cin >> uname;
    cout << "Enter password: ";
    cin >> password;

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

    if (!logIn) {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}