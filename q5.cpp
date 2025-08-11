#include <iostream>
using namespace std;
//q5 convert celsius to fahrenheit
int main() 
{
float celsius;
cout << "Enter temperature in Celsius: ";
cin >> celsius;
float fahrenheit = (celsius * 9 / 5) + 32;
cout << "Fahrenheit: " << fahrenheit << endl;
return 0;
}

