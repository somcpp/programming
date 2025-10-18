#include<stdio.h>
int main(){
    int arr[] = {3,4,2,6,5};
    int n = 5;
    for(int i = 0;i<n;i++){
        int mini = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[mini]) mini = j;
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}