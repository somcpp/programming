#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n); 
    int f1 = 0 , f2 = 1 , f = 0;
    printf("%d %d",f1,f2);
    for(int i = 0;i<n-2;i++){
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf("%d ",f);
    }
}