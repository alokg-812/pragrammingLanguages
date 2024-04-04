#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 1; i<=(n) ; i+=1) {
        if (n%i == 0) {
            cout<<i<<" ";
        }
    }
}