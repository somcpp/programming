#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100
char stack[SIZE];

int top = -1;

int isEmpty() {
    return (top==-1);
}

void push(char x){
    if (top >= SIZE-1){
        printf("stack overflow!");
    }
    stack[++top] = x;
}

char pop() {
    if(isEmpty()){
        return '\0';
    }
    return stack[top--];
}
char peek() {
    if (isEmpty()) return '\0';
    return stack[top];
}

int priority (char x) {
    if (x == '(') return 0;
    else if (x == '+' || x == '-') return 1;
    else if (x == '*' || x == '/') return 2;
    else return -1;
}
void convertInfix(char* e) {
    char postfix[100] = "";
    int i , j = 0;
    int len = strlen(e);

    for(int i = 0;i<len;i++){
        char ch = e[i];

        if(ch == ' ') continue;
        if(isalnum(ch)) {
            postfix[j++] = ch;
        }
        else if(ch == '('){
            push(ch);
        }
        else if (ch == ')') {
            int foundopening = 0;
            while(!isEmpty()){
                char x = pop();
                if(x == '('){
                    foundopening = 1;
                    break;
                }
                postfix[j++] = x;
            }
            if(!foundopening) {
                printf ("invalid expression \n");
            }
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            while(!isEmpty() && priority(peek()) >= priority(ch)){
                postfix[j++] = pop();
            }
            push(ch);
        }
    }
}