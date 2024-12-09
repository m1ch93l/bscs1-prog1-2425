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
        cout << "Welcome, " << userType << "!" << " Have a good day! :>" << endl;
    }
};

int main() {
    User student[] = {
        User("stud1", "studpass1", "Student1"),

};
    User faculty[] = {
        User("faculty1", "facultypass1", "Faculty1"),
        
};
    User admin[] = {
        User("admin1", "adminpass1", "Administrator1"),
        
};

    

    string username, password;
    bool logIn = false;

   
    while (!logIn) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        for (int i = 0; i < 4; i++) {
            if (student[i].login(username, password)) {
                student[i].displayRole();
                logIn = true;
                break;
            }
        }
        if (!logIn) {
            for (int i = 0; i < 4; i++) {
                if (faculty[i].login(username, password)) {
                    faculty[i].displayRole();
                    logIn = true;
                    break;
                }
             }         
        }
    

        
        if (!logIn) {
            for (int i = 0; i < 4; i++) {
                if (admin[i].login(username, password)) {
                    admin[i].displayRole();
                    logIn = true;
                    break;
                }
            }
        }

      
        if (!logIn) {
            cout << "Invalid username or password. Please try again." << endl;
        }
    }

    return 0;
}
