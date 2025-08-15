#include <iostream>
using namespace std;
//q41. Calculate the factorial of a number
int main() {
    int n;
    long long fact = 1;
    cout << "Enter the number n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "Factorial of " << n << " is " << fact<< endl;
    return 0;
}

