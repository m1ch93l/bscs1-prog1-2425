#include <iostream>
using namespace std;


struct User {
  string username;
  string password;
  double balance = 0.0;

};


int main() {
  User users[100]; 
  int registeredUsers = 0;  
  bool exitProgram = false; 
  int choose;
  while (!exitProgram) {
    cout << "\n--- Welcome to the Bank System! ---" << endl;
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
        cin >> users[registeredUsers].username;
        cout << "Enter your password: ";
        cin >> users[registeredUsers].password;
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
      string username, password;
      for (int count = 0; count < 3; count++) {
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;

        
        for (int i = 0; i < registeredUsers; i++) {
          if (users[i].username == username && users[i].password == password) {
            cout << "Login successful!" << endl;
            loginSuccess = true;
            int loggedInUser = i; 

            
            while (loginSuccess) {
              cout << "\n--- Bank Menu ---" << endl;
              cout << "Choose [1] Deposit, [2] Withdraw, [3] Check Balance, [4] Logout: ";
              cin >> choose;

              switch (choose) {
                case 1: {
                  double amount;
                  cout << "Enter deposit amount: ";
                  cin >> amount;
                  if (amount > 0) {
                    users[loggedInUser].balance += amount;
                    cout << "Deposit successful."  << endl;
                  } else {
                    cout << "Invalid amount. Please enter a positive value." << endl;
                  }
                  break;
                }
                case 2: {
                  double amount;
                  cout << "Enter withdrawal amount: ";
                  cin >> amount;
                  if (amount > 0 && amount <= users[loggedInUser].balance) {
                    users[loggedInUser].balance -= amount;
                    cout << "Withdrawal successful."<< endl;
                  } else {
                    cout << "Insufficient funds or invalid amount." << endl;
                  }
                  break;
                }
                case 3: {
                  cout << "Your current balance: $" << users[loggedInUser].balance << endl;
                  break;
                }
                case 4: {
                  loginSuccess = false;
                  cout << "Logged out successfully!" << endl;
                  break;
                }
                default:
                  cout << "Invalid choice. Please choose [1] to [4]." << endl;
              }
            }
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
    } else if (choose == 3) {
      exitProgram = true; 
      cout << "Exiting the program. Goodbye!" << endl;
    }
  }

  return 0;
}