#include<bits/stdc++.h> 
using namespace std;


/*{
cpp sort function is a hybrid sort function, cause it implement 3 types of sort algorithms
1. quick sort
2. heap sort
3. insertion sort

sort(starting pointer, ending pointer)

}*/



int main() {

    int a[5]={5,4,3,2,1};
    int n =5;
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}