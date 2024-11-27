#include <iostream> 
int a, b, sum, diff, prod;
float c, d, quo;
void add () {
    std::cout << "Add: " << '\n';
    std::cout << "Enter your first number: " << '\n';
    std::cin >> a;
    std::cout << "Enter you second number: " << '\n';
    std::cin >> b;
    sum = a + b;
    std::cout << sum << '\n';

}

void minus () {
    std::cout << "Subtract: " << '\n';
    std::cout << "Enter your first number: " << '\n';
    std::cin >> a;
    std::cout << "Enter you second number: " << '\n';
    std::cin >> b;
    diff = a - b;
    std::cout << diff << '\n';
}

void multiply () {
    std::cout << "Multiply: " << '\n';
    std::cout << "Enter your first number: " << '\n';
    std::cin >> a;
    std::cout << "Enter you second number: " << '\n';
    std::cin >> b;
    prod = a * b;
    std::cout << prod << '\n';
}

void divide () {
    std::cout << "Divide: " << '\n';
    std::cout << "Enter your first number: " << '\n';
    std::cin >> a;
    std::cout << "Enter you second number: " << '\n';
    std::cin >> b;
    quo = c / d ;
    std::cout << quo << '\n';
}

int main () { 
    int in;
    int opt;
    std::cout << "Welcome to the basic calculator!" << "\nDo you want to enter?" << '\n';
    std::cout << "Yes![1] " << "No![2]";
    std::cin >> in;

    while (in == 1) {
        std::cout << "What do you want to do? " << '\n';
        std::cout << "Add[1] " << "Subtract[2] " << "Multiply[3] " << "Divide[4] " << '\n';
        std::cin >> opt;

        if (opt == 1) {
            add();
            
        }
        else if (opt == 2) {
            minus();
            
        }
        else if (opt == 3) {
            multiply();
            
        }
        else if (opt == 4) {
            divide();
            
        }
        else {std::cout << "Invalid!" << '\n';
        break;}
    }

    std::cout << "Goodbye!";
    return 0;
}
