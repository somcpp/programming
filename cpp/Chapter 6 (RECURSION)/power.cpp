#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;//BASE CASE
    return a*power(a,b-1);
}
int main(){
    cout<<power(3,4);
}