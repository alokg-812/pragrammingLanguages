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
    vector <int> v2(v.size());
    for(int i = 0 ; i<v.size();i++){
        v2[i] = v[v.size() - 1 - i];
    }
    for(int i = 0 ; i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

}