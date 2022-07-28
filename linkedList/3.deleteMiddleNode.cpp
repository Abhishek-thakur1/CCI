// Delete Middle Node: Implement an algorithm to delete a node in the middle (i.e., any node but 
// the first and last node, not necessarily the exact middle) of a singly linked list, given only access to 
// that node. 
// EXAMPLE 
// Input:the node c from the linked list a->b->c->d->e->f 
// Result: nothing is returned, but the new linked list looks like a->b->d->e->f



#include<iostream>
#include "list.h"

using namespace std;

void deleteMiddle(Node *n){
    if(n == nullptr || n->next == nullptr)
        return;

    Node *nxt = n->next;
    n->data = nxt->data;
    n->next = nxt->next;
    // delete[] n;
}

int main(){
    LinkedListNode list;
    Node *start = list.newNode(3);
    start->next = list.newNode(6);
    start->next->next = list.newNode(8);
    start->next->next->next = list.newNode(10);
    start->next->next->next->next = list.newNode(12);  /*delete this node*/
    start->next->next->next->next->next = list.newNode(78);
    start->next->next->next->next->next->next = list.newNode(36);

    printf("Linked list is : \n");
    list.print(start);

    deleteMiddle(start->next->next->next->next);

    printf("\nLinked list after deleting middle element: \n");
    list.print(start);
}