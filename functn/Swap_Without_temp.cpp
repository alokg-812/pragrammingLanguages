#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"a and b are "<<a<<" and "<<b<<endl;
    // int temp = a;
    // a=b;
    // b=temp;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"New values of a and b are "<<a<<" and "<<b<<endl;
}