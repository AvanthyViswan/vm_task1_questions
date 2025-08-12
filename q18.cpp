#include <iostream>
#include <cmath>
using namespace std;
// find the exponent value of  a number
int main() {
    double base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << "Result: " << pow(base, exp) << endl;
    return 0;
}

