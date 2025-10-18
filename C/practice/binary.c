#include<stdio.h>
int main(){
    int n = 8;
    int arr[] = {1,2,3,4,5,6,7,8};
    int target = 2;
    int lo = 0;
    int hi = 7;
    while(lo<=hi){
        int mid = (lo + hi)/2;
        if(arr[mid]==target){
            printf("%d",mid);
            break;
        }
        if(arr[mid]<target){
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
}