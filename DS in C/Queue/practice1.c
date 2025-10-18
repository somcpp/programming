#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top = -1;
int stack[100];

void push(int x)(
    stack[++top] = x;
)
int pop() {
    return stack[top--];
}

int priority(char ch){
    if(ch=='(') return 1;
    else if (ch == '-' || ch == '+') return 2;
    else if (ch == '*' || ch == '/') return 3;
    return -1;
}
int isempty(){
    return (top==-1);
}
int peek(){
    return (stack[top]);
}
void infix2prefix(char *e){
    char postfix[100];
    int i = 0 , j = 0;
    int len = strlen(e);
    for (i = 0 ; i< len; i++) {
        char ch = e[i];

        if(ch == ' ' ) continue;

        if (ch == isalnum(ch)){
            postfix[j++] = ch;
        }
        if(ch == '('){
            postfix[j++] = ch; 
        }
        if(ch == ')'){
            int foundopening = 0;
            while(!isempty()){
                char x = pop();
                if(x=='('){
                    foundopening = 1;
                }
                postfix[j++] = x;
            }

        }
        else if (ch == '-' || ch == '+' || ch == '*' || ch == '/'){
            while(!isempty() || priority(peek()>=priority(ch))){
                postfix[j++] = pop();
            }
            push(ch);
        }
        while(!isempty()){
            char x = pop();
            if(x==')'){
                printf("invalid");
            }
            postfix[j++] = x;
        }
        postfix[j] = '\0';
        printf("%s",postfix)
    }
}