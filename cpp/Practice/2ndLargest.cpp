#include<iostream>
using namespace std;
int secondLargest(int arr[],int n, int &largest, int &seclarge){
    if(n==1){
        if(arr[0]<arr[1]){
            seclarge = arr[0];
            largest = arr[1];
        }
        else {
            seclarge = arr[1];
            largest = arr[0];
        }
        return seclarge;
    }
    secondLargest(arr,n-1,largest,seclarge);
    if(largest<arr[n]){
        seclarge = largest;
        largest = arr[n];
    }
    return seclarge;
}
int main(){
    int arr[7];
    for(int i = 0;i<7;i++){
        cin>>arr[i];
    }
    int largest = -1;
    int seclarge = -1;
    cout<<secondLargest(arr,7,largest,seclarge);
}