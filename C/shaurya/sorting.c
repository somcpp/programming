#include<stdio.h>

int main(){
    int arr[] = {7,6,8,11};
    int n = sizeof(arr)/sizeof(arr[1]);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j]-arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
    
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}