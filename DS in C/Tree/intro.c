#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};
typedef struct node* NODE;
struct Node* createNode(int data) {
    struct Node* newNode = (NODE)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
int main() {
    
}