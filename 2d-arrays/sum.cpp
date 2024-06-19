#include<iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Enter rows and column of the matrix with a space b/w 'em: ";
    cin>>m>>n;
    int arr[m][n];
    // rows -->if 3 then 0 to 2
    // cols -->if 3 them 0 to 2
    for (int i = 0 ; i< m;i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of the elements is: "<<sum;
}