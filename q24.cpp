#include <iostream>
using namespace std;
// q24 Check if a given character is a vowel or consonant
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);// incase if the given letter is uppercase
    if (ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u')
        cout << "Vowel" << endl;
    else if (isalpha(ch))
        cout << "Consonant" << endl;
    else
        cout << "Not an alphabet" << endl;
    return 0;
}

