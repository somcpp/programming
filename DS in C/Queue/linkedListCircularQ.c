#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data ;
    struct Node* next;
}Node;
typedef Node* node;
node front = NULL;
node rear = NULL;

node createNode(int data){
    node newNode = (node)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void enqueue(int data){ 
    node newnode = createNode(data);

    if(front == NULL) {
        front = rear = newnode;
        rear->next = front;
    } else {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue() {
    if(front == NULL) {
        printf("Queue is empty");
    }
    if(front == rear) {
        printf("deleted %d",front->data);
        front = rear = NULL
    }
    else {
        front = front->next;
        rear->next = front;
    }
}

void display() {
    if(front == NULL) {
        return;
    }
    node temp = front;
    do {
        printf("%d ",temp->data);
        temp = temp->next;
    } while (temp != front);
}