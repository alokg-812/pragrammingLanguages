#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int pdt = 1,last_digit;
    while(n>0) {
        last_digit = n%10;
        pdt*=last_digit;
        n = n/10;
        if(n==0) break;
    }
    cout<<"product= "<<pdt<<endl;
}