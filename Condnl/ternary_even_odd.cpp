// (condition) ? if true : if false
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    (n%2 == 0) ? cout<<"Even" : cout<<"Odd";
}