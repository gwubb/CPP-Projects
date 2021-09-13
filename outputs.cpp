#include <iostream>

using namespace std;

int main() {
    //cout is output
    cout << "Hello World" << endl;

    int x; //this is a declaration.
    x = 5; //this is a definition.

    int y = 2; // this is a declaration and a definition.

    /*
    this is 
    a multi-line
    comment
    */

    //single line comment
    int z = x * y; // multiplication
    int w = x % y; // modulus
    int sum = x + y; // sum

    //cin is input
    int t;
    cin >> t;
    cout << t << endl;

    return 0;
}