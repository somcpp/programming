struct node {
    int data;
    struct node *left, *right;
};
typedef struct node *BSTNODE

struct stacknode {
    BSTNODE node;
    struct stacknode* next;
};
typedef struct stacknode *STKNODE;
STKNODE top = NULL;

int isempty() {
    return (top==NULL);
}

void push(BSTNODE b){
    STKNODE temp = malloc(sizeof(struct stacknode));
    if(temp == NULL){
        printf("Stack is overflow.\n");
    }else {
        temp->node = b;
        temp->next = top;
        top = temp;
    }
}
BSTNODE pop() {
    STKNODE temp;
    BSTNODE b;
    if(top == NULL){
        printf("Stack is underflow.\n");
        return;
    }else{
        temp = top;
        top = top->next;
        b = temp->node;
        free(temp);
    }
}
BSTNODE newNodeInBST(int item) {
    BSTNODE temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
BSTNODE insertNodeInBST(BSTNODE node, int ele) {
    if(node==NULL) {
        printf("successfuly inserted.\n");
        return newNodeInBST(ele);
    }
}
void inorderInBST(BSTNODE root){
    if(root==NULL) return;
    inorderInBST(root->left);
    push(root);
    inorderInBST(root->right);
}
BSTNODE deleteNodeInBST(BSTNODE root,int ele){
    if(root==NULL){
        return root;
    }
    if(root->data<ele){
        root->right = deleteNodeInBST()
    }
}