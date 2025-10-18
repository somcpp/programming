#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node next;
    struct node prev;
};
typedef struct node* NODE;

NODE createNodeInDLL(int x) {
    NODE newNode = (NODE)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = 0;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}
NODE insertAtEndInDll(NODE first, int x){
    NODE nn = createNodeInDLL(x);
    if(first == NULL){
        first = nn;
    }else {
        first->prev=nn;
        nn->next = prev;
        first = nn;
    }
}
NODE insertAtPositionInDLL(NODE first, int position, int x) { 
    NODE temp = first;
    NODE nn = createNodeInDLL(x);
    if(first==NULL){
        first = nn;
        return first;
    }
    if(position == 1){
        nn->next = first;
        first->prev = nn;
        first = nn;
    }
    else{
        for(int i = 1;temp!=NULL && i<position-1;i++){
            temp = temp->next;
        }
        nn->next = temp->next;
        temp->next = nn;
        nn->prev = temp;
        if(nn->next != NULL){
            NODE t = n->next;
            t->prev = nn;
        }
    }
    return first;
}

while (lastNode->next!=NULL){
    temp = lastnode;
    lastnode = lastnode->next;
}
void main(){

}