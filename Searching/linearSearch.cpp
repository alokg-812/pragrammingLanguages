#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Entered array is: ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int key;
    cout<<"Enter key to be searched for: ";
    cin>>key;
    bool flag = false;
    int index = 0;
    for(int k = 0 ; k < n ; k++){
        if(arr[k] == key){
            index = k;
            flag = true;
        }
    }
    if(flag == true){
        cout<<index<<"\n";
    }
    else {
        cout<<"Key is absent.\n";
    }
}