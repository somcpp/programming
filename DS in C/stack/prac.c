int evauluatePostfix(char *exp){
    int i ;
    for(i=0;exp[i];i++){
        char ch = exp[i];

        if(ch == ' ') continue;

        if(isdigit(ch)) {
            push(ch - '0');
        }
        else {
            int a = pop();
            int b = pop();
            int result;

            switch(ch) {
                case '+': result = a + b; break;
                case '+': result = a + b; break;
                case '+': result = a + b; break;
            }
            push(result);
        }
    }
    return pop();
}

int main() {
    char postfix[100];
    fgets(postfix,sizeof(postfix),stdin);
    int result = evauluatePostfix(postfix);
}