#include<iostream>
using namespace std;
void swap(int* p, int* q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main() {
    int x = 18 , y = 45;
    int*p = &x,*q = &y;
    cout<<"x is "<<x<<" "<<" y is "<<y<<endl;
    swap(p,q);
    cout<<"x is "<<x<<" "<<" y is "<<y<<endl;
}