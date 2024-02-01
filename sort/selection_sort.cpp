#include<bits/stdc++.h> 
using namespace std;

void Sort(int n, int num[]){
    for(int step=0; step<n; step++){
        int minElement= step;
        for(int i=step; i<n; i++){
            if(num[i]<num[minElement]){
                minElement= i;
            }
        }
        swap(num[minElement],num[step]);
    }
}

int main() {
    int n; cin>>n;
    int num[n];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    Sort(n,num);
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
    5, 1, 3, 4, 2
    1, 5, 3, 4, 2
    1, 2, 3, 4, 5
    1, 2, 3, 4, 5
    1, 2, 3, 4, 5
    
*/