#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Entered array: ";
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    ////////////////////////////

    
    ////////////////////////////
    cout<<"Sorted array: ";
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}