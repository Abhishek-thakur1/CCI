#include<iostream>
using namespace std;

class Node{
    public:
    int data; //
    Node *next;
    Node(int val): data(val), next(NULL) {}
};

class LinkedListNode{
    public:
        Node *head;
        LinkedListNode() : head(NULL){};
        Node *newNode(int val);
        void print(Node *node);
};


void LinkedListNode::print(Node *node){
    // Node *ptr = this -> head;
    // while(ptr != NULL){
    //     cout << "List Is: " << ptr->data << endl;
    //     ptr = ptr -> next;
    // }
    // cout << endl;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

Node *LinkedListNode::newNode(int val){
    Node* temp = new Node(val);
    return temp;
}