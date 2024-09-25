#include <iostream>
using namespace std;
int main() {

    int number = 0;
    int guess = 50;
    int enterNum;

    for (number; number <= 10; number++) {
        cout << "Guess the number: ";
        cin >> enterNum;

        if(enterNum == guess) {
            cout << "correct! Congratulation!" << endl;
            break;
        }else{
            cout << "incorrect! Please try again" << endl;
        }
    }

        return 0;
  }