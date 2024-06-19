#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target = 7;
    int idx = 0;
    bool f = false;
    for (int i = 0 ; i < 10 ; i++){
        if(arr[i] == target){
            idx = i;
            f = true;
            break;
        }
        
    }
    if(f == true){
            cout<<idx<<endl;
    }
    else cout<<"Index out of bound\n";
}