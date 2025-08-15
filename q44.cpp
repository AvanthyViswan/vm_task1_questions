#include <iostream>
using namespace std;
//q44. Find the Fibonacci series up to n terms
int main() {
    int n;
    cout << "Enter number of n terms : ";
    cin >> n;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

