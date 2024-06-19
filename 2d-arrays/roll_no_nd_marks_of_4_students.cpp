#include<iostream>
using namespace std;
int main() {
    int arr[2][4];
    for(int i = 0 ; i < 1 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<"Enter roll numbers for "<<j<<"th student: ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i = 1 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<"Enter marks for "<<j<<"th student: ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for (int i = 0 ; i< 2;i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}