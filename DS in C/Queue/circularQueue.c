#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1 , rear = -1;

int isFull() {
    return (front == (rear+1)% SIZE);
}
int isEmpty () {
    return (front == -1);
}
void enqueue(int value) {
    if (isFull()) {
        printf("queue is Full\n");
        return;
    }
    if(isEmpty()){
        front = rear = 0;
    }
    else{
        rear = (rear+1)%SIZE;
    }
    queue[rear] = value;
}

int dequeue() {
    if(front == rear) {
        front = rear = -1;
    }
    else{
        front = (front + 1)%SIZE;
    }
}
void display(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
        return;  
    }
    int i = front;
    while (1) {
        printf("%d ",queue[i]);
        if(i==rear) break;
        i = (i+1) % SIZE;
    }
}