#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
}Node;
Node* front = NULL;
Node* rear = NULL;

Node* createNode(int val){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
}
void enqueue(int val){
    Node* temp = createNode(val);
    if (rear==NULL){
        rear=front = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
void dequeue(){
    if(front==NULL){
        printf("queue is empty");
        return;
    }
    front = front->next;
}
void display(){
    Node* temp = front;
    while(temp){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main () {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    dequeue();
    display();
}