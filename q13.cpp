#include <iostream>
using namespace std;
// q13 print the smallest among the numbers a and b
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < b)
        cout << "Smallest: " << a<< endl;
    else
        cout << "Smallest: " << b<< endl;
    return 0;
}

