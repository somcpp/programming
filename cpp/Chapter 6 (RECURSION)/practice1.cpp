#include<iostream>
using namespace std;
// int stairs(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     return stairs(n-1) + stairs(n-2);
// }
// int main(){
//      cout<<stairs(8);
// }
void pow(int n){
    if(n%2!=0){
        cout<<"false";
        return;
    }
    if(n==2){
        cout<<"true";
        return;
    }
    pow(n/2);
}

int main(){
    pow(1024);
}