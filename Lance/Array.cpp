#include<iostream>
using namespace std;

int main()
{
        int numbers[5] ={10, 20, 30, 40, 50};
        string word[3] ={"dog","cat", "cow"};
        char letter[3] ={'A', 'B', 'C' };
        
        for (int i = 0; i < 3; i++) {
            cout << " Element at index " << i << " : " << letter[i] << endl;
        }
    return 0;
}
