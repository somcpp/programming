#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        bool flag = false;
        for(int i = 1;i < n-1 ;i++) {
            if(s[i]=='.' && s[i-1] == '.' && s[i+1] == '.'){
                flag = true;
            }
        }
        int empty = 0;
        for(char &ch : s){
            if(ch=='.') {
                empty++;
            }
        }
        if(flag) cout<<2;
        else cout<<empty;
        cout << "\n";
    }
}