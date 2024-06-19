#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector <int> v){
    for(int i = 0 ; i<v.size() ;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sorting(vector<int> &v){
    int n=v.size();
    int i = 0,j = n-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i] == 1 and v[j] == 0){
            v[i] = 0;
            v[j] = 1;
            i++,j--;
        }
    }
}
int main() {
    vector<int > v;
    for(int i = 1;i<=8;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    // sort(v.begin(),v.end());
    sorting(v);
    display(v);
}