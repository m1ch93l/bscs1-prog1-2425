#include <iostream>

using namespace std;

int main() {

    int choose, guessNum;
    int guess = 99;
    int attempts = 5;


cout << "Welcome to Guessing Game! The mechanics is," << endl;
cout <<"You will choose a number between 1 to 100." << endl;
cout << "GOODLUCK and Have Fun:>" << endl;
cout << "" << endl;

    do {
        cout << "Choose a number [1][2]: ";
        cin >> choose;

        if(choose == 1) {

        cout << "" << endl;
            cout << "Enter a number: ";
            cin >> guessNum;

            while(guessNum != guess && attempts > 1){
            if (guessNum < guess) {
            cout << "Too low! Please try again" << endl;
            } else if(guessNum > guess){
            cout << "Too high! Please try again" << endl;
            }


            attempts--;
            cout << "You have " << attempts << " lives left" <<endl;

            if(attempts > 0) {
              cout << "" << endl;
              cout << "Enter a number: ";
              cin >> guessNum;
              }
            }
