#include<iostream>
using namespace std;

//Q.1. FIBONACII SERIES

// int fibo(int n){
//     if (n==1 or n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<fibo(n);
// }

//Q.2: POWER FUCTION

int power(int a,int b){   
    if (b==0)return 1;
    if (b==1)return a;
    if(b%2!=0) return power(a,(b+1)/2) * power(a,(b-1)/2);
    if(b%2==0) return power(a,b/2) * power(a,b/2);
}
int main(){
int x;
cout<<"enter the base: ";
cin>>x;
int y;
cout<<"enter the power: ";
cin>>y;
cout<<power(x,y);
}

//RECURSION DONE!