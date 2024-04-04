#include<iostream>
using namespace std;
int main() {
    int a,d,n;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter d: ";
    cin>>d;
    cout<<"Enter n: ";
    cin>>n;
    int anth = a+(n-1)*d;
    for (int i = a ; i <= anth;i+=d) {
        cout<<i<<" ";
    }
}