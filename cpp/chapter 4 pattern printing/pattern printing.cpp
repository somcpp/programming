#include<iostream>
using namespace std;
int main(){

//print the rectangle type pattern

    // int m;
    // cout<<"enter number of rows: ";
    // cin>>m;
    // int n;
    // cout<<"enter number of columns: ";
    // cin>>n;
    // for(int i=1;i<=m; i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //print square type pattern
   int m;
    cout<<"enter number of rows: ";
    cin>>m;
    char ch;
    for(int i=1;i<=m; i++){
        for(int j=1;j<=m;j++){
            ch=j+64;
            cout<<ch;
        }
        cout<<endl;
    }
}