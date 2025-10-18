#include<bits/stdc++.h>
using namespace std;
int n;
void merge(int arr[],int L,int mid,int R){
    int n1 = mid-L +1;
    int n2 = R-mid;
    int left[n1];
    int right[n2];
    int res[n1+n2];
    for(int i = 0;i<n1;i++){
        left[i] = arr[L+i];
    }
    for(int i = 0;i<n2;i++){
        right[i] = arr[mid+1+i];
    }
    int i = 0, j= 0,k=0;
    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            res[k++] = left[i++];
        }else{
            res[k++] = right[j++];
        }
    }
    while(i<n1){
        res[k++] = left[i++];
    }
    while(j<n2){
        res[k++] = right[j++];
    }
    // Copy the merged result back to arr[L...R]
    for(int t = 0; t < n1 + n2; t++) {
        arr[L + t] = res[t];
    }
}
void mergeSort(int arr[],int L,int R){
    if(L<R){
        int mid = (L + R)/2;
        mergeSort(arr,L,mid);
        mergeSort(arr,mid+1,R);

        merge(arr,L,mid,R);
    } 
}
int main(){
    int arr[] = {4,7,5,1,3,2};
    n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int num: arr){
        cout<<num<<" ";
    }
}