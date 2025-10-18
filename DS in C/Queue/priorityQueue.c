#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data;
    int priority;
    struct queue* next;
};
typedef struct queue* Pqueue;
Pqueue head;

Pqueue newNode (int d, int p) {
    Pqueue temp = (Pqueue)malloc(sizeof(struct queue));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
    return temp;
}
void enqueue(int data,int priority) {
    Pqueue temp = newNode(data,priority);
    //case 1: Queue is empty or the new NOde has higher priority that head
    if(head == NULL || priority<head->priority) {
        temp->next = head;
        head = temp;
    }else {
        Pqueue start = head;
        while(start->next!=NULL && start->next->priority <= priority){
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}
void display() {
    if(head == NULL){
        printf("Queuee is empty");
        return;
    }

    Pqueue temp = head;
    while(temp!=NULL){
        printf("%d",temp->data,temp->priority);
        temp = temp->next;
    }
}