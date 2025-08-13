#include <iostream>
using namespace std;
//q32 Calculate the electricity bill based on slab rates
//here in this program we take first 100 units Rs1/unit, next 100 units Rs2/unit, remaining Rs3/unit
int main() {
    int units;
    float bill = 0;
    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1;
    } else if (units <= 200) {
        bill = 100 + (units - 100) * 2;
    } else {
        bill = 100 + 200 + (units - 200) * 3;
    }

    cout << "Electricity Bill: ₹" << bill << endl;
    return 0;
}

