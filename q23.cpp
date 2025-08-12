#include <iostream>
using namespace std;
// q23 Product of first n natural numbers
int main() {
    int n;
    float product = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        product *= i;
    cout << "Product: " << product << endl;
    return 0;
}

