#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 10000

// Stack implementation
char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    if (top == -1)
        return '\0'; // Stack underflow
    return stack[top--];
}

char peek() {
    if (top == -1)
        return '\0';
    return stack[top];
}

bool isMatchingPair(char open,char close){
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}
bool isValid(char* s) {
    for (int i = 0;s[i] != '\0';i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }else if (ch == ')' || ch == '}' || ch == ']') {
            char topChar = pop();
            if(!isMatchingPair(topChar,ch)){
                return false;
            }
        }
    }
    return top == -1;
}