#include<iostream>
using namespace std;
int main() {
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    // cout<<sizeof(array)<<endl;
    // cout<<size<<endl;
    for(int i = 1;i<=size;i++) {
        cout<<array[i-1]<<endl;
    }
}