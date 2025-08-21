#include <stdio.h>
#include <iostream>
using namespace std;
//q54. find the sum of the even numbers between 1 and n
int main(){
    int n, sum = 0;
    cout << "Enter the number n :" ;
    cin >> n;
    
    for(int i = 2 ; i<n ; i+=2)
      {
        sum += i;
      }
    cout << "Sum of the numbers between 1 to n is :" << sum<<endl;
}
