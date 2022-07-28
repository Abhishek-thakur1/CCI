#include<iostream>
#include <unordered_set>
#include "list.h"

using namespace std;

void removeDuplicates(Node *n){
    unordered_set<int> set;
    Node *prev = nullptr;

    while(n != nullptr){
        if(set.find(n->data) != set.end()) prev -> next = n->next;
        else{
            set.insert(n -> data);
            prev = n;
        }
        n = n->next;
    }
    
}

int main(){
    LinkedListNode list;
    Node *start = list.newNode(10);
    start->next = list.newNode(12);
    start->next->next = list.newNode(11);
    start->next->next->next = list.newNode(11);
    start->next->next->next->next = list.newNode(12);
    start->next->next->next->next->next = list.newNode(11);
    start->next->next->next->next->next->next = list.newNode(10);

    printf("Linked list before removing duplicates : \n");
    list.print(start);

    removeDuplicates(start);

    printf("\nLinked list after removing duplicates : \n");
    list.print(start);

    return 0;
}

