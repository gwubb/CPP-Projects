#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Enter any integer: ";
    cin >> x;

    if (x > 20) {
        cout << "The number you entered is greater than 20." << endl;
    }
    else if (x < 20) {
        cout << "The number you entered is less than 20." << endl;
    }
    else {
        cout << "The number you entered is 20." << endl;
    }

    int y = x%2;

    // you may remove {} if there is one statement in the body
    // this tells us that there is one line of code that will run
    if (y == 0) 
        cout << "The number is even." << endl;
    
    else 
        cout << "The number is odd." << endl;

    return 0;
}