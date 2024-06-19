#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int array[n];
    for(int i = 0 ; i < n ; i++) {
        cout<<"Enter "<<i<<"th index element: ";
        cin>>array[i];
    }
    int num;
    cout<<"Enter searched number: ";
    cin>>num;
    int count = 0;
    for(int i = 1 ; i < n; i++) {
    if(array[i] == num){
        count++;
        break;
    }
    }
    if(count>0) {
        cout<<"Present"<<endl;
    }
    else cout<<"Absent"<<endl;
}