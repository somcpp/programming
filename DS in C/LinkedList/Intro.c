#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* createNode(int val){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(Node** head,int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode==NULL) {
        return;
    }
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head,int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL) {
        return;
    }
    //formation of newNode
    newNode->data = value;
    newNode->next = NULL;

    //connecting newNode to Linkedlist
    if(*head==NULL){
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void deleteNode(Node** head,int value){
    Node *temp = *head;
    if(temp->next == NULL){
        temp = NULL;
    }
    Node* prev = NULL;
    while(temp!=NULL && temp->data != value){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) return;
    prev->next = temp->next;

}

void displayList(Node* head){
    Node* temp = head;
    while(temp!=NULL) {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// while(temp->next!=NULL){
//     struct node* newNode = createnode(temp->data);
//     newNode->next = newhead;
//     newhead = newNode;
//     temp = temp->next;
// }
// head = newHead;

void reverseLL(Node** head){
    Node* temp = *head;
    Node* newHead = NULL;
    while(temp!=NULL){
        Node* newNode = createNode(temp->data);
        newNode->next = newHead;
        newHead = newNode;
        temp = temp->next;
    }
    *head = newHead;
}
void removeDuplicates(Node** head){
    Node* prev = *head;
    Node* curr = prev->next;
    while(curr!=NULL){
        Node* temp = *head;
        int x = 1;
        while(temp!=curr){
            if(curr->data == temp->data) x = 0;
            temp = temp->next;
        }
        if(x==1){
            prev->next = curr;
            prev = prev->next;
        }
        curr = curr->next;
    }
    prev->next = NULL;
    
}
int main(){
    Node* head = NULL;

    //insert elements
    insertAtBeginning(&head,10);
    insertAtBeginning(&head,20);
    insertAtEnd(&head,30);
    insertAtEnd(&head,20);
    insertAtEnd(&head,40);
    insertAtEnd(&head,30);

    printf("Linked List after insertions:\n");
    displayList(head);

    //delete a node

    // deleteNode(&head,10);
    // reverseLL(&head);
    removeDuplicates(&head);
    // printf("Linked List after delteing 10:\n");
    displayList(head);

    while(head != NULL){
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

