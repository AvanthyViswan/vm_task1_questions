#include <iostream>
using namespace std;
// q22 find sum of 1st n natural numbers
int main() 
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "Sum: " << sum << endl;
    return 0;
}

