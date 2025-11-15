#include<iostream>
using namespace std;

//Iiterative Method

// void hcf(int a, int b){
//     for(int i = min(a,b);i>=2;i--){
//         if(a%i==0 and b%i==0) return i;
//     }
//     return 1;
// }

//Recursive Method

void gcd(int a, int b){
    
    int k = max(a,b) % min(a,b);
    if(k==0){
        cout<<min(a,b);
        return ;
    }
    
    gcd(k,min(a,b));
}

int main(){
    int a = 60 , b = 17;
    gcd(a,b);
} 
//practice 1
// void gcd(int a,int b){
//     int k = b%a;
//     if(k==0){
//         cout<<a;
//         return;
//     }
//     gcd(k,a);
// }