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
    Node temp = a;
    // ye pahla loop jo chal raha hai usme jyo hi 'd' store hua temp me aur condtn check hui to loop toot gaya 
    // while(temp.next != NULL){
    //     cout<<temp.val<<" ";
    //     temp = *(temp.next);
    // }

    // upar wale ka solution,,, kaam chalu to hai lekin dekhne me acha nahi uske liye nodepointer.cpp wala file dekhe
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL){
            break;
        }
        temp = *(temp.next);
    }
}