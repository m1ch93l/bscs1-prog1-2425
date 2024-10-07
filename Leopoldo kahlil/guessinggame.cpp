#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int choice, secret_number, guess, lives = 5;

    do {
        cout << "Enter [1] to play or [2] to exit: ";
        cin >> choice;

        if (choice == 1) {
            secret_number = rand() % 100 + 1;
            lives = 5;

            cout << "Welcome! Guess a number (1-100):\n";

            do {
                cout << "Enter your guess: ";
                cin >> guess;

                if (guess == secret_number) {
                    cout << "You won!\n";
                    break;
                } else if (guess < secret_number) {
                    cout << "Too low.\n";
                } else {
                    cout << "Too high.\n";
                }

                lives--;
                cout << "Lives left: " << lives << endl;
            } while (lives > 0);

            if (lives == 0) {
                cout << "Game over. The number was " << secret_number << endl;
            }
        } else if (choice != 2) {
            cout << "Invalid choice.\n";
        }
    } while (choice != 2);
        cout << "Goodbye! See you again next time! "<< endl;
    return 0;
}
