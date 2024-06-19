#include<iostream>
using namespace std;
int main() {
    int array[5];
    for(int i = 0 ; i < 5 ; i++) {
        cout<<"Enter "<<i<<"th index element: ";
        cin>>array[i];
    }
    int large = array[0] ;
    for(int i = 1 ; i < 5; i++) {
    if(large < array[i]){
        large = array[i];
    }
}
    cout<<"The largest of elements of array is: "<<large;
}