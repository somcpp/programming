#include<stdio.h>
int hcf(int min,int max,int i){
    if(min%i==0 && max%i==0) return i;
    hcf(min,max,i-1);
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int min , max;
    if(x<y) min = x;
    if(x>y) max = x;
    if(y<x) min = y;
    if(y>x) max = y;
    
    printf("%d",hcf(min,max,min));
}