#include<iostream>
using namespace std;
void printMax(int arr[],int x,int i,int max){
if(i==x){
    cout<<max;
    return;
}
    
    if(arr[i]>max){
        max=arr[i];
    }
    printMax(arr,x,i+1,max);

}
int main(){
     int arr[] = {3,6,5,56,8,9};
     int n = sizeof(arr)/sizeof(arr[0]);
     printMax(arr,n,0,INT8_MIN);
}