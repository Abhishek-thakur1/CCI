// Partition: Write code to partition a linked list around a value x, such that all nodes less than x come
// before all nodes greater than or equal to x. If x is contained within the list, the values of x only need
// to be after the elements less than x (see below). The partition element x can appear anywhere in the
// "right partition"; it does not need to appear between the left and right partitions.
// EXAMPLE
// Input: 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [partition= 5]
// Output: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8 

#include<iostream>
#include "list.h"

using namespace std;


Node *partition(Node *head, int k){
    Node *s1 = nullptr, *e1 = nullptr, *s2 = nullptr, *e2 = nullptr;


    // partitioning the list
    while(head != nullptr){

        Node *nxt = head->next;
        head->next = nullptr;

        // * Insert node into end of before list
        if(head -> data < k){
            if(s1 == nullptr){
                s1 = head;
                e1 = s1;
            }else{
                e1->next = head;
                e1 = head;
            }

            // * Insert node into end of after list
        }else{
            if(s2 == nullptr){
                s2 = head;
                e2 = s2;
            }else{
                e2->next = head;
                e2 = head;
            }
        }
        head = nxt;
    }
    if(s1 == nullptr)
        return s2;

    // Merge two lists..
    e1->next = s2;

    return s1;
}

int main(){

    LinkedListNode list;
    Node *start = list.newNode(3);
    start->next = list.newNode(5);
    start->next->next = list.newNode(8);
    start->next->next->next = list.newNode(5);
    start->next->next->next->next = list.newNode(10);  
    start->next->next->next->next->next = list.newNode(2);
    start->next->next->next->next->next->next = list.newNode(1);

    int k = 5;

    printf("Before Partition: \n");
    list.print(start);

    cout <<"\nAfter Partition: ";
    list.print(partition(start, k));

}