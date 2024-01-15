#include<bits/stdc++.h> //this header file import all header file for c and c++
using namespace std;
int main() {


    int numbers[5]={31,13,25,40,35};

    int maxNum= numbers[0] ;
    int minNum= numbers[0] ;
    for (int i = 0; i < 5; i++)
    {
        maxNum= max(numbers[i], maxNum);
    }
    for (int i = 0; i < 5; i++)
    {
        minNum= min(numbers[i], minNum);
    }
    
    cout<<maxNum<<endl;
    cout<<minNum<<endl;
    return 0;
}