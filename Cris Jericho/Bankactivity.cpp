#include <iostream>
using namespace std;

int main() {
    string username[100], password[100], usern, passw;
    int choose;
    float balance[100] = {0}; // Array to store user balances
    int registeredUsers = 0;  // Counter to track the number of registered users
    bool exitProgram = false; // Flag to exit the program

    while (!exitProgram) {
        cout << "\n--- Welcome to the Login Page! ---" << endl;
        cout << "Choose [1] Register, [2] Login, [3] Exit: ";
        cin >> choose;

        if(cin.fail() || (choose < 1 || choose > 3)) {
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
            int currentUserIndex = -1; // Index of the logged-in user
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
                        currentUserIndex = i;
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

            if (loginSuccess) {
                while (true) {
                    cout << "\nChoose [1] Deposit, [2] Withdrawal, [3] Check Balance or [4] Logout: ";
                    cin >> choose;

                    switch (choose) {
                        case 1:
                            float depositAmount;
                            cout << "Enter the deposit amount: $";
                            cin >> depositAmount;
                            balance[currentUserIndex] += depositAmount;
                            cout << "Deposit successful! Current Balance: $" << balance[currentUserIndex] << endl;
                            break;
                        case 2:
                            float withdrawalAmount;
                            cout << "Enter the withdrawal amount: $";
                            cin >> withdrawalAmount;
                            if (balance[currentUserIndex] >= withdrawalAmount) {
                                balance[currentUserIndex] -= withdrawalAmount;
                                cout << "Withdrawal successful! Current Balance: $" << balance[currentUserIndex] << endl;
                            } else {
                                cout << "Insufficient balance for withdrawal!" << endl;
                            }
                            break;
                        case 3:
                            cout << "Your current balance is: $" << balance[currentUserIndex] << endl;
                            break;
                        case 4:
                            cout << "Logging out..." << endl;
                            break;
                        default:
                            cout << "Invalid choice! Please choose either [1], [2], [3] or [4]." << endl;
                    }

                    if (choose == 4) {
                        break;
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
