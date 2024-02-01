#include<bits/stdc++.h> 
using namespace std;

void Sort(int n, int num[]){
// this implementation is made by me
/*     bool shouldCheck = true;
     int step = 0;
        while (shouldCheck)
        {   
            shouldCheck = false;
            for(int i=0; i<n; i++){
                if(num[i+1]<num[i]){
                    swap(num[i+1],num[i]);
                    shouldCheck = true;
                    continue;
                }
            }
            cout<<endl<<endl<<"step: "<<step<<endl;
            for(int i=0; i<n; i++){
                cout<<num[i]; cout<<" ";
            }
            cout<<endl;
            step++;
        }
*/
{ // this implementation follows the standard algorithm
    for(int step=0; step<n; step++){
 
        for(int i=0; i+1<n; i++){
            if(num[i+1]<num[i]){
                swap(num[i+1],num[i]);
            }
        }
        cout<<endl<<endl<<"step: "<<step<<endl;
        for(int i=0; i<n; i++){
            cout<<num[i]; cout<<" ";
        }
        cout<<endl;

    }
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
    5, 2, 4, 1, 3
    2, 5, 4, 1, 3
    2, 4, 5, 1, 3
    2, 4, 1, 5, 3
    2, 4, 1, 3, 5

    2, 1, 4, 3, 5
    2, 1, 3, 4, 5

    1, 2, 3, 4, 5
    
*/