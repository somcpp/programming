#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;

int main(){
    fast;
    int t; cin >> t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> v(n);
        bool flag = false;
        for(int i = 0; i < n; i++) {
            cin>>v[i];
            if(v[i]==k) flag = true;
        }
        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}