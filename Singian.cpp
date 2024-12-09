#include <iostream>

int main () 

{
  float a, b, c, d;

  std::cout << "Enter your grades:" << '\n';

  std::cout << "Prelim: " << '\n';
  std::cin >> a;

  std::cout << "Midterm: " << '\n';
  std::cin >> b;

  std::cout << "Prefinal: " << '\n';
  std::cin >> c;

  std::cout << "Final: " << '\n';
  std::cin >> d;

  float add = a + b + c + d;
  float quo = add / 4;

  std::cout << "Your general average is: " << quo << '\n';

  return 0;
  
}
