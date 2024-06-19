#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout<<a.val<<endl;                               //value of a is printed
    cout<<(a.next)->val<<endl;                       //value of the pointer which is at next of a is printed
    cout<<((a.next)->next)->val<<endl;               //value of the pointer which is next to next of a is printed
    cout<<(((a.next)->next)->next)->val<<endl;       //value of the pointer which is next to next to next of a is printed
    cout<<a.val<<" "<<(a.next)->val<<" "<<(b.next)->val<<" "<<(c.next)->val<<" "<<d.next;   //val of a,b,c,d and 0 is printed bcoz there is no node present at next of d
}