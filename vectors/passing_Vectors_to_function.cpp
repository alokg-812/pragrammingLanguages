#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void pass_by_value(vector<int>a){
    a[0] = 100;
    for(int i = 0; i<a.size() ;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void pass_by_reference(vector<int>&a){
    a[0] = 100;
    for(int i = 0; i<a.size() ;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
    vector <int> v; 
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    for(int i = 0 ; i < v.size();i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    pass_by_value(v);
    pass_by_reference(v);
    for(int i = 0; i<v.size() ;i++){
        cout<<v[i]<<" ";
    }
}