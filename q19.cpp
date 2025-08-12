#include <iostream>
using namespace std;
// q19 find power using loop
int main() {
    int base, exp;
    long long result = 1;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    for (int i = 0; i < exp; i++)
        result = result * base;

    cout << "Result: " << result << endl;
    return 0;
}

