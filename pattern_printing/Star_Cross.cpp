#include<iostream>
using namespace std;
int main() {
    // int m;
    // cout<<"Enter m: ";
    // cin>>m;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1; j<=n;j++) {
            if((i==j) or (i+j == n+1)) {
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<"\n";
    }
}