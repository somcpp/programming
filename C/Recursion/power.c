#include<stdio.h>
int power(int x, int y){
    if(y==1) return x;
    return x * power(x,y-1);
}
int main(){
    int n,e;
    printf("Enter Number: and exponent:");
    scanf("%d %d",&n,&e);
    printf("%d",power(n,e));
}