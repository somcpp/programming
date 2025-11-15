#include<iostream>
using namespace std;
int maxoftwo(int a , int b){
    if (a>b)return a;
    else return b;
}
int main(){
    cout<<maxoftwo(3,6);
}