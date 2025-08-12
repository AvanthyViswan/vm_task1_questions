#include <iostream>
using namespace std;
// q25 Check if a number is divisible by 5 and 11
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 5 == 0 && num % 11 == 0)
        cout << num << " is divisible by both 5 and 11." << endl;
    else
        cout << num<< " is not divisible by both 5 and 11."<< endl;
    return 0;
}

