#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1; j<=5-i;j++){
            cout<<"  ";
        }
        for(int j=65; j<=(2*i-1)+64;j++){
            char ch = j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
        for(int i=1;i<=4;i++){
        for(int j=1; j<=i;j++){
            cout<<"  ";
        }
        for(int j=65; j<=(7-2*i)+66;j++){
            char ch = j;
            cout<<ch<<" ";
        } 
        cout<<endl;
    }
}