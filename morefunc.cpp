#include <iostream>

using namespace std;

/*
The coneVolume function returns the volume of a cone with the specifed radius and height.
The coneVolume function is called from the main function.
*/
double coneVolume(double r, double h) {
    double v;

    v = 3.1415*(r*r)*(h/3);

    return v;
}

int main() {
    double radius, height;

    cout << "This program finds the volume of a cone." << endl;

    // Omit the endl if you want to use cin or cout on the same line in the terminal
    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Enter the height: ";
    cin >> height;

    double volume;
    volume = coneVolume(radius, height);
    // Separate thes strings and variables with the loader (<<)
    cout << "The volume of the cone is: " << volume << endl;

    return 1;
}