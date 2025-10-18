struct node {
	int data;
	struct node *prev;
	struct node *next;
};
typedef struct node * NODE;
NODE createNodeInDLL() {
	NODE temp;
	temp = (NODE)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	return temp;
}
NODE insertAtPositionInDLL(NODE first,int pos,int ele){
    NODE newNode = createNodeInDLL(ele);
    for(int i = 0;p!=NULL && i<pos-1;i++){
        p = p->next;
    }
    if(p==NULL){
        printf("NO such position in DLL so insertion is not possible")
    }
    if(p->next!=NULL){
        p->next->
    }
}

do{
    print
    temp = temp->next;
}while(temp!=first)


int arr[100];
int top = -1;

void push(int ele){
    arr[++top] = ele;
}


int isMatching(char open , char close) {
    return (open == '(' && close == ')') || 
    (open == '{' && close == '}') ||
    (open == '[' && close == ']');
}

isValid(char *s){
    char stack[MAX];
    int top = -1;

    for(int i = 0;s[i]!='\0';i++){
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch; // Push opening bracket
        }else {
            if(top == -1) return 0;
            if(!isMatching(stack[top],ch)) return 0;
            top--;
        }
    }
    return top == -1;
}

while(1){
    print
    if(i==rear) break;
}

rear - fromt +1

max - front + rear + 1