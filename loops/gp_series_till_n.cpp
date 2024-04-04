#include<iostream>
using namespace std;
int main() {
    int n,a,d;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter d: ";
    cin>>d;
    for(int i = 1 ; i <=n ; i++) {
        cout<<a<<" ";
        a = a*d;
    }
}