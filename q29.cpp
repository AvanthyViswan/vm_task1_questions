#include <iostream>
using namespace std;
//q29. Check if a character is an alphabet
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << "It is an alphabet." << endl;
    else
        cout << "It is not an alphabet." << endl;

    return 0;
}

