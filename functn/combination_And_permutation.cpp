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
int perm(int n, int r) {
    return fact(n)/ (fact(n-r));
}
int main() {
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    cout<<"Combination is: "<<comb(n,r)<<endl;
    cout<<"Permutution is: "<<perm(n,r)<<endl;
}