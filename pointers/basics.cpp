#include<iostream>
using namespace std;
int main() {
    int x = 3;
    int* p = &x;
    cout<<x<<endl;   //prints the value of x
    cout<<&x<<endl;  //prints the address of box of x
    cout<<p<<endl;   //prints the address of box of x which was stored in p
    cout<<*p<<endl;  //prints the value of the variable whose address is in the pointer p using dereference/ *operator
}