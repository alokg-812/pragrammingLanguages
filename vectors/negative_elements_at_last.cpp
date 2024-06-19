#include<bits/c++io.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector <int> &v){
    cout<<"Vector is: ";
    for (int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void swap(int &x,int &y){
    int temp = x;
    x = y;
    x = temp;
}
int main() {
    vector<int> v;
    int x;
    cout<<"Enter vector size: ";
    cin>>x;
    cout<<"Enter elements: ";
    for(int i = 0 ; i<x;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    display(v);
    int k = 0;
    int l = x-1;
    while(k<l){
        if(v[k]<0) k++;
        if(v[l]>0) l--;
        else{
            swap(k,l);
            k++;
            l--;
        }
    }
    display(v);
}