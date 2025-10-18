#include<stdio.h>
int main(){
    // FILE* ptr = fopen("raghav.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL){
    //     printf("%s",str);
    // }
    FILE* ptr = fopen("som.txt","w");
    char str[] = "hi i am som";
    fputs(str,ptr);
    fclose(ptr);
} 