#include<iostream>
#include <unordered_set>
#include "list.h"


int getNthFromLast(Node *head, int n){
    int len = 0;
    Node *temp = head;

    while(temp != nullptr){
        temp = temp->next;
        len++;
    }
    if(len<n) return -1;

    temp = head;

    for (int i = 1; i < len-n+1; i++) temp = temp->next;

    return temp->data;
}

int main(){
    LinkedListNode list;
    int k = 3;
    Node *start = list.newNode(5);
    start->next = list.newNode(6);
    start->next->next = list.newNode(8);
    start->next->next->next = list.newNode(10);
    start->next->next->next->next = list.newNode(12);
    start->next->next->next->next->next = list.newNode(78);
    start->next->next->next->next->next->next = list.newNode(36);

    printf("Linked list is : \n");
    list.print(start);

    cout <<"\nNth element from end of linked list is: " << getNthFromLast(start, k)<<endl;

    return 0;
}