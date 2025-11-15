#include<iostream>
#include<vector>
using namespace std;

//Recursive Method

void subarr(int arr[],vector<int>ans,int n,int idx){
     int k = ans.size();
     if(idx==n){
          for(int i=0;i<k;i++){
               cout<<ans[i]<<" ";
          }
          cout<<endl;
          return;
     }
     
     subarr(arr,ans,n,idx+1);
     if(k==0 or ans[k-1]==arr[idx-1] ){
          ans.push_back(arr[idx]);
          subarr(arr,ans,n,idx+1);
     }
     
}
int main(){
     int arr[]={1,2,3,4};
     vector<int> ans;
     int n = sizeof(arr)/sizeof(arr[0]);
     subarr(arr,ans,n,0);

     //Iiterative Method

     // for(int i = 0; i < n; i++){
     //      for(int j = i; j < n; j++){
     //           for(int k = i; k <= j; k++){
     //                cout << arr[k] << " ";
     //           }
     //           cout << endl;
     //      }
          
     // }
}

