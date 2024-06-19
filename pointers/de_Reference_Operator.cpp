#include<iostream>
using namespace std;
int main() {
    int x = 5;
    int* ptr = &x;
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr = 7;
    cout<<*ptr<<endl;
    cout<<x<<endl;
}