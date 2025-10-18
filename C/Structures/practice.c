#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int val;
    struct Node* next;
} Node;
typedef struct LinkedList{
    Node* head;
    Node* tail;
    int size;
} LinkedList;

void intialLinkedList(LinkedList* list){
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

Node* createNode(int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(LinkedList* list,int val){
    Node* newNode = createNode(val);
    if(list->size)
}

