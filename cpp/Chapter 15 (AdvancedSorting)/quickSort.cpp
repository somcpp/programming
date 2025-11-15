#include<iostream>
using namespace std;
void quicksort(int arr[],int lo,int hi){
    if(lo>=hi) return;
    int i = lo;
    int j = hi;
    int pivot = arr[lo];
    while(i<j){
        while(pivot>=arr[i] and i<hi) i++;
        while(pivot<arr[j] and j>lo) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[lo],arr[j]);
    quicksort(arr,lo,j-1);
    quicksort(arr,j+1,hi);
}

int main(){
    int arr[8];
    for(int i = 0;i<8;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,7);
    cout << "Sorted array: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";  // Display sorted array
    }
}