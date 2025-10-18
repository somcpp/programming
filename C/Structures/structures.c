#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
    int size;
} LinkedList;

//fuction to intiallize a LinkedList
void initialLinkedList(LinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

Node* createNode(int val){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(LinkedList* list, int val) {
    Node* newNode = createNode(val);
    if(list->size==0){
        list->head = list->tail = newNode;
    }
    else{
        list->tail->next = newNode;
        list->tail = newNode;
    }
    list->size++;
}

void insertAtIdx(LinkedList* list,int idx,int val) {
    if(idx == 0) {
        insertAtEnd(list,val)
    }
}