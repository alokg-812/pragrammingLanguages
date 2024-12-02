#include<bits/stdc++.h>
using namespace std;
class Node{ // this is a tree node
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayNode(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayNode(root->left);
    displayNode(root->right);
}
int maxOfTree(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val, max(maxOfTree(root->left), maxOfTree(root->right)));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(15);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayNode(a);
    cout<<"\nMaximum Value: "<<maxOfTree(a)<<endl;
}