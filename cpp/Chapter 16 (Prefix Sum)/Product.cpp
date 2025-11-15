//Q. Product of array except self
#include<iostream>
using namespace std;
void display(int arr[]){
    for(int i = 0;i<4;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]= {1,2,3,4};
    int pre[4];
    pre[0] = 1;
    int suf[4];
    suf[3]=1;
    int ans[4];
    for(int i = 1;i<4;i++){
        pre[i] = pre[i-1]*arr[i-1];
        suf[3-i] = suf[4-i]*arr[4-i];
           
    }
    for(int k = 0;k<4;k++){
        ans[k] = pre[k]*suf[k];
    }
    display(pre);
    cout<<endl;
    display(suf);
    cout<<endl;
    display(ans);
    
}