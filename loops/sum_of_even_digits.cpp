#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum = 0,last_digit;
    while(n!=0) {
        last_digit = n%10;
        if(last_digit % 2 == 0) {
            sum+=last_digit;
        }
        n = n/10;
    }
    cout<<"Summ= "<<sum<<endl;
}