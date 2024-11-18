#include <iostream>
using namespace std;

// void myFunction() {
//   cout << "I just got executed!";
// }

int getFavoriteNumber() {
  return 10;
}

int main() {

  // myFunction();
  int number = getFavoriteNumber();
  cout << "My Favorite number is: " << number ;

  return 0;
}

// void printSum(int a, int b) {
//   cout << "The sum of " << a ;
//   cout << " and " << b << " is " ;
//   cout << a + b << endl;
// }

// int getFavoriteNumber() {
//   return 7;
// }

// int number = getFavoriteNumber();
// cout << "My Favorite number is: " << number ;

// printSum(91, 23);