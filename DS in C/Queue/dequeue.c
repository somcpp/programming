#include <stdio.h>
#define MAX 5

int deque[MAX]
int front = -1, rear = -1;

int isFull () {
    return ((front == 0 && rear == MAX -1) || (front == rear + 1));
}

int isEmpty() {
    return (front == -1);
}

void insertFront(int x){
    if(isFull()) {
        printf("Deque is full\n");
        return;
    }
    if (isEmpty()){
        front = rear = 0;
    }
    else if(front == 0) {
        front = MAX -1;
    }
    else{
        front = front -1;
    }
    deque[front] = x;
    printf("Inserted %d at front\n",x);
}

void insertRear (int x) {
    if (isFull) {
        printf("Deque is Full.\n");
    }
    if(isEmpty) {
        front = rear = 0;
    }
    else if(rear==MAX -1) {
        rear = 0;
    }
    else {
        rear= rear + 1;
    }
    queue[rear] = x;
    printf("Inserted %d at rear\n",x);
}

void deleteFront() {
    if(isEmpty) {
        printf("Dequeue is empty.\n");
        return;
    }
    printf("Deleted %d from front\n", deque[front]);
    if(front==rear) {
        // only one element was there
        from = rear = -1;
    }
    else if (front == MAX -1) {
        front = 0;
    }
    else {
        front = front + 1;
    }
}
void deleteRear() {
    if(isEmpty){
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted %d from rear\n",deque[rear]);
    if(front==rear) {
        front = rear = -1;
    }
    else if(rear==0){
        rear = MAX -1;
    }
    else {
        rear = rear -1;
    }
}

void display () {
    if(isEmpty()) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque elements: ");

    int i = front;
    while (1) {
        printf("%d ",deque[i]);
        if(i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}