#include <iostream>
using namespace std;
//q62 min in the array
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }

    cout << "Minimum element = " << minVal << endl;
    return 0;
}
