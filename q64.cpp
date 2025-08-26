#include <iostream>
using namespace std;
//q64 average of array elements
int main() {
    int n, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = (double)sum / n;
    cout << "Average of array elements = " << avg << endl;
    return 0;
}
