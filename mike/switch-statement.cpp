#include <iostream>
using namespace std;

int main() {

    // int number;
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    switch(letter) {
        case 'a':
            cout << "One" << endl;
            break;
        case 'b':
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        case 5:
            cout << "Five" << endl;
            break;
        default:
            cout << "Other" << endl;
            break;
    }

    return 0;
  }