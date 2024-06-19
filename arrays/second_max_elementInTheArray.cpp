#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int array[n];
    cout<<"Enter array: ";
    for(int i = 0 ; i < n ; i++) {
        cin>>array[i];
    }
    int max = array[0] ;
    for(int i = 0 ; i < n; i++) {
        if(max < array[i]){
            max = array[i];
        }
    }
    int sec_max = array[0];
    for(int i = 0 ; i < n; i++) {
        if(array[i]!=max and sec_max < array[i]){
                sec_max = array[i];
        }
    }
    cout<<"The max element is: "<<max;
    cout<<"\nThe second max element is: "<<sec_max;
}