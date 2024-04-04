#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count = 0;
    for(int i = 1; i<=(n/2) ; i+=1) {
        if (n%i == 0) {
            // cout<<i<<" ";
            count = i;
        }
        // cout<<"Count= "<<count<<endl;
    }
    cout<<"highest factor is: "<<count<<endl<<endl;
}