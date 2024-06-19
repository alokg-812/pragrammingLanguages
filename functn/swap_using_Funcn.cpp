#include<iostream>
using namespace std;
void swap(int x, int y) {
    cout<<&x<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;
}
int main() {
    int x = 18 , y = 45;
    cout<<&x<<endl;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}