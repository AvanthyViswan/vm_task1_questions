#include <iostream>
#include <string>
using namespace std;
//q58 Character Count: Count the number of occurrences of a character in a string.
int main() {
    string str;
    char ch;
    int count = 0;

    cout << "Enter a string (no spaces): ";
    cin >> str;   // 

    cout << "Enter a character to count: ";
    cin >> ch;

    for (char c : str) {
        if (c == ch)
            count++;
    }

    cout << "The character '" << ch << "' occurs " << count << " times in the string." << endl;

    return 0;
}
