#include<bits/stdc++.h> 
using namespace std;

int main() {

    // int *p= (int*)malloc(10*sizeof(int)); // it is the heap, mainly used in C
    int *p= new int[10]{0,4,6,2,3,5}; //used in C++
    for(int i=0; i<10 ; i++){
        cout<<p[i]<<" ";
    }

    delete p;
    cout<< endl;

    return 0;
}