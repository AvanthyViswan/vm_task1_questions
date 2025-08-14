#include <iostream>
using namespace std;
//q38. Print the multiplication table of a number

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}

