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
    int n = v.size();
    int num_zero = 0, num_ones = 0;
    for(int i = 0;i<n;i++){
        if(v[i] == 0) num_zero++;
        else num_ones++;
    }
    for(int i = 0,j = num_ones;i<num_zero,j<n;i++,j++){
        v[i] = 0;
        v[j] = 1;
    }
}
int main() {
    vector<int > v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    display(v);
    // sort(v.begin(),v.end());
    sorting(v);
    display(v);
}