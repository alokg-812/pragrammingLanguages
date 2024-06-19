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
    int i,j;
    cout<<"Enter starting index: ";
    cin>>i;
    cout<<"Enter ending index: ";
    cin>>j;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    for(int i = 0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}