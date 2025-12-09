#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;

int main(){
    fast;
    int t; cin >> t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        string str = "";
        int k = 25/n;
        for(int i = 0;i<k;i++){
            str += x;
        }
        int ans = -1;
        for(int i = 0;i < n;i++){
            string y = str.substr(i,m);
            if(y == s) {
                ans = (i + m)%n;
            }
        }
        cout<<"ans is : "<<ans<<endl;
    }
    return 0;
}