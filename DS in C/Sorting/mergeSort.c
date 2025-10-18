#include<stdio.h>
void merge(int *arr,int left, int mid,int right){
    int n1 = mid - left + 1;
    int n2 = right-mid;
    int L[n1];
    int R[n2];
    for(int i = 0;i<n1;i++){
        L[i] = arr[i+left];
    }
    for(int i = 0;i<n2;i++){
        R[i] = arr[i+mid+1];
    }
    int i = 0 , j = 0, k = left;
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k++] = L[i++];
    }
    while(j<n2){
        arr[k++] = R[j++];
    }

}
void display(int *arr,int n){
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void mergeSort(int *arr,int left,int right){
    if(left >= right) return;
    int mid = left + (right - left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
int main(){
    int arr[] = {2,3,5,4,1};
    int n = 5;
    mergeSort(arr,0,n-1);
    display(arr,n);
}