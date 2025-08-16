#include <iostream>
using namespace std;
//Q46. Reverse a number
int main() 
{
    int num, rev = 0, rem;
    cout << "Enter a number to be reversed: ";
    cin >> num;
    int temp = num;
    while (num > 0) {
        rem = num % 10;        // get last digit
        rev = rev * 10 + rem;  // build reversed number
        num /= 10;             // remove last digit
    }

    cout << "Reversed number of " << temp << " is: " << rev << endl;
    return 0;
}

