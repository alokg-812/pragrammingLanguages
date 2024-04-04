#include<iostream>
using namespace std;
int main() {
    int n1;
    cout<<"Enter n1: ";
    cin>>n1;
    int n2;
    cout<<"Enter n2: ";
    cin>>n2;
    char op;
    cout<<"Enter the character: ";
    cin>>op;
    if(op == '+') cout<<n1+n2;
    if(op == '-') cout<<n1-n2;
    if(op == '*') cout<<n1*n2;
    if(op == '/') cout<<n1/n2;

}