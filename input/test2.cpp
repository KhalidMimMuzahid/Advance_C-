
#include<bits/stdc++.h> //this header file import all header file for c and c++
using namespace std;
int main() {
    char a[50];
    cout<<"Enter a: " ;
    // cin >>a;   // cin will not receive empty space;
    cin.getline(a, 50); // it will take also the empty string and it is used for char Array or string
    cout<<"a: "<<a<<endl;
    return 0;
}