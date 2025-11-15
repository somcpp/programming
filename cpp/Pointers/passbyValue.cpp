#include<iostream>
using namespace std;
int swap(int x){
    x = 100;
    return x;
}
int main(){
     int a,b;
     cin>>a>>b;
     int y = swap(a);
     cout<<y<<" "<<b;
}