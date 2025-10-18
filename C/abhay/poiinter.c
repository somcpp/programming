#include<stdio.h>
void sum(int* x , int* y){
    *x = *x+*y;
}
int main(){
    int x = 5;
    int y = 7;
    sum(&x,&y);
    printf("%d",x);
}