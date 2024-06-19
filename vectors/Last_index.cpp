#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector <int> v; 
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(7);
    v.push_back(6);
    v.push_back(12);
    cout<<v.size()<<endl;
    int x = 6; //we have to print the last index of this x
    int idx = -1;
    for(int i = v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    // for(int i = 0;i<v.size() ;i++){
    //     if(v[i]==x){
    //         idx = i;
    //     }
    // }
    cout<<idx;
}