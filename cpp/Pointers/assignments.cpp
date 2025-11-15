#include<iostream>
using namespace std;
void multiply(int* p,int *q){
    int ans = *p * *q;
    cout<<ans;
}
int main(){
     int x,y;
     cout<<"enter x and y: ";
     cin>>x>>y;
     multiply(&x,&y);
     
}