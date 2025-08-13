#include <iostream>
using namespace std;

//q33 Check if a number is a palindrome

int main() {
    int num, reversed = 0, original, digit;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
    return 0;
}

