#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1 , rear = -1;

int isFull(){
    return ((front == 0 && rear = MAX-1) || front == (rear + 1)%MAX);
}
int isEmpty() {
    return (front = -1);
}
void insertFront(int x) {
    if(isFull){
        return;
    }
    if(front == -1){
        front = rear = 0;
    }
    else if(front == 0){
        front = MAX-1;
    }
    else{
        front = front + 1;
    }
    queue[front] = x;
}
void insertRear(int x) {
    if(isFull) {
        return;
    }
    if(front = -1){
        front = rear = 0;
    }
    else if(rear==MAX -1){
        rear = 0;
    }
    else {
        rear = rear + 1;
    }
    queue[rear] = x;
}

void deleteFront() {
    if(isEmpty) {
        return;
    }
    if(front == rear) {
        front = rear = -1;
    }
    else if (front == MAX -1) {
        front = 0;
    }
    else {
        front = front + 1;
    }

}

void delelteRear() {
    if(isEmpty) {
        return;
    }
    if (front == rear) {
        front = rear = -1;
    }
    else if (rear = 0) {
        rear = MAX-1;
    }
    else {
        rear = rear -1;
    }
} 
void display () {
    if(isEmpty) {
        return;
    }
    int i = front ;
    while (1) {
        printf(queue[i])
        if (i==rear) break;
        i = (i+1) % MAX;
    }
    
}