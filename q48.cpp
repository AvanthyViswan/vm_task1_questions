#include <iostream>
using namespace std;
//q48. Find the GCD of two numbers a and b
int gcd(int a, int b) {
    if (b == 0) return a;  // base case
    return gcd(b, a % b);  // Euclidean algorithm
}

int main() {
    int x, y; //goes to a and b
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "GCD = " << gcd(x, y) << endl;
    return 0;
}

