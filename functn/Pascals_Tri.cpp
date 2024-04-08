#include<iostream>
using namespace std;
int fact(int n) {
    int Fact = 1;
    for(int i = 1; i<=n;i++) {
        Fact = Fact*i;
    }
    return Fact;
}
int comb(int n, int r) {
    return fact(n)/ ((fact(r))*(fact(n-r)));
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 0; i <= n; i++) {
        for (int j = 0 ; j<=i;j++){
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}