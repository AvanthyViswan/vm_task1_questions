#include <iostream>
using namespace std;
// find remainder
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b != 0)
        cout << "Remainder: " << a % b << endl;
    else
        cout << "Error" << endl;
    return 0;
}

