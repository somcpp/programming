#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int n,int i,vector<int> ans){
     if(i==n){
        for(int j=0;j<ans.size();j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
        return;
     }
     subset(arr,n,i+1,ans);
     ans.push_back(arr[i]);
     subset(arr,n,i+1,ans);
}
int main(){
     int arr[] = {1,2,3};
     int n = sizeof(arr)/sizeof(arr[0]);
     vector<int> v;
     subset(arr,n,0,v);
}