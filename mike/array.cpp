#include <iostream>
using namespace std;

int main() {
    // // Declare an array of integers with 5 elements
    // int numbers[5];

    // // Accessing and printing elements of the array
    // for(int store = 0; store < 5; store++) {
    //      cout << "Enter a number: ";
    //      cin >> numbers[store];
    // }
    // cout << "The numbers are: " << numbers[4] << endl;

    string words[5];

    for(int i = 0; i < 5; i++) {
         cout << "Enter a number: ";
         cin >> words[i];
    }

    cout << "The numbers are: " << words[4] << endl;

    return 0;
}