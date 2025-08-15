#include <iostream>
using namespace std;
//q45. Find the sum of digits of a number

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum;
    return 0;
}

