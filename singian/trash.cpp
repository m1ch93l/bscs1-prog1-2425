#include <iostream> 
//I don't know what the fuck I'm doing anymore!!!
class User {
    private:

    std::string usname;
    std::string pw;
    std::string UserRole;
    std::string Name;

    public:

    User (std::string username, std::string pass, std::string namen, std::string UsRole) {

        usname = username;
        pw = pass;
        UserRole = UsRole;
        Name = namen;

    }

    bool login (std::string username, std::string pass) {
        return (usname == username && pw == pass);
    }

    void showUSrole () {
        std::cout << Name << " Welcome, " << UserRole;
    }
    

    
};

int main () {

    User Student [] = {
        User ("Student1", "pw01", "Noivern", "Student"),
        User ("Student2", "pw02", "Dave", "Student")
    };

    User Faculty [] = {
        User ("Faculty1", "pw01", "Toxicroack", "Faculty"),
        User ("Faculty2", "pw02", "Crobat", "Faculty")
    };
    
    User Administrator [] = {
        User ("Administrator", "admin", "Gardevoir", "Administrator")
    };

    int cnt;

    std::string username, pass;


    std::cout << "Enter your Username: " << '\n';
    std::cin >> username;
    std::cout << "Enter your Passsword: " << '\n';
    std::cin >> pass;
    

    return 0;
}
