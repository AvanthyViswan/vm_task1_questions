#include <iostream>
#include <algorithm>
using namespace std;
//q52 

int main(){
    string s = "Avanthika";
    cout << "String given : Avanthika" <<endl;
    cout << "Reversed string : "<< endl;
    for(int i = s.length()-1; i>=0; i--)
    cout << s[i] << endl;

    return 0;
}
