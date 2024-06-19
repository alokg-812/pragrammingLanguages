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

void append(Node* &head, int data){
    Node* new_node = new Node(data);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

int main(){
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.append(6);
    list.append(7);

}










// #include <iostream>
// using namespace std;

// // Define the Node structure
// struct Node {
//     int data;
//     Node* next;
// };

// // Function to append a new node at the end
// void append(Node*& head, int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = nullptr;
    
//     if (!head) {
//         head = newNode;
//         return;
//     }
    
//     Node* last = head;
//     while (last->next) {
//         last = last->next;
//     }
//     last->next = newNode;
// }

// // Function to print the linked list
// void printList(Node* head) {
//     Node* temp = head;
//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Function to delete alternate nodes
// void deleteAlternateNodes(Node*& head) {
//     if (!head) return;
    
//     Node* current = head;
//     Node* nextNode = nullptr;
    
//     while (current && current->next) {
//         nextNode = current->next;
//         current->next = nextNode->next;
//         delete nextNode;
//         current = current->next;
//     }
// }

// int main() {
//     Node* head = nullptr;
    
//     // Append elements to the linked list
//     append(head, 1);
//     append(head, 2);
//     append(head, 3);
//     append(head, 4);
//     append(head, 5);
//     append(head, 6);
    
//     cout << "Original list: ";
//     printList(head);
    
//     // Delete alternate nodes
//     deleteAlternateNodes(head);
    
//     cout << "List after deleting alternate nodes: ";
//     printList(head);
    
//     return 0;
// }
