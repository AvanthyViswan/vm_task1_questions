#include <iostream>
using namespace std;
//q43. Print all prime numbers up to n
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++)
        if (isPrime(i))
            cout << i << " ";
    return 0;
}
