#include <iostream>
using namespace std;
//q34 program to check if number is perfect
int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num && num != 0)
        cout << "Perfect number" << endl;
    else
        cout << "Not a perfect number" << endl;
    return 0;
}

