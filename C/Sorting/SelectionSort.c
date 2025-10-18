#include<stdio.h>
int main(){
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        int mindx = i;
        for(int j = i+1;j<n;j++){
            if(arr[mindx]>arr[j]){
                mindx = j;
            } 
        }
        int temp = arr[i];
        arr[i] = arr[mindx];
        arr[mindx] = temp;
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}