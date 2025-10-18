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
    char postFix[100] = "";
    int i , j = 0;
    int len = strlen(e);

    for (i = 0;i<len;i++) {
        char ch = e[i];
        if (ch == ' ') continue;
        if (isalnum(ch)) {
            postFix[j++] = ch;
        }

        else if(ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            int foundopening = 0;
            while(!isEmpty()){
                char x = pop();
                if(x == '(') {
                    foundopening = 1;
                    break;
                }
                postFix[j++] = x;
            }
            if (!foundopening) {
                printf("Invalid infix expression : unbalanced parenthesis.\n");
                return;
        }
    }
    else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
        while(!isEmpty() && priority(peek()) >= priority(ch)) {
            postFix[j++] = pop();
        }
        push(ch);
    }
    else {
        printf("Invalid symbols in infix expression. Only alphanumberic and { '+', '-','*', '%%', '/' } are allowed.\n");
        return;
    }
}
while (!isEmpty()) {
    char x = pop();
    if (x == '(') {
        printf("Invalid infix expression : unbalanced parenthesis.\n");
        return;
    }
    postFix[j++] = x;
} 

postFix[j] = '\0';
printf("Postfix Expression : %s\n", postFix);
}

int main() {
    char expr[100];
    printf("Enter infix expression: ");
    fgets(expr, 100, stdin);
    expr[strcspn(expr, "\n")] = '\0'; // remove trailing newline
    convertInfix(expr);
    return 0;
}