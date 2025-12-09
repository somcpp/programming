#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag = true;
        for(int i = 0; i < 5; i++) {
            if(n%3==1 || n%3==2) {
                cout<<"First";
                flag = false;
                break;
            }
        }
        if(flag) cout<<"Second";
        cout<<endl;
    }
}