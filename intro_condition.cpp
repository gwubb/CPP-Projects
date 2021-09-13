#include <iostream>

using namespace std;

int main() {

    /*
    this program will take two inputs and print out the greater number.
    */
    int x, y;
    cin >> x;
    cin >> y;

    if (x > y) {
        cout << x << endl;
    }
    else if (y > x) {
        cout << y << endl;
    }
    else{
        cout << "They are equal" << endl;
    }

    return 0;
}