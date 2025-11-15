#include<iostream>
using namespace std;
void paren(string str,int op,int cl,int n){
    if(op == n && cl==n ){
        cout<< str << endl;
        return;
    }
    if(op<n){
    paren(str + '(',op+1,cl,n);
    }
    if(cl<op){
    paren(str + ')',op,cl+1,n);
    }
    
}
int main(){
    int n = 7;
    
    paren("",0,0,n);
}