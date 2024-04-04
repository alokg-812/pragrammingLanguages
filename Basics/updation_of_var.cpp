#include<iostream>
using namespace std;
int main() {
    int x = 10;
    cout<<x<<"\n";  //x=10
    x = 30;
    cout<<x<<"\n";  //x = 30
    x = x + 7 ;
    cout<<x<<"\n";  //x = 37
    x = x - 9;
    cout<<x<<"\n";  //x = 28
    x += 9;
    cout<<x<<"\n";  //x = 37
    cout<<x++<<'\n';
    cout<<++x<<"\n"; //x = 38

}