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
    int max = arr[0][0];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout<<"Max element is: "<<max;
}