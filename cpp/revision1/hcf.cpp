#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    n = min(n,m);
    m = max(n,m);
    int hcf;
    int k = 1;
    while(k!=0){
        k = m%n;
        hcf = n;
        m = n;
        n = k;
    }
    cout<<"The hcf is: "<<hcf;
}