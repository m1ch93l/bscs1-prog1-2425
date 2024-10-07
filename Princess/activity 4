#include <iostream>

using namespace std;

int main() {

    int choose, guessNum;
    int guess = 69;
    int storeNum = 0;
    int lives = 5; 

    do {
        cout << "Choose a number [1][2]" << endl;
        cout << "[1] Start a game" << endl;
        cout << "[2] Not interested in playing" << endl;
        cout << "Now choose a number: ";
        cin >> choose;
        
        if(choose == 1) {
            cout << "Welcome to Guessing Game!" << endl;
            cout << "You have " << lives << " lives." << endl; 
            cout << "Guess a number between 1 and 100: ";
            cin >> guessNum;

            do {
                lives--; 

                if(guessNum < guess) {
                    cout << "Too low! Please try again" << endl;
                    cout << "You have " << lives << " lives left." << endl; 
                    cout << "Guess a number between 1 and 100: ";
                    cin >> guessNum;
                } else if (guessNum > guess) {
                    cout << "Too high! Please try again" << endl;
                    cout << "You have " << lives << " lives left." << endl; 
                    cout << "Guess a number between 1 and 100: ";
                    cin >> guessNum;
                } else {
                  cout << "Finally! You got the correct number, I am proud of you :>" << endl;
                  break;
                    
                }

                if (lives == 0) { 
                    
                    cout << "You ran out of lives! The number was " << guess << endl;
                    break;
                }
                
            }while(guessNum != guess);

           
            lives = 5; 

        } else if (choose == 2) {
            cout << "Goodbye!" << endl;
        }

    } while(choose != 2);
    

    return 0;
}
