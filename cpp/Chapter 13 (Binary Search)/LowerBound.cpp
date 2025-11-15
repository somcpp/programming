#include<iostream>
using namespace std;
int main(){
     int arr[] = {1,2,4,5,9,15,18,21,24};
     int n = sizeof(arr)/sizeof(arr[0]);
     int lo = 0;
     int hi = n-1;
     int x = 23;
     while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==x){
            cout<<arr[mid-1];
            break;
        } 
        if( hi == lo + 1){
            cout<<arr[lo];
            break;
        }
        else if(arr[mid]<x) lo = mid;
        else hi = mid - 1;
    }
}