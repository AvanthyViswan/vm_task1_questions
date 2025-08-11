#include <iostream>
using namespace std;
// swap 2 numbers
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout <<"Before swapping: num1= "<< num1 <<" num2= " <<num2<< endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout <<"After swapping: num1= "<< num1 <<" num2 = " <<num2<< endl;
    return 0;
}

