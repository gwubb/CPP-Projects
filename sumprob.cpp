#include <iostream>

using namespace std; 

int main() {
    cout << "This program calculates the sum of a series of numbers entered. Tell the Program when to stop with 0" << endl;
    int count = 1;
    int x;
    int y = 0;

    while (count == 1) {
        cout << "Enter a number: ";
        cin >> x;
        y = y + x;
        cout << "The sum is " << y << endl;
        cout << "Continue? (1 for yes, 0 for no) ";
        cin >> count;

    }
    cout << "The final sum is " << y << endl;

    return 0;
}