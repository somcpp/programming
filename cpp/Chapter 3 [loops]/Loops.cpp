#include<iostream>
using namespace std;
int main(){ 
    
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // // for(int i=0; i<=n; i++){
    // //     if(i%2!=0) cout<<i<<endl;
    // // }
    // // for(int i=2;i<=100;i=i+2){
    // //     cout<<i<<endl;
    // // }
    //  for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }


    int n;
    cout<<"enter n: ";
    cin>>n;
    // //int f;
    // int a=4;
    // for(int i=1;i<=n;i++){
    //     a=a*3;
    //     cout<<a<<" ";
    // }}
// for(int i=1;i<n;i++){
//     if(n%i==0) f=i;}
//     cout<<f;
// }

// BREAK (to get out of the loops)


// for (int i = n/2; i>=1; i--){
//     if(n%i==0) {cout<<i;
//     break;}
// }}


//COMPOSITE
bool flag =true;
for (int i=2;i<=n/2;i++){
    if(n%i==0){
        flag = false;
    }
   
    
 
    
}if (flag==true) cout<<"prime";
else cout<<"composite";
}

