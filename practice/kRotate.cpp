#include<bits/stdc++.h> 
using namespace std;

void rotate(int n, int arr[]){
    int firstElement= arr[0];
    for(int i=0; i<n; i++){
        arr[i]= arr[i+1];
    }
    arr[n-1]= firstElement;
}
void rotateKPlace(int n, int arr[], int k){
    int appliedK= k%n;
    for(int i=0; i<appliedK; i++){
        rotate(n,arr);
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<arr[i];
        // }
        // cout<<endl;
        
    }
}
int main() {
    int n; cin>>n;
    int k; cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
  
    rotateKPlace(n, arr, k);
    // rotate(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    
    return 0;
}