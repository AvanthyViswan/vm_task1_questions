#include <iostream>
using namespace std;
//q42. Check if a number is prime
int main() {
    int n;
    bool prime = true;
    cout << "Enter the number n: ";
    cin >> n;

    if (n <= 1)
        prime = false;
    else {
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                prime = false;
    }

    if (prime)
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";

    return 0;
}

