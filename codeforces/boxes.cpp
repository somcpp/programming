#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int i = 0;
        int j = 0;
        while(j<n){
            if(arr[j]>arr[j+1]){
                j++;
            }
            else if(arr[j]<arr[j+1]){
                i = j;
                j++;
            }
            int len = j - i + 1;
            if(len>k){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";

    }
}