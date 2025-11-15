#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"enter the first number: ";
    cin>>*p1;
    cout<<"enter second number: ";
    cin>>*p2 ;
    cout<<*p1 + *p2;
}