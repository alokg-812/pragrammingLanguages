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
    for(int i = 0 ; i<size_v;i++){
        cout<<v[i]<<" ";
    }
    int x;
    cout<<endl<<"Enter sum number: ";
    cin>>x;
    for(int i = 0; i<size_v;i++){
        for(int j = i+1 ; j<size_v;j++){
            if(v[i]+v[j] == x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}