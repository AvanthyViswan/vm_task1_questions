#include <iostream>
using namespace std;
//q49. Find the LCM of two numbers
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  // formula: LCM * GCD = a * b
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "LCM = " << lcm(x, y) << endl;
    return 0;
}

