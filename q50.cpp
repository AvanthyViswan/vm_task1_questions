#include <iostream>
using namespace std;
//q50. Calculate the power of a number using recursion
int power(int base, int exp) 
{
    if (exp == 0) return 1; // base case
    return base * power(base, exp-1); // recursive step
}

int main() {
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << base << "^" << exp << " = "<< power(base, exp) << endl;
    return 0;
}

