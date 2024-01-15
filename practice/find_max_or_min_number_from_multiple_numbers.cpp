#include<bits/stdc++.h> //this header file import all header file for c and c++
using namespace std;
int main() {
    int num1, num2, num3,num4, num5;
    num1 =10, num2 =55, num3 =25, num4 =200, num5 = 50;
    int maxNumber= max(num1, max(num2, max(num3, max(num4, num5))));
    int minNumber= min(num1, min(num2, min(num3, min(num4, num5))));
    cout<<maxNumber<<endl;
    cout<<minNumber<<endl;
    return 0;
}