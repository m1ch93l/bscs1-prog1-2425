#include <iostream>
using namespace std;

int main() {
    int choose, guessNum;
    int guess = 69;
    int attempts = 5; 

    do {
        cout << "Choose a number [1 - Play][2 - Exit]: ";
        cin >> choose;

        if(choose == 1) {
            cout << "Welcome to the Guessing Game!" << endl;
            cout << "Guess a number between 1 and 100: ";
            cin >> guessNum;

            while (guessNum != guess && attempts > 1) {
                if (guessNum < guess) {
                    cout << "Too low! Please try again." << endl;
                } else if (guessNum > guess) {
                    cout << "Too high! Please try again." << endl;
                }

                attempts--; 
                cout << "You have " << attempts << " lives left." << endl;

                if (attempts > 0) {
                    cout << "Guess a number between 1 and 100: ";
                    cin >> guessNum;
                }
            }

            if (guessNum == guess) {
                cout << "Congratulations! You guessed it!" << endl;
            } else {
                cout << "You're out of lives! Game over!" << endl;
            }

            attempts = 5; 

        } else if (choose == 2) {
            cout << "Are you sure you want to exit? [2 to confirm]: ";
            cin >> choose;
            cout << "Goodbye!" << endl;
            break;
            }

    } while(choose != 2);

    return 0;
}