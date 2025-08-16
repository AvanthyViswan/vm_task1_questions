#include <iostream>
using namespace std;
//Q47. check if number is armstrong number
int main() {
    int num, sum = 0, rem;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;//storing number temporarily
    while (num > 0) {
        rem = num % 10;          // get last digit
        sum += rem * rem * rem;  // add cube of digit
        num /= 10;               // remove last digit
    }
    if (sum == temp)
        cout << temp << " is an Armstrong number." << endl;
    else
        cout << temp << " is not an Armstrong number." << endl;

    return 0;
}

