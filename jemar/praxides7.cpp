#include <iostream>

using namespace std;

int main() {

    int choose, guessNum;
    int guess = 55;
    int lives = 5;

    do {
        
        cout << "Enter [1] to enter to the game. Enter [2] to Exit." << endl;
        cout << "Enter a number: ";
        cin >> choose;

        if(choose == 1) { 
            cout << "" << endl;
            cout << "Welcome to Guessing Game!" << endl;
            cout << "" << endl;
            cout << "Guess a number between 1 and 100: ";
            cout << "" << endl;
            cout << "Enter a number: ";
            cin >> guessNum;
            
            
            
            while(guessNum != guess && lives > 1){
                if(guessNum < guess) {
                    cout << "" << endl;
                    cout << "Too low! Please try again" << endl;
                } else if (guessNum > guess) {
                    cout << "" << endl;
                    cout << "Too high! Please try again" << endl;
                } 
                
                lives--;
                cout << "You have " << lives << " lives left." << endl;
                cout << "_________________" << endl;
                if (lives > 0){
                cout << "" << endl;
                cout << "Guess a number between 1 and 100:" << endl;
                cout << "Enter a number: ";
                cin >> guessNum;
                }
            }
            
            if(guessNum == guess){
            cout << "" << endl;
               cout << "Congratulations! You guessed it!" << endl;
            cout << "_________________" << endl;
            } else {
               cout << " You're out of lives! Game over!" << endl;
               cout << "_________________" << endl;
               cout << "" << endl;
            }
            
            lives = 5;   

        } else if (choose == 2) {
        cout << "" << endl;
            cout << "Are you sure you want to exit? [2 to confirm]" << endl;
            cout << "Enter a number: ";
            cin >> choose;
            cout << "" << endl;
            cout << "Goodbye!" << endl;
            break;
        }

    } while(choose != 2);
    

    return 0;
}
