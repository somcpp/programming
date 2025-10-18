#include<stdio.h>
int main(){
    int arr[] = {3,4,2,6,5};
    int n = 5;
    for(int i = 0;i<n;i++){
        int j = i;
        while(j>=1){
            if(arr[j]>arr[j-1]) break;
            else{
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            j--;
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}