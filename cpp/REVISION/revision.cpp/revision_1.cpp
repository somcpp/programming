#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    // int y=n%10;
    // while(n!=0){
    //     n/=10;
    //     int x=n%10;
    // y=(y*10 + x);

    // }
    // cout<<y/10;
    int y=0;
    while(n!=0){
        int x=n%10;
        y = y+x;
        n/=10;
    }
    cout<<y;
}

