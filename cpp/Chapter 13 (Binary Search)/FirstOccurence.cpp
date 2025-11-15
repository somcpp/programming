#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,2,2,3,3,4,5,5,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1;
    int lo = 0;
    int hi = n-1;
    while(lo!=hi+1  ){
        if(x==arr[0] or x==arr[n-1]){
            break;
        }
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]==x){
                hi = mid;
            }
            else{
                cout<<mid;
                break;
            }
        }
        else if(arr[mid]<x){
            lo=mid;
        }
        else if(arr[mid]>x){
            hi=mid;
        }

    }
    if(arr[0]==x) cout<<0;
    else cout<<n-1;
    
}