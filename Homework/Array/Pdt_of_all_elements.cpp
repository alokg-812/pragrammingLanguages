#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int pdt = 1;
    for(int i = 0 ; i<n;i++) {
        pdt = pdt*arr[i];
    }
    cout<<"Product is: "<<pdt;
}