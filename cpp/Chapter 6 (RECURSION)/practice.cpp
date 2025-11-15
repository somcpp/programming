#include<iostream>
using namespace std;

//Q. make a function which calculates the factorial
//of n using recursion.

// int fact(int n){
//     if (n==1 or n==0)return 1;
//     return n*fact(n-1);
// }

// int main(){
// int n;
// cout<<"enter the no. ";
// cin>>n;
// cout<<fact(n);
// }
//Q.Make a fuction which calculates 'a' raised to the 
//power 'b'.
int power(int a,int b){   
    if (b==0)return 1;
    return a*power(a,(b-1));
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