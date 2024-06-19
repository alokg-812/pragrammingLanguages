#include<iostream>
using namespace std;
int main() {
    char vow[5];
    for(int i = 0 ; i<5;i++){
        cin>>vow[i];
    }
    cout<<"[ "<<" ";
    for(int i = 0 ; i<5;i++){
        cout<<vow[i]<<", ";
    }
    cout<<"]";
}