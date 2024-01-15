#include<bits/stdc++.h> //this header file import all header file for c and c++
using namespace std;

void print(int **x){
    cout<<**x<<endl; 
    **x=100;
    // cout<<*x;  // here it will print a pointer address
    
}
int main() {
    int a= 10;
    int *p= &a;  // it's a pointer of a
    int **q=&p;  // it's a pointer of pointer, that's why it's called double pointer
    print(q);

    cout<<a<<endl;
    return 0;
}