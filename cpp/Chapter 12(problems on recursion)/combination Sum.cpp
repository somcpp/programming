#include<iostream>
#include<vector>
using namespace std;
void sum(int arr[],vector<int> ans,int target,int n){
    if(target==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else if(target<0){
        return;
    }
    
    for(int i = 0;i<n;i++){
        ans.push_back(arr[i]);
        sum(arr,ans,target-arr[i],n);
        ans.pop_back();
    }
    
    

}
int main(){
    
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    sum(arr,ans,12,n);
}