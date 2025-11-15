#include<iostream>
using namespace std;
int swap(int& x, int& y){
    x=x+y;
    y=x-y;
    x=x-y;
    return x,y;
}
int main(){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}