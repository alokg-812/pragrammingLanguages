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

    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = ((low/2) + (high/2));
        if(arr[mid] == key){
            // return mid;
            flag = true;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else low = mid + 1;
    }
    if (flag == true){
        cout<<"Present Sir.\n";
    }
    else cout<<"Absent Sir.\n";
}