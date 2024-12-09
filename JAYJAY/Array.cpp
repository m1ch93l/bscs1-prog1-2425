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
        cout << "WELCOME BOSSING, " << userType << "!" << "How can we help you?" << endl;
    }
};

int main() {
    User student[] = {
        User("student1", "STudent12", "Student1"),
        User("student2", "STudent12", "Student2"),
        User("student3", "STundent13", "Student3"),
        User("student4", "STundent14", "Student4")  
};
    User faculty[] = {
        User("faculty1", "mambeth", "Faculty1"),
        User("faculty2", "sirmike", "Faculty2"),
        User("faculty3", "mamjak", "Faculty3"),
        User("faculty4", "sirjak", "Faculty4")
};
    User admin[] = {
        User("admin1", "ADMINISTRATE", "Administrator12"),
        User("admin1", "ADMINISTRATE", "Administrator13"),
        User("admin1", "ADMINISTRATE", "Administrator14"),
        User("admin1", "ADMINISTRATE", "Administrator15")
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
