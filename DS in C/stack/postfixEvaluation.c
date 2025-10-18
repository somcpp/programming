#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}
int pop() {
    return stack[top--];
}

int evaluatePostfix(char *exp) {
    int i;
    int n = strlen(exp);
    for(i = 0;i<n; i++){
        char ch = exp[i];
        if(ch == ' ') continue;

        if(isdigit(ch)) {
            push(ch - '0');
        }
        else {
            int b = pop();
            int a = pop();
            int result;

            switch(ch) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
            }

            push(result);
        }
    }
    return pop();

}
int main() {
    char postfix[100];
    printf("Enter postfix expression: ");
    fgets(postfix,sizeof(postfix),stdin);
    int result = evaluatePostfix(postfix);
    printf("Result: %d\n",result);
}