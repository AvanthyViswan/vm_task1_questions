#include <iostream>
using namespace std;
//q12 largest of the numbers a and b
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Largest: " << ((a > b) ? a : b) << endl;
    return 0;
}

