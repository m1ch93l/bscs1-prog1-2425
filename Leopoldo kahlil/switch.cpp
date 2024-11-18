#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    switch(number) {
        case 1:
            cout << "kahlil" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
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
