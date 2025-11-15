#include<iostream>
using namespace std;
int main(){
    int n = 51;
    int lo = 1;
    int hi = 100;
    int ans = 1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        int x = mid*mid;
         
        if(x == n){
            cout<<mid;
            break;
        }
        if(x<n){
            lo = mid+1;
        }
        else{
            hi = mid - 1;
            ans = hi;
        }
    }
    cout<<ans;
}