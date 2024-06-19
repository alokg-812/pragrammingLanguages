#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> v; 
    for(int i = 1;i<=5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 1 ; i<=5;i++){
        cout<<v[i]<<" ";
    }
}