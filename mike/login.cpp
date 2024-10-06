#include <iostream>
using namespace std;

int main() {
    string username[100], password[100], usern, passw;
    int choose;

    do{
        cout << "Welcome to Login Page! Choose [1]Register or [2]Login: ";
        cin >> choose;

        if(choose == 1) 
        {
            cout << "Please Register!";
            cout << "Enter your username: ";
            cin >> username[0];
            cout << "Enter your password: ";
            cin >> password[0];

            cout << "Registration successful!" << endl;
        }

        if(choose == 2) {
            for(int count = 0; count <= 2; count++)
            {
                cout << "Enter your username: ";
                cin >> usern;

                cout << "Enter your password: ";
                cin >> passw;

                if(username[0] == usern && password[0] == passw)
                {
                    cout << "Login successful!" << endl;
                    break;
                }else if (count < 2){
                    cout << "Login failed! Wrong Username or Password! Try again!" << endl;
                }else{
                    cout << "Too many failed attempts! Please try again later!" << endl;
                }
            }
        }

    }while(choose != 1 && choose != 2);

    return 0;
}
