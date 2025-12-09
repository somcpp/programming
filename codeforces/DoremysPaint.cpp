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
        vector<int> v(n);
        for(int i = 0;i < n; i++) cin>>v[i];

        map<int,int> freq;
        for(int i = 0;i < n; i++){
            freq[v[i]]++;
        }
        if(freq.size()>2) {
            cout<<"No";
        }else {
            int freq1 = freq.begin()->second;
            int freq2 = freq.rbegin()->second;
            if(freq1 == freq2) {
                cout<<"Yes";
            } else if(n%2==1 && abs(freq1-freq2)==1) {
                cout<<"Yes";
            } else{
                cout<<"No";
            }
        }
        cout<<endl;
    }
    return 0;
}