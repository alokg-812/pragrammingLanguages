#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter n: ";
    cin>>num;
    for(int i = 0 ; i<(num);i++){
        for(int j = 0 ; j<=(2*i);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}