#include<iostream>
using namespace std;
void print(int t, int n) {
    cout<<t<<" ";
    if (t == n) return;
    print(t+1,n);
}
int main () {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(1, n);
}