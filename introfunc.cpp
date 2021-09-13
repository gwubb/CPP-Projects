#include <iostream>

using namespace std;

/*
The sum function returns the sum of two integers.
The sum function is called from the main function.
*/
int Sum(int a, int b) {
    int c;

    c = a +b;

    return c;
}

/*
The Product function returns the product of two integers.
The Product function is called from the main function.
*/
int Product(int a, int b) {
    int c;

    c = a * b;

    return c;
}

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    int z;
    // Call the function 'Sum'. The arguments are x and y.
    // The arguments must be type int.
    z = Sum(x, y);
    cout << z << endl;

    int prod;
    // Call the function "Product". The arguments are x and y.
    // The arguments must be type int.
    prod = Product(x, y);
    cout << prod << endl;

    return 1;
}