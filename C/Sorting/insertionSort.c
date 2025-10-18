#include<stdio.h>
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>=1){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else break;
            j--;
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}