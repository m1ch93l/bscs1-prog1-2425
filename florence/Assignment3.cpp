#include <iostream>
using namespace std;

int main() {
    string username[100], password[100], usern, passw;
    double balance[100] = {0}; 
    int choose;
    int registeredUsers = 0;  
    bool exitProgram = false;

    while (!exitProgram) {
        cout << "\n--- Welcome to the Login Page! ---" << endl;
        cout << "Choose [1] Register, [2] Login, or [3] Exit: ";
        cin >> choose;

        if (cin.fail() || (choose < 1 || choose > 3)) {

            cin.clear();  
            cin.ignore(1000, '\n');  
            cout << "Invalid choice! Please choose either [1], [2], or [3]." << endl;
            continue;
        }

        if (choose == 1) {
            if (registeredUsers < 100) {

                cout << "Please Register!" << endl;
                cout << "Enter your username: ";
                cin >> username[registeredUsers];
                cout << "Enter your password: ";
                cin >> password[registeredUsers];
                balance[registeredUsers] = 0; 
                registeredUsers++;
                cout << "Registration successful!" << endl;
            } else {
                cout << "Registration limit reached. Cannot register more users." << endl;
            }
        } else if (choose == 2) {
            if (registeredUsers == 0) {
                cout << "No registered users. Please register first!" << endl;
                continue;
            }

            bool loginSuccess = false;
            int loggedInUserIndex = -1; 
            for (int count = 0; count < 3; count++) {
                cout << "Enter your username: ";
                cin >> usern;
                cout << "Enter your password: ";
                cin >> passw;


                for (int i = 0; i < registeredUsers; i++) {
                    if (username[i] == usern && password[i] == passw) {
                        cout << "Login successful!" << endl;
                        loggedInUserIndex = i;
                        loginSuccess = true;
                        break;
                    }
                }

                if (loginSuccess) {

                    bool loggedIn = true;
                    while (loggedIn) {
                        int option;
                        cout << "\n--- Welcome, " << username[loggedInUserIndex] << "! ---" << endl;
                        cout << "Choose [1] Deposit, [2] Withdraw, [3] Check Balance, [4] Logout: ";
                        cin >> option;

                        if (option == 1) {
                            double depositAmount;
                            cout << "Enter amount to deposit: ";
                            cin >> depositAmount;
                            if (depositAmount > 0) {
                                balance[loggedInUserIndex] += depositAmount;
                                cout << "Deposit successful! Your new balance is: $" << balance[loggedInUserIndex] << endl;
                            } else {
                                cout << "Invalid deposit amount!" << endl;
                            }
                        } else if (option == 2) {
                            double withdrawAmount;
                            cout << "Enter amount to withdraw: ";
                            cin >> withdrawAmount;
                            if (withdrawAmount > 0 && withdrawAmount <= balance[loggedInUserIndex]) {
                                balance[loggedInUserIndex] -= withdrawAmount;
                                cout << "Withdrawal successful! Your new balance is: $" << balance[loggedInUserIndex] << endl;
                            } else if (withdrawAmount > balance[loggedInUserIndex]) {
                                cout << "Insufficient funds!" << endl;
                            } else {
                                cout << "Invalid withdrawal amount!" << endl;
                            }
                        } else if (option == 3) {
                            cout << "Your current balance is: $" << balance[loggedInUserIndex] << endl;
                        } else if (option == 4) {
                            cout << "Logging out..." << endl;
                            loggedIn = false;
                        } else {
                            cout << "Invalid option! Please choose [1], [2], [3], or [4]." << endl;
                        }
                    }
                    break;
                } else if (count < 2) {
                    cout << "Login failed! Wrong Username or Password! Try again!" << endl;
                } else {
                    cout << "Too many failed attempts! Please try again later!" << endl;
                }
            }
        } else if (choose == 3) {
            exitProgram = true; 
            cout << "Exiting the program. Goodbye!" << endl;
        }
    }

    return 0;
}