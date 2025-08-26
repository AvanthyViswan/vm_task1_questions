#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//q56 Count Vowels → Count the number of vowels in a string
int main() {
    string str;
    cout << "Enter a string (no spaces): ";
    cin >> str;   // 

    int vowelCount = 0;
    for (char ch : str) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowelCount++;
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;
    return 0;
}
