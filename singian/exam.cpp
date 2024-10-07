#include <iostream>
#include <string>

int main () {

 float a, b, c, d;
 std::string Fname;
 std::string MI;
 std::string Lname;
 
 std::cout << "First Name: "  << '\n';
 std::cin >> Fname;
 
 std::cout << "Middle Name: "  << '\n';
 std::cin >> MI;
 
 std::cout << "Last Name: "  << '\n';
 std::cin >> Lname;
 
 std::string fullname;
 fullname = Fname + " " + MI + " " + Lname;
 
 std::cout << fullname << '\n';
 std::cout << "Enter your grades: " <<'\n';
 
 std::cout << "Prelim: " << '\n';
 std::cin >> a;
 
 std::cout << "Midterm: " << '\n';
 std::cin >> b;
 
 std::cout << "Prefinal: " << '\n';
 std::cin >> c;
 
 std::cout << "Finals: " << '\n';
 std::cin >> d;
 
 float sum = a + b + c + d;
 float ave = sum / 4;
 
 if (ave >= 95){std::cout << "Your grade is: " << "1.0 GPA "<< ave << " You passed!" << '\n';}
 else if (ave >= 91){std::cout << "Your grade is: " << "1.25 GPA " << ave << " You passed!" << '\n';}
 else if (ave >= 86){std::cout << "Your grade is: " << "1.50 GPA " << ave << " You passed!" << '\n';}
 else if (ave >= 81){std::cout << "Your grade is: " << "1.75 GPA "<< ave << " You passed!" << '\n';}
 else if (ave >= 75){std::cout << "Your grade is: " << "2.0 GPA "<< ave << " You passed!" << '\n';}
 else if (ave >= 69){std::cout << "Your grade is: " << "2.25 GPA "<< ave << " You passed!" << '\n';}
 else if (ave >= 63){std::cout << "Your grade is: " << "2.50 GPA "<< ave << " You passed!" << '\n';}
 else if (ave >= 57){std::cout << "Your grade is: " << "2.75 GPA "<< ave << " You passed!" << '\n';}
 else if (ave >= 50){std::cout << "Your grade is: " << "3.0 GPA "<< ave << " You passed!" << '\n';}
 else {std::cout << "Your grade is: " << "5.0 GPA "<< ave << " You did not pass!" << '\n'; }
 
 return 0;
}
