#include<iostream>
using namespace std;
int main() {
    int array[5];
    for(int i = 0 ; i < 5 ; i++) {
        cout<<"Enter "<<i<<"th index element: ";
        cin>>array[i];
    }
    int sum = 0 ;
    for(int i = 0 ; i < 5; i++) {
        sum = sum+array[i];
    }
    cout<<"The sum of elements of array is: "<<sum;
}