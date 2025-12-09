#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin>> arr[i];
        }
        int minEle = *min_element(arr.begin(),arr.end());
        if(arr[0]==minEle) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}