#include<iostream>
using namespace std;

int stair(int n){ // in case of only 1 and 2 jumps allowed
    if(n==1) return 1;
    else if(n==2) return 2;
    else{
        return stair(n-1) + stair(n-2);
    }
}
int main(){
    int n; // n is the topmost floor
    cin>>n;
    cout<<stair(n);
}