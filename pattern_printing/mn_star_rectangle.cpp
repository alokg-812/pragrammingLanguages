#include<iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 0; i<m;i++){
        for(int j = 0 ; j<n;j++) {
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"Total Stars: "<<m*n<<endl;
    if (m==n){
        cout<<"Its a Square.\n";
    }
    else cout<<"Its a Rectangle.\n\n ";
}