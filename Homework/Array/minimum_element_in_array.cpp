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
    int min = array[0] ;
    for(int i = 0 ; i < n; i++) {
        if(min > array[i]){
            min = array[i];
        }
    }
    cout<<"The min element is: "<<min;
}