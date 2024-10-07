#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName, address;
    int age;

    // User input
    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // Clears the newline character left in the input buffer

    cout << "Enter your address: ";
    getline(cin, address);

    // Display the user input
    cout << "\n--- User Information ---\n";
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;

    return 0;
}
