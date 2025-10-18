struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE createNodeInCLL() {
	NODE temp;
	temp = (NODE) malloc(sizeof(struct node));
	temp -> next = NULL;
	return temp;
}

NODE addNodesInCLL(NODE first,int x){
    NODE temp;
    NODE lastNode = first;
    temp = createNodeInCLL();
    temp->data = x;
    if(first == NULL){
        temp->next = temp;
        return temp;
    }
    while(lastNode->next!=first){
        lastNode = lastNode->next;
    }
    lastNode->next = temp;
    temp->next = first;
    return first;
}
void traverseListInCLL(NODE first) {
    NODE temp = first;
    if(first==NULL){
        printf("List is empty\n");
    }else{
        do{
            printf("%d -->",temp->data);
            temp = temp->next;
        }while (temp!=first);
        printf("\n");

    }
    
}