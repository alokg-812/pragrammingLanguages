#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count = 0;
    for(int i = n/2; i>1 ; i--) {
        if(n%i == 0) {
            count += 1;
        }
    }
    if(count>0) {
        cout<<"Composite number";
    }
    else cout<<"Prime number";

}