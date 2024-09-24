#include <iostream>
using namespace std;

int main() {    
    int num = 9;
    int num1 = 10;

    if (num == 9){
        cout << "first output" << endl;
        if(num1 == 10){
            cout << "another condition" << endl;
            if(num1 == 10){
            cout << "another condition" << endl;
            }else{
                cout << "another output" << endl;
            }
        }else{
            cout << "another output" << endl;
        }
    } else if (num == 10){
        cout << "second output" << endl;
    } else if(num1 == 10) {
        cout << "third output" << endl;
    }else{
        cout << "last output" << endl;
    }
    
    return 0;
}

// Operators:
// == means equal to
// != means not equal to
// > means greater than
// < means less than
// >= means greater than or equal to
// <= means less than or equal to