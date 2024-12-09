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
        cout << endl;
        cout << "Welcome, " << userType << "!" << endl;
    }
};

int main() {
    
    User student[] = {
        User("student1", "STUDENT1", "Student"),
        User("student2", "STUDENT2", "Student"),
        User("student3", "STUDENT3", "Student")
    };
    User faculty[] = {
        User("faculty1", "FACULTY1", "Faculty"),
        User("faculty2", "FACULTY2", "Faculty"),
        User("faculty3", "FACULTY3", "Faculty")
    };
    User admin[] = {
        User("admin1", "ADMIN1", "Administrator")
    };

    string uname, password;
    
    
    int size = 5;
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
