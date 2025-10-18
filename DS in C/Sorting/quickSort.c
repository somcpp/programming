#include<stdio.h>

int partition(int arr[],int s,int e){
    int pivot = arr[s];

    int count = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at right postion
    int pivotIdx = s + count;
    swap(arr[pivotIdx],arr[s]);

    //left and right 
    int i = s , j = e;

    while(i<pivotIdx && j>pivotIdx){
        while (arr[i]<pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        
        if(i<pivotIdx && j>pivotIdx){
            swap(arr[i],arr[j]);
        }
        
    }
    return pivotIdx;
    
}
void quickSort(int arr[],int s,int e){
    //Base Case
    if(s >= e) return;

    //Partition the array
    int p = partition(arr, s ,e);

    quickSort(arr,s,p-1); // sort the left part
    quickSort(arr,p+1,e); // sort the right part
}
int main(){
    int arr[] = {2,4,1,6,9};
    int n = 5;

    quickSort(arr,0,n-1);


}