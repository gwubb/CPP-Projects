#include <iostream>

using namespace std;

int main() {
    cout << "This program remembers the maximum positive integer value entered. Tell the program to stop with 0 when you are done. " << endl;
    int count = 1;
    int x;
    int y = 0;

    while (count == 1) {
        cout << "Enter a number: ";
        cin >> x;
        if (y < x) {
            y = x;
        }

        else {
            x = x;
        }
        cout << "The max is " << y << endl;

        cout << "Continue? (1 for yes, 0 for no) ";
        cin >> count;
    }

    return 0;
}