#include <iostream>
using namespace std;
//q37. Determine whether a triangle is equilateral, isosceles, or scalene 
// sides are a b c
int main() {
    float a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equilateral triangle" << endl;
    else if (a == b || b == c || a == c)
        cout << "Isosceles triangle" << endl;
    else
        cout << "Scalene triangle" << endl;

    return 0;
}

