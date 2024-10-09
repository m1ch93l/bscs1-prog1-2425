#include<iostream>
using namespace std;

int main()
{
        int n[5];
        
        for ( int i =0; i < 5; i++) {
        cout << "enter number [" << 1 + 1 << "]:  ";
        cin >> n[i];
        
        }
        cout << endl;
        
        cout << "The entered number are: ";
        for (int i = 0; i < 5; i++) {
        cout << n[i];
        if ( i < 4 ) cout << " , ";
        }
        
    return 0;
}
