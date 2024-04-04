#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENter n: ";
    cin>>n;
    int count = 0;
    for(int i = n/2 ; i>=1;i--) {
        if(n%i == 0) {
            count = i;
            break;
        }
    }
    cout<<count<<endl;
}