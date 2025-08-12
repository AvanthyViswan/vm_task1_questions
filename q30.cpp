#include <iostream>
using namespace std;
//q30. Check if a character is a digit
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9')
        cout << "It is a digit." << endl;
    else
        cout << "It is not a digit." << endl;

    return 0;
}

