#include <iostream>

using namespace std;

int main() {
    
    int x = 0;

    //the while loop will keep going as long as x is equal to 0
/*  while (x == 0) {
        cout << "x is zero" << endl;

        cin >> x;
    }
*/
    int i;

    // i++ is the same as i = i+1
    // i will start at 0 on the first iteration
    // the loop will keep going as long as i is less than 10
    // after each iteration, add 1 to i
    for (i = 0; i < 10; i++) {
        cout << i << endl;
    }

    // this value of i will not satisfy the previous condition in the for loop
    cout << i << endl;
    return 0;
}