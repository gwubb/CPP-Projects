#include <iostream>

using namespace std;

int main(){
    cout << "This program prints all the even numbers up to a selected integer." << endl;
    int x;
    int y;
    cout << "Choose a number to increment to: ";
    cin >> x;
    for (y = 2; y <= x; y = y + 2) {
        cout << y << endl;
    }

    return 0;
}