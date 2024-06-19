#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> v;  
    //size declaration not at all necessary
    //insterting/input taking wale case me do not use [] //garbage value dene lagega
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    //update/access, [] can be used
    // cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<endl;
}