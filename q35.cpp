#include <iostream>
using namespace std;
//q35 Check if triangle is valid(we know triangle has three angles)
// angles a b c
int main() {
    int a, b, c;
    cout << "Enter three angles of a triangle: ";
    cin >> a >> b >> c;

    if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
        cout << "Valid triangle" << endl;
    else
        cout << "Invalid triangle" << endl;
    return 0;
}

