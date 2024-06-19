#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head= new_node;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head,8);
    display(head);
    // Node* n = new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;
    
} 