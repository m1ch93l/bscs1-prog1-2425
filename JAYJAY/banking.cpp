#include <iostream>
using namespace std;

int main() {
    string username[100], password[100];
    double balance[100] = {0};  // Array to hold the balances for each user
    string usern, passw;
    int choose;
    int registeredUsers = 0;  // Counter to track the number of registered users
    bool exitProgram = false; // Flag to exit the program

    while (!exitProgram) {
        cout << "\n--- Welcome to the Login Page! ---" << endl;
        cout << "Choose [1] Register, [2] Login, or [3] Exit: ";
        cin >> choose;

        if (cin.fail() || (choose < 1 || choose > 3)) {
            // Check for invalid input
            cin.clear();  // clear input buffer
            cin.ignore(1000, '\n');  // ignore invalid input
            cout << "Invalid choice! Please choose either [1], [2], or [3]." << endl;
            continue;
        }

        if (choose == 1) {
            if (registeredUsers < 100) {
                // Register user
                cout << "Please Register!" << endl;
                cout << "Enter your username: ";
                cin >> username[registeredUsers];
                cout << "Enter your password: ";
                cin >> password[registeredUsers];
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

                // Check login credentials
                for (int i = 0; i < registeredUsers; i++) {
                    if (username[i] == usern && password[i] == passw) {
                        cout << "Login successful!" << endl;
                        loginSuccess = true;
                        loggedInUserIndex = i; // Store the index of the logged-in user
                        break;
                    }
                }

                if (loginSuccess) {
                    break;
                } else if (count < 2) {
                    cout << "Login failed! Wrong Username or Password! Try again!" << endl;
                } else {
                    cout << "Too many failed attempts! Please try again later!" << endl;
                }
            }

            // If login was successful, present the banking options
            if (loginSuccess) {
                bool inSession = true;
                while (inSession) {
                    int action;
                    cout << "\nChoose [1] Deposit, [2] Withdraw, [3] Check Balance, or [4] Logout: ";
                    cin >> action;

                    switch (action) {
                        case 1: { // Deposit
                            double depositAmount;
                            cout << "Enter the amount to deposit: ";
                            cin >> depositAmount;
                            if (depositAmount > 0) {
                                balance[loggedInUserIndex] += depositAmount;
                                cout << "Deposited $" << depositAmount << "." << endl;
                            } else {
                                cout << "Deposit amount must be positive!" << endl;
                            }
                            break;
                        }
                        case 2: { // Withdraw
                            double withdrawAmount;
                            cout << "Enter the amount to withdraw: ";
                            cin >> withdrawAmount;
                            if (withdrawAmount > 0 && withdrawAmount <= balance[loggedInUserIndex]) {
                                balance[loggedInUserIndex] -= withdrawAmount;
                                cout << "Withdrew $" << withdrawAmount << "." << endl;
                                // Do not show the balance after withdrawal
                            } else {
                                cout << "Invalid withdraw amount!" << endl;
                            }
                            break;
                        }
                        case 3: { // Check Balance
                            cout << "Your current balance is: $" << balance[loggedInUserIndex] << endl;
                            break;
                        }
                        case 4: { // Logout
                            inSession = false;
                            cout << "Logged out successfully!" << endl;
                            break;
                        }
                        default:
                            cout << "Invalid option! Please choose again." << endl;
                    }
                }
            }
        } else if (choose == 3) {
            exitProgram = true; // Exit the loop and end the program
            cout << "Exiting the program. Goodbye!" << endl;
        }
    }

    return 0;
}
