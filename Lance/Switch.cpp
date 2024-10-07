#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    switch(number) {
        case 1:
            cout << "Lance" << endl;
            break;
        case 2:
            cout << "Angelo" << endl;
            break;
        case 3:
            cout << "John Mark" << endl;
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
