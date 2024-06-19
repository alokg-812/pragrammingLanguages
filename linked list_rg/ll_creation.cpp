#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
};

int main(){
    // 10 20 30 40 
    Node a,b,c,d;
    a.val = 10;
    b.val = 20;
    c.val = 30;
    d.val = 40;
    // forming linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    cout<<c.next<<"\n";
    cout<<c.val<<" "<<&d<<"\n";    
}