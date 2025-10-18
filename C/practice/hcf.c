#include<stdio.h>
int hcf(int x , int y){
    if(x==0) return y;
    hcf(y%x,x);
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",hcf(x,y));
}