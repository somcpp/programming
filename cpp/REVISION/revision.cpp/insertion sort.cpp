#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,2,9,3,15,10,6,18,45,65,35,42,59,25,33,44,31,18,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>0 and arr[j]>arr[j-1] ){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}