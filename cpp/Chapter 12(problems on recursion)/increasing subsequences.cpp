#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int n,int i,vector<int> ans,int k){
     if(i==n){
        if(ans.size()==k){
            for(int j=0;j<ans.size();j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;}
        return;
     }
     if(ans.size()+(n-i)<k) return;//not clear
     subset(arr,n,i+1,ans,k);
     ans.push_back(arr[i]);
     subset(arr,n,i+1,ans,k);
}
int main(){
     int arr[] = {1,2,3,4,5};
     int n = sizeof(arr)/sizeof(arr[0]);
     vector<int> v;
     int k=3;
     subset(arr,n,0,v,k);
}