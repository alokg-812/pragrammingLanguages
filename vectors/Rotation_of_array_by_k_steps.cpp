#include<iostream>
#include<vector>
using namespace std;
int main() {
    int size_v;
    cout<<"Enter size of the vector: ";
    cin>>size_v;
    vector <int> v; 
    cout<<"Enter the vector: ";
    for(int i = 0;i<size_v;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"Enter k value: ";
    cin>>k;
    if(k>v.size()) {
        k = k%(v.size());
    }
    for(int i = 0,j = (v.size()-k-1) ; i<=j;i++,j--){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
    }
    for(int i = (v.size()-k) ,j = v.size()-1 ; i<=j;i++,j--){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
    }
    for(int i = 0,j = v.size() ; i<=j;i++,j--){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
    }
    for(int i = 1 ; i<=v.size();i++){
        cout<<v[i]<<" ";
    }
}