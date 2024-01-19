#include<bits/stdc++.h> //this header file import all header file for c and c++
using namespace std;
int main() {
    int x= 0;
    int n; cin>>n;
    for (int  i = 0; i < n; i++)
    {
        char a,b,c;
        cin >> a >> b >> c ;
        cout << a << b<< c;
        if(b == '+')x++;
        else x--;
    }
    
    cout<<endl;
    return 0;
}