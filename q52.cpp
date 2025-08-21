#include <iostream>
#include <algorithm>
using namespace std;
//q52 

int main(){
    string s = "Avanthika";
    cout << "String given : Avanthika" <<endl;
    reverse(s.begin(), s.end());
    cout << "Reversed string : "<< s<< endl;
    
    return 0;
}
