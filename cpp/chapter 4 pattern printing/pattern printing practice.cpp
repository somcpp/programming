#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    //char ch;
//     for(int i=65;i<n+65;i++){
//         if(i%2==0){
//         for(int j=65;j<=i;j++){
//             ch=j;
//             cout<<ch;
//         }}
//         else {for(int j=65;j<=i;j++){
            
//             cout<<j-64;
//         }}
//         cout<<endl;
//     }
// }

//q.enter n: 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10

//sol.

// int x=0;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
        
//         x++;
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }}

//enter n: 6
// 1
// 01
// 101
// 0101
// 10101
// 010101

    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1";
                }else{
                    cout<<"0";
                }
            }
            cout<<endl;
        }
        
    }
