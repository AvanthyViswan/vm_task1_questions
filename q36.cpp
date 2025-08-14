#include <iostream>
#include <cmath>
using namespace std;
//q36. Find the roots of a quadratic equation
int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double d = b*b - 4*a*c; // discriminant
    double root1 = (-b + sqrt(d)) / (2*a);
    double root2 = (-b - sqrt(d)) / (2*a);

    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;

    return 0;
}

