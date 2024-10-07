#include <iostream>

using namespace std;

int main() {

    int choose, guessNum;
    int guess = 69;
    int maxAttempts = 5; 
    int attempts = 0;   

    do {
        cout << "Choose a number [1][2]: ";
        cin >> choose;

        if(choose == 1) {
            cout << "Welcome to Guessing Game!" << endl;
            cout << "You have " << maxAttempts << " attempts to guess the correct number." << endl;
            cout << "Guess a number between 1 and 100: ";
            cin >> guessNum;

            while (guessNum != guess && attempts < maxAttempts) {
                attempts++; 

                if(guessNum < guess) {
                    cout << "Too low! Please try again" << endl;
                } else if (guessNum > guess) {
                    cout << "Too high! Please try again" << endl;
                }

                if(attempts < maxAttempts) {  
                    cout << "Guess a number between 1 and 100: ";
                    cin >> guessNum;
                }
            }

            if(guessNum == guess) {
                cout << "Congratulations! You guessed it!" << endl;
            } else {
                cout << "Sorry! You've run out of attempts. The correct number was " << guess << "." << endl;
            }

        } else if (choose == 2) {
            cout << "Goodbye!" << endl;
        }

        attempts = 0; 

    } while(choose != 2);

    return 0;
}
