#include <iostream>
#include <cmath>

using namespace std;

// The function volCube calculates the volume of a cube with the number inputted by the user in int main()
//The function is called in the main function
double volCube(double e) {
    double vs;
    
    vs = pow(e, 3);
    
    return vs;
}

double volTri(double a, double b, double c, double h){
    double vt;

    vt = (0.25*h)*sqrt(-1*(pow(a,4))+2*pow((a*b),2)+2*pow((a*c),2)-pow(b,4)+2*pow((b*c),2)-pow(c,4));

    return vt;
}

double volCyl(double r, double h) {
    double vc;

    vc = 3.1415*pow(r,2)*h;

    return vc;
}

int main() {
    double el, rad , ch, tA, tB, tC, tH, cube, cylinder, triangular;

    //asks for users to input numbers
    cout << "Enter the edge length of a cube: ";
    cin >> el;
    cout << "Enter side a of the triangular prism: ";
    cin >> tA;
    cout << "Enter side b: ";
    cin >> tB;
    cout << "Enter side c: ";
    cin >> tC;
    cout << "Enter the height of the triangular prism: ";
    cin >> tH;
    cout << "Enter the radius of the cylinder: ";
    cin >> rad;
    cout << "Enter the height of the cylinder: ";
    cin >> ch;

    //subs in variables in the functions
    cube = volCube(el);
    triangular = volTri(tA, tB, tC, tH);
    cylinder = volCyl(rad, ch);

    //displays answers
    cout << "The volume of the cube is: " << cube << endl;
    cout << "The volume of the triangular prism is: " << triangular << endl;
    cout << "The volume of the cylinder is: " << cylinder << endl;
    return 1;
}