#include <iostream>
using namespace std;

const int MAX_USERS = 100;

string username[MAX_USERS], password[MAX_USERS];
double balance[MAX_USERS]; // Array to store balances for each user
int registeredUsers = 0; // Counter for the number of registered users

void registerUser();
bool loginUser(int &loggedInUserIndex);
void deposit(int userIndex);
void withdraw(int userIndex);
void checkBalance(int userIndex);

int main() {
    int choose;
    bool exitProgram = false; // Flag to exit the program
    int loggedInUserIndex = -1; // Index of the logged-in user

    while (!exitProgram) {
        cout << "\n--- Welcome to the Banking System! ---" << endl;
        cout << "Choose [1] Register, [2] Login, or [3] Exit: ";
        cin >> choose;

        if (cin.fail() || (choose < 1 || choose > 3)) {
            cin.clear();  // Clear input buffer
            cin.ignore(1000, '\n');  // Ignore invalid input
            cout << "Invalid choice! Please choose either [1], [2], or [3]." << endl;
            continue;
        }

        if (choose == 1) {
            registerUser();
        } else if (choose == 2) {
            if (loginUser(loggedInUserIndex)) {
                // Logged in successfully, show banking options
                int bankOption;
                bool loggedIn = true;

                while (loggedIn) {
                    cout << "\n--- Banking Options ---" << endl;
                    cout << "Choose [1] Deposit, [2] Withdraw, [3] Check Balance, [4] Logout: ";
                    cin >> bankOption;

                    if (bankOption == 1) {
                        deposit(loggedInUserIndex);
                    } else if (bankOption == 2) {
                        withdraw(loggedInUserIndex);
                    } else if (bankOption == 3) {
                        checkBalance(loggedInUserIndex);
                    } else if (bankOption == 4) {
                        loggedIn = false;
                        cout << "Logged out successfully!" << endl;
                    } else {
                        cout << "Invalid option! Please choose a valid action." << endl;
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

void registerUser() {
    if (registeredUsers < MAX_USERS) {
        cout << "Please Register!" << endl;
        cout << "Enter your username: ";
        cin >> username[registeredUsers];
        cout << "Enter your password: ";
        cin >> password[registeredUsers];
        balance[registeredUsers] = 0.0; // Set initial balance to 0
        registeredUsers++;
        cout << "Registration successful!" << endl;
    } else {
        cout << "Registration limit reached. Cannot register more users." << endl;
    }
}

bool loginUser(int &loggedInUserIndex) {
    string usern, passw;
    if (registeredUsers == 0) {
        cout << "No registered users. Please register first!" << endl;
        return false;
    }

    for (int count = 0; count < 3; count++) {
        cout << "Enter your username: ";
        cin >> usern;
        cout << "Enter your password: ";
        cin >> passw;

        for (int i = 0; i < registeredUsers; i++) {
            if (username[i] == usern && password[i] == passw) {
                cout << "Login successful!" << endl;
                loggedInUserIndex = i; // Store the index of the logged-in user
                return true;
            }
        }

        if (count < 2) {
            cout << "Login failed! Wrong Username or Password! Try again!" << endl;
        } else {
            cout << "Too many failed attempts! Please try again later!" << endl;
        }
    }

    return false;
}

void deposit(int userIndex) {
    double amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;

    if (amount > 0) {
        balance[userIndex] += amount;
        cout << "Deposit successful!" << endl;
    } else {
        cout << "Invalid amount! Please enter a positive amount." << endl;
    }
}

void withdraw(int userIndex) {
    double amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;

    if (amount > 0 && amount <= balance[userIndex]) {
        balance[userIndex] -= amount;
        cout << "Withdrawal successful!" << endl;
    } else {
        cout << "Invalid amount! Please ensure you have enough balance." << endl;
    }
}

void checkBalance(int userIndex) {
    cout << "Your current balance is: " << balance[userIndex] << endl;
}
