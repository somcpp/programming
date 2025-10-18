#include <stdio.h>
#define SIZE = 5;

int queue[SIZE];
int front = -1, int rear = -1;

void enqueue (int x ){
    if((front == 0 && rear == MAX-1) || (rear + 1)%SIZE == front){
        printf("queue is overflowed");
        return;
    }
    if(front==-1){
        front = rear = 0;
    }
    else{
        rear = (rear + 1) % SIZE;
    }
    queue[rear] = x;
}