#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n==1) {
        cout<<"Neither Prime nor Composite";
    }
    else {
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
}

