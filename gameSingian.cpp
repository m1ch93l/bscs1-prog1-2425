#include <iostream>

int main () 
{
    int a = 1;
    int guess, ans;

    std::cout << "Press a number: " << '\n';
    std::cout << "1,) Enter the game." << '\n';
    std::cout << "2.) Exit" << '\n';
    std::cin >> a;

    guess = 20;

    do {
        if ( a == 1) {
        std::cout << "Welcome!" << '\n';
        std::cout << "Enter a number: ";
        std::cin >> ans;

        

          if (ans > guess) {std::cout << "Too High!" << " Try again?" << '\n';
          std::cout << "Yes " << "No" << '\n';}
          else if (ans < guess) {std::cout << "Too Low!" << " Try again?" << '\n';
          std::cout << "Yes " << "No" << '\n';}
          else {std::cout << "Correct!" << " Wanna play another one?" << '\n';
          std::cout << "Yes " << "No" << '\n';}
          std::cin >> a;
        }
        

        

       
     else {std::cout << "Goodbye!";}

    }
    while (a == 1);

    std::cout << "Goodbye!";

   

    
  return 0;
}
