#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,5,6} 
    int k = 1;
    for(int i =0;i<10;i++){
        arr[i] = k;
        k++;
    }
    arr[2] = 0;
    for(int i = 0;i<10;i++){
        printf("%d ",arr[i]);
    }
}