#include<iostream>
using namespace std;
int main(){
    int n;
    int nums[n];
    cin>>nums[n];
    int m=sizeof nums[n];
    int target;
    cin>>target;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++){
            if(nums[i]+nums[j]==target){
                cout<<nums[i]<<"  "<<nums[j];
                break;
            }
        }
    }
}
#include<iostream>
using namespace std;
int main(){
     
}