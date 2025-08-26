#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//q57 Check for Digit → Check if a string contains a digit
int main() {
    string str;
    cout << "Enter a string (no spaces): ";
    cin >> str;   // 

    bool hasDigit = false;
    for (char ch : str) {
        if (isdigit(ch)) {
            hasDigit = true;
            break;
        }
    }

    if (hasDigit)
        cout << "The string contains a digit." << endl;
    else
        cout << "The string does not contain a digit." << endl;

    return 0;
}
