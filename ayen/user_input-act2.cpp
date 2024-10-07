#include <iostream>
using namespace std;
int main() {

    float prelim, midterm, prefinal, finals, targetAverage = 79.33;

    cout << "Grades" << endl;
    cout << "" << endl;

    cout << "Enter Prelim grade: ";
    cin >> prelim;

    cout << "Enter Midterm grade: ";
    cin >>midterm;

    cout << "Enter Final grade: ";
    cin >> finals;

    prefinal = (targetAverage * 4) - (prelim + midterm + finals);

    cout << "You need a Prefinal grade of: " << prefinal << " to get an average of 79.33." << endl;

    return 0;

}
