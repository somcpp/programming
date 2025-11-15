#include<iostream>
#include<vector>
using namespace std;
void replace(vector<vector<int>>& ans,vector<int> v,int n,int idx){
    if(idx==n){
        ans.push_back(v);
        return;
    }
    if(v.empty() or v[v.size()-1]==0){
        v.push_back(1);
        replace(ans,v,n,idx+1);
    }
    else if(v[v.size()-1]==1){
        v.push_back(0);
        replace(ans,v,n,idx+1);
    }
}
int main(){
     int n = 3;
     int k = 0;
     vector<vector<int>>ans;
     vector<int> v;
     replace(ans,v,n,0);
     cout<<ans[n-1][k];
}