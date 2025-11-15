#include<iostream>
using namespace std;
void maze(int n){
    if(n==0) return; 
    cout<<n;
    maze(n-1);
    cout<<n;
    maze(n-1);
    cout<<n;
}
int main(){
    maze(4);
}